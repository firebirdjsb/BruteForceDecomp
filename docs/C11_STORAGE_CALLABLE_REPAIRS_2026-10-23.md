# Storage and callable-expression repairs — 2026-10-23

Continue the preceding [scalar/dispatch batch](C11_SCALAR_DISPATCH_REPAIRS_2026-10-23.md)
toward the [native PC port](NATIVE_PC_PORT_GOALS.md). Scope is evidence-backed
C11 draft repair. Original ABI, linking, game execution, and 1:1 behavior remain
independent requirements.

The original local XBE SHA-256 stays
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original function-body hashes and entries are preserved. Noncontiguous Ghidra
body ranges are concatenated in their recorded order when verifying hashes.
No XBE, assets, complete disassembly, or Ghidra database is added to Git.

## Storage evidence

| Sources | Observed instruction behavior | Draft repair |
| --- | --- | --- |
| `0x00068020`, `0x000c70a0` | Ten global operands are consumed directly by DWORD `IMUL` instructions. | Replace data-pointer declarations with 32-bit integer words. |
| `0x00059000`, `0x00095070`, `0x000d2040`, `0x000ea6c0`, `0x00127290`, `0x0012bc60`, `0x0012c020`, `0x00212430`, `0x002c2fc0`, `0x00319c62`, `0x00319e80`, `0x00319edd` | Global storage is read directly as x87 m32fp operands. | Declare the cited storage as four-byte floats; preserve all other operations. |
| `0x000f0870`, `0x000f3140`, `0x000f8480`, `0x000f8540` | `XOR EBX,EBX` precedes a 16-bit stack write from BX. | Write only the low two bytes, without reading or initializing unknown upper bytes. |
| `0x002f21ca` | Three `MOVSD` instructions copy 12 bytes, then `DEC DWORD [EBP-0xa]` decrements the four bytes at scratch offset +2. | Use six raw 16-bit words and `memcpy` for the overlapping, unaligned DWORD; decrement with 32-bit unsigned wrap. |
| `0x002b6500`, `0x002b65a0` | `MOVSS`/`MOVHPS`, `MULPS`, two `SHUFPS` operations, `ADDPS`, and `ADDSS` reduce the three squared float lanes; `RSQRTSS` reads the stored sum. | Preserve those SIMD lane operations with C intrinsics, replacing invalid array/subpiece syntax and numeric casts of packed bits. |

The packed reduction consumes lanes for offsets +0, +4 and +8. It adds the
squared +4/+8 lanes, then the squared +0 lane. The branch tests x87 status with
`TEST AH,5`: strictly smaller returns zero; equality, greater and unordered
continue into `RSQRTSS`. C3 (equality) is outside the mask. The threshold is the
original binary32 word `0x2edbe6ff`, represented by `1e-10f`.

The partial stack-write repairs do not reconstruct a whole string object or
guarantee adjacency of separate C locals. The 12-byte scratch repair assigns no
meaning to its contents. Existing stack models and callee contracts stay
unverified. No unknown bytes are zero-filled to force a compiler pass.

## Callable slots

Twenty-nine drafts called through globals incorrectly declared `uint32_t *`.
The original instructions load or directly call DWORD function-pointer slots;
focused evidence includes register calls and function-address stores where
needed to establish the slot's use. All changed symbols' uses were inspected.
Replace their declarations with the existing unresolved `code *` type, without
adding a concrete argument list, return type, or calling convention. Each source
comment cites its original instruction addresses.

`code()` remains the project's explicitly unresolved function type. Neither its
`uintptr_t` return assumption nor the host pointer width is established as the
original Xbox ABI. Other translation units and function-pointer setters still
need linked-storage and signature review. This repairs callable-expression
syntax; it does not recover a complete callback contract.

All 29 original called-object errors disappear. Twenty-three of these drafts
now pass the focused audit; six expose another pre-existing error.

## Focused checks

The batch changes 50 C drafts. Clang 22.1.8 reports **42 passes / 8 failures**
on both Windows x86-64 and i686 targets with the inventory's existing warning
allowances and `-msse`. Forty are newly passing; two float-declaration repairs
were already syntax-passing. The preceding five-source batch adds five more
new passes, for **45 newly passing functions** across the two batches.

These syntax checks allow unresolved external declarations and pointer/integer
conversions. For example, pointer uses and object layout in `0x000f0870` and
`0x000f3140` remain warnings/ABI issues; no host-pointer-sized object was invented
to suppress them. These are not strict, warning-free, linked C11 builds.

The eight touched drafts still failing are:

| Entry | Remaining first error |
| --- | --- |
| `0x000d61a0` | Unknown `stack0xfffffffc` |
| `0x000d6520` | Unknown `LAB_001fdfe0` |
| `0x00127290` | Unknown `stack0x00000000` |
| `0x0012c020` | Unresolved SIMD array assignment and other global typing |
| `0x0017f700` | Unknown `stack0xfffffee8` |
| `0x001e1f40` | Unknown `stack0xffffffb0` |
| `0x00219520` | Unknown `LAB_00219510` |
| `0x003574b0` | Invalid Ghidra member expression on `longlong` |

An isolated MSVC x64/MASM harness includes the actual two packed-SIMD C drafts
and compares their modified vectors, plus `0x002b65a0`'s return decision, with
the original SSE/x87 instruction sequence. Eleven cases pass: signed zero,
subnormals, threshold neighbors, exact equality, finite mixed values, NaN,
infinity and overflow. `0x002b6500`'s extended-precision return is not validated.
Five isolated scratch cases compare the C byte-copy/decrement model against
three MASM `MOVSD` instructions and a DWORD `DEC`: zero, one, halfword borrow,
all ones and an ordinary value pass; bytes outside offsets 2..5 are preserved.
The harness and executable remain outside Git. These are host instruction-model
checks, not game execution or proof of Xbox floating-point-state equivalence.

## Evidence reproduction and limits

`python tools/verify_storage_callable_repairs.py --xbe path/to/original/default.xbe`
checks the exact local input, original body ranges, focused instruction windows,
and original initializer words. This checks cited binary evidence; it does not
execute the C drafts or validate their ABI.
The verifier covers all 50 changed original bodies, 140 instruction windows,
and 11 original initializer words. A changed-XBE negative check is rejected.

Only changed canonical C-source digests and evidenced syntax states are refreshed.
ABI and behavior states remain `UNVERIFIED`. Errors that remain in
`0x00127290` (unresolved stack storage) and `0x0012c020` (other global/SIMD
expressions) are retained. The integer declarations still present for overlapping
float storage in `0x0002e800` and `0x00047050` require a separate bit-preserving
write review before linked storage consistency can be claimed.

Followed the same [REA evidence discipline](C11_REPAIR_PASS_2026-10-23.md#rea-workflow-boundary):
exact input identity, original-instruction evidence, and explicit unknowns.
These are local XBE/Ghidra/Capstone observations, not REA Evidence records from
a configured native engine.

## Deployment and rollback

Source and validation changes only. No installed game, save, production service,
or proprietary evidence was modified. Revert the repair commit to roll back,
then rerun the syntax inventory. No function is newly marked 1:1 or runtime-tested.
