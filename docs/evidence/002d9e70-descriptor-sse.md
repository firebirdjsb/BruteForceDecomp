# 0x002D9E70: descriptor words and packed SSE storage

Status: bounded C11 draft repair; instruction operands reviewed, host syntax
checked. **ABI, linked execution, original-versus-C behavior and byte match
remain unverified.** No game or installed binary was modified.

## Provenance

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x002D9E70`, original ordered body ranges
  `0x002D9E70..0x002D9EFC` (141 bytes), then
  `0x002D9F00..0x002D9FA2` (163 bytes).
- Ordered original body SHA-256:
  `5EC0AE0658BBF8315E5B890ECEEFF15CF2A07218F4E17F5833373BF986CC1843`.
- Private export body ranges and fresh disassembly from the hash-checked
  original XBE were checked, including callees `0x002D9DD0` and
  `0x002D9D10`. No third-party game behavior was used.

## Observations and bounded changes

| Original sites | Observed operation | Draft representation |
| --- | --- | --- |
| `0x2D9E78..0x2D9E88` | One stack argument; DWORD `+4` signed-tested; DWORD `+12` loaded as address | Opaque descriptor, raw 4-byte loads, unsigned address words |
| `0x2D9E94..0x2D9EAE` | DWORD `+8` scaled by four; pivot address aligned down to 16 bytes; `(offset/4 - ESI + EDX)` cached before call | Wrapping `uint32_t` addresses and packed count, cached in that order |
| `0x2D9EB1` | Direct call `0x2D9DD0` with EDI descriptor and ESI index | Existing unresolved call retained with explicit register-marshalling limitation |
| `0x2D9EB6..0x2D9ECD` | Reload pivot, x87 absolute compare, `TEST AH,5` / `JNP` | Continue on greater, equal **or unordered**; ordered less skips |
| `0x2D9ED3..0x2D9EE8` | RCPSS, scalar store, x87 negate, scalar store | Actual RCPSS intrinsic low result; explicit float storage boundary |
| `0x2D9F00..0x2D9F18` | Load row value, absolute compare, `TEST AH,0x41`; FMUL/FSTP DWORD | Only ordered greater updates; float factor stored after scalar multiply |
| `0x2D9F1B..0x2D9F47` | Broadcast factor; read 16 destination bytes; MULPS source then ADDPS destination; write all 16 bytes | `__m128` intrinsics with separate multiply/add and all four lanes retained |
| `0x2D9F4B..0x2D9F4E` | Unconditional first block; SUB count,4 / JG | Do-while; continuation uses signed old count >4, including overflow cases |
| `0x2D9F50..0x2D9F62` | DWORD `+16` guest address; x87 FMUL then FADD, final DWORD store | Wrapping scalar addresses; extended host proxy until final float store |
| `0x2D9F6C..0x2D9F94` | Reload stride and dimension; advance row/pivot with 32-bit LEA; signed CMP branches | Reloads retained; unsigned arithmetic wraps before pointer conversion |

The former draft treated integer descriptor bits and guest pointers as float
values, attempted illegal assignment to 16-byte arrays and used invalid pseudo
lane fields. The replacement does not assert a descriptor struct or gameplay
meaning. Aligned blocks include leading and trailing lanes; they must not be
replaced by scalar updates of just the nominal remaining element count.

`0x2D9DD0` reads descriptor `+4/+8/+12/+16`; its own writes and those in
`0x2D9D10` address the pointed storage, rather than directly assigning dimension
or stride fields. Aliasing is not disproven, so the caller's observed reloads
are preserved. The helper uses a stack argument plus EAX/ECX/EDX for its nested
call and cannot be correctly linked merely by assigning a conventional C
prototype. No helper source or shared declaration was changed.

## Checks and limits

- Focused syntax passes under `tools/sweep_c11.py` FLAGS, include directory
  `include`, Clang targets `i686-pc-windows-msvc` and
  `x86_64-pc-windows-msvc`, with `-msse`.
- Independent arithmetic check: 10,013 count values, including both signs and
  subtraction overflow boundaries, compare SUB-derived SF/OF/ZF and JG with
  the draft's sign-bit-biased unsigned ordering; all pass.
- All four x87 comparison status outcomes checked against both TEST branch
  predicates; outer unordered proceeds and inner unordered skips.
- These flag checks are calculations, **not** original-instruction execution
  or original-versus-C differential tests. No runtime result is claimed.
- An independent reviewer rechecked the complete pinned original body and
  approved the bounded repair, including alias-sensitive reads and signed
  subtraction overflow. This does not establish the full helper interface.

Residual limits: ordinary C does not marshal the helper's EDI/ESI contract or
the entry's original `RET 4`; direct guest casts require identity-mapped memory.
Host long double does not model guest x87 control/precision/exceptions; host
MXCSR and RCPSS approximation may differ from original hardware. Signaling NaN
exceptions, payload propagation, full exit register state, instruction fault
timing and prefetch effects remain unresolved. The source disables FP
contraction but that is not a full floating-point environment model. Memory
must have the original valid backing/alignment; no new bounds checks, page
changes or manufactured fallback values were introduced.

Scope is this source and this evidence note. No metadata, shared verifier,
callee, production data or deployment was changed. Rollback is restoration of
these two files; no installed artifact needs rollback.
