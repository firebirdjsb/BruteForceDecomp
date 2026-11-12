# `FUN_0001C4D0`: original-XBE-backed guest32 record rewiring

## Original evidence

The user's retail `default(3).xbe` (private; **never commit**) was authenticated
with SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Its 84 raw-backed executable bytes at original entry `0x0001C4D0` hash to
`BDD51F73956DD2E714AE63A6BF410C529C5FE39B05605A885DCE8F2C660ECADF`,
exactly the existing original-body provenance label. This is a contiguous
original function body: all three exits are `POP EBX; RET 4` at `0x1C503`,
`0x1C515` and `0x1C521`.

Original x86 instructions confirm the following **order-sensitive** guest
memory operations, not C++ class/member interpretations:

| Original x86 site | Instruction behavior |
|---|---|
| `0x1C4D0`–`0x1C4D8` | Read DWORD `[ECX+8]` into EAX, read `[EAX]` into EDX, write EDX to `[ECX+8]`, then **read `[EAX]` again** after the write. The two reads must not be merged if guest pointers alias. |
| `0x1C4DB`–`0x1C4E5` | Read exactly one byte at `[EDX+0xA9]`; if zero, write guest ECX to `[EDX+4]`. |
| `0x1C4E8`–`0x1C4EB` | Read `[ECX+4]`; write it to `[EAX+4]`. |
| `0x1C4EE`–`0x1C4F5` | After `PUSH EBX`, load the first *entry* stack DWORD from `[ESP+8]`, dereference guest `[arg+4]`, then compare `[EDX+4]` against ECX. |
| `0x1C4F8`–`0x1C506` | First branch optionally rewrites the predecessor at `[EDX+4]` and returns `RET 4`. |
| `0x1C506`–`0x1C518` | Otherwise reread `[ECX+4]` and compare guest `[EDX]`; second branch may rewrite `[EDX]` and returns `RET 4`. |
| `0x1C518`–`0x1C524` | Final branch writes `[EDX+8] = EAX`, then `[EAX] = ECX` and `[ECX+4] = EAX`; returns `RET 4`. |

The rewritten draft uses only the **existing** `bf_xbe_guest32_record_model.h`
read/write declarations; it introduces no raw host pointer dereferences,
truncations, class names, allocator, or fabricated original Xbox prototype.
The two host parameters are *explicit models* of incoming ECX and the entry
`ESP+4` guest stack DWORD; they are not an original `__thiscall` recovery.
Guest32 additions use unsigned modular arithmetic.

## Verification

- `python3 scripts/verify_20261107_0001c4d0_xbe.py --xbe PRIVATE_XBE`:
  full XBE authentication; exact 84-byte function-body digest; 27 instruction
  windows; 3 original JNE destinations; 3 `RET 4` exits; 168 negative controls.
- `python3 tools/test_cpp_20261107_0001c4d0_guest32_links.py`:
  Clang C++17 O0 and O2 independently compile the **actual source TU**.
  8,192 initialized guest-memory scenarios per optimization level compare
  *ordered individual guest reads/writes*, final byte-addressed memory,
  all three return paths and adversarial guest-address aliasing/wrap to an
  independent, x86-address-ordered micro-operation fixture. Six wrong operand,
  branch, or ordering mutations fail the same test.
- Existing 13,694-source layout and original-body-label checks, C++ policy,
  progress-gating and repository-safety checks are unchanged.

## Explicitly not verified

`ABI_UNVERIFIED`: actual x86 entry/return calling convention and stack setup,
EBX preservation in native linkage, guest VA memory mapping and fault timing,
interaction with other original Xbox code, runtime behavior, and native PC
executable linkage are **not established** by isolated compilation or mocked
memory tests. The mock implements a bounded guest-memory transport only.
Never label this source as byte-identically rebuilt or fully 1:1 executed.
