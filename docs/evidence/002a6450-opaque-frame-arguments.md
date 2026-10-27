# 0x002A6450: opaque stack frame and observed callback arguments

Status: bounded C11 storage/argument reconstruction; host syntax passes.
**Callback ABI, guest execution, behavior and byte match remain unverified.**

## Provenance

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x002A6450`, contiguous 194 bytes `0x002A6450..0x002A6511`.
- Original body SHA-256:
  `CD856200D4E1AA40079BBC85E2437C0D6E532B57C1A9E0E8977A987C61A2542E`.
- Repaired source SHA-256:
  `E2AB133657977AF6281A117F4BB00A81E8DFA21C6B23B97718E38B2BB93EDEB2`.

Fresh original inspection authenticated the full XBE and original body before
decoding all 194 bytes. No third-party behavior or helper implementation was
imported.

## Coordinates and call words

Let `S` be entry ESP, `F=S-0x20` the allocation after SUB ESP,32, and
`T=F-4` after PUSH EBX. The function supplies the following explicit stack
words in original callee argument order; ESI/EDI are implicit entry inputs,
not recovered C parameters. The names below identify registers only.

| Site / slot | Observed stack argument words |
| --- | --- |
| `0x2A645C`, ESI vtable+28 | ESI, guest address F+8 |
| `0x2A6462`, ESI vtable+20 | ESI; EAX DWORD is subsequently saved at F+0 |
| `0x2A6471`, ESI vtable+64 | ESI, guest address F+4 |
| `0x2A6488`, EDI vtable+20 | EDI, guest address F+8, 4, 0 |
| `0x2A6497`, EDI vtable+20 | EDI, guest address F+12, 2, 0 |
| `0x2A64A6`, EDI vtable+20 | EDI, guest address F+0, 2, 0 |

The store at `0x2A646A` occurs after pushing the F+4 address: `[ESP+8]`
therefore denotes F+0. At `0x2A6474` the function reads a DWORD from F+4.
It captures the EDI vtable **base** at `0x2A6478`, then copies that DWORD to
F+12 at `0x2A6484` while four argument words are pushed. The indirect CALL
at `0x2A6488` reads the target slot from the captured base **after** the write.
The source preserves the base-load/store/slot-load/call order. The table may
alias the original frame; capturing the complete target before the store
would introduce an unsupported aliasing assumption. Each subsequent call
reloads its vtable and target slot.

At `0x2A64AB`, WORD `[T+4]` = WORD `[F]` is compared unsigned against BX=0.
If nonzero, PUSH EBP changes the running base to `U=F-8`. Loop operations:

| Site / slot | Observed stack argument words or write |
| --- | --- |
| `0x2A64B5..0x2A64D7`, ESI vtable+44 | ESI, zero-extended BX, guest address F+16 |
| `0x2A64BF/C7/CF` | Three DWORD zeros at F+20, F+24, F+28, after capturing the ESI vtable base but before loading its +44 target slot and calling it |
| `0x2A64E3`, ESI vtable+48 | ESI, zero-extended BX, guest address F+20 |
| `0x2A64F2`, EDI vtable+20 | EDI, guest address F+16, 4, 0 |
| `0x2A6501`, EDI vtable+20 | EDI, guest address F+20, 12, 0 |
| `0x2A6504..0x2A650A` | INC full EBX, then unsigned BX < WORD `[U+8]` = WORD `[F]`; bound reloaded on every iteration |

For example, while the +44 call's three arguments are pushed,
`[ESP+0x28]` = `U-12+40` = `F+20`. The three zeros are not at F+16;
that region remains callback output without manufactured initialization.
All observed local regions fit the original 32-byte allocation.

At `0x2A64B3`, only the vtable base is read. The target slot at base+44 is
read by the indirect CALL at `0x2A64D7`, after all three zero stores. This
second base-load/store/slot-load ordering is preserved separately as well;
it must not be collapsed into an early complete-target capture.

The former source omitted these argument words, contained a nonexistent stack
identifier and derived its loop bound from the low bits of a host pointer.
The replacement uses opaque bytes, raw DWORD stores/loads and a two-byte
unsigned bound. It does not label the function or callback operations as a
particular stream, format or gameplay behavior. Size argument words 2/4/12
are observed arguments, not proof of what every callback actually writes.

## Interface and verification limits

The original has no ADD ESP between these calls. Its subsequent stack accesses
therefore depend on the callees removing their pushed argument words. The
actual dynamic callback targets and their complete cleanup/register contracts
have not been established. The existing non-prototype `code` type is retained;
no callback prototype, receiver calling convention or implementation was
invented. ECX is used to prepare output addresses in several windows, while
the receiver words are explicitly PUSHed; that does not establish a universal
ECX receiver convention.

The input ESI/EDI proxies remain uninitialized in ordinary host C because no
guest-register bridge exists. Frame pointers are four-byte guest argument
words, and truncating host-local pointers requires a mapped guest stack before
execution. Unwritten bytes remain unknown; callback output, exception paths,
pointer retention, aliasing with the original guest stack and fault timing
are unverified. A local byte array does not supply that runtime machinery.

Checks: full pinned XBE/body authentication; complete original disassembly;
stack-coordinate and access-width review; focused Clang C11 passes using
`tools/sweep_c11.py` FLAGS for `i686-pc-windows-msvc` and
`x86_64-pc-windows-msvc`, with include directory `include`.
No linked or original-versus-reconstruction runtime test was run.
An independent reviewer authenticated the original body and checked every
frame coordinate, argument word and loop comparison. The final code preserves
the separate vtable-base read before frame writes and callback-slot read after
them at both affected sites; these reads must not be collapsed across stores.

Scope: this source and evidence note only. No metadata, shared tools, installed
game, deployment or production data changed. Rollback restores these two files.
