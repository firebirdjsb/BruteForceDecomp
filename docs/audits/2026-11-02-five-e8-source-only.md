# Five C++17 source-matched declarations: retail XBE direct-call evidence

- Starting main: `cfd312898ace44896052762f79ae6c1f10d7f851`.
- Completed exact-tree audit: `fca5cb70aad51dd359b4d5de363ebf1169e53ab4`, 3,934 / 13,694 C++17 syntax passes; 9,760 failures. **No new syntax delta is claimed here.**
- Retail XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` (authenticated locally, never committed).
- Screened 49 source-matched call pairs from the multi-error declaration queue; promoted five independently conservative source declarations; quarantined the rest.
- For the five promoted pairs, the complete original caller and callee body SHA-256 matched the authenticated retail XBE; 18 original `E8 rel32` sites decoded to the recorded callee entry and decoded callee RET instructions were checked. Mutating an E8 displacement or a source-body byte fails the corresponding check.
- Each caller changed by **three added lines** (a two-line `ABI_UNVERIFIED` comment and an exact callee-draft `extern` declaration). No original function statements, local variables, return expressions, guest32 address operations, provenance labels, or function signatures changed.

| Original caller | Callee | Verified E8 call VAs | Original callee RET VAs | Source-only draft signature |
| --- | --- | --- | --- | --- |
| `0x0013AAD0` | `0x00135D60` | `0x0013AAFB`, `0x0013AB38`, `0x0013AB50` | `0x00135E18`, `0x00135E1E` | `undefined4 FUN_00135d60(void)` |
| `0x001516C0` | `0x00150930` | `0x00151731`, `0x0015173E`, `0x0015174B` | `0x001509BB` | `void FUN_00150930(void)` |
| `0x0029D000` | `0x00234C90` | `0x0029D00C`, `0x0029D032`, `0x0029D042` | `0x00234CC0` | `int FUN_00234c90(void)` |
| `0x00292690` | `0x002EBA73` | `0x002926BE`, `0x00292703`, `0x00292731` | `0x002EBA90`, `0x002EBA93` | `ushort FUN_002eba73(int,ushort)` |
| `0x001051E0` | `0x000EF180` | `0x001052D7`, `0x001052E0`, `0x001052E9`, `0x001054DA`, `0x001054E3`, `0x001054EC` | `0x000EF1A2` | `void FUN_000ef180(void)` |

## Scope of proof and regression

The original caller `0x0013AAFB` tests AL after its direct call; `0x0029D011` tests EAX; `0x002926C3` cleans two caller-pushed DWORDs with `ADD ESP,8`. These are **instruction-level facts**, not proof that Ghidra's inferred C++ return types, object layouts or host ABI are correct. All five remain `CPP_DRAFT, ABI_UNVERIFIED` for Xbox linkage and behavior.

The exact-source regression `tests/test_cpp_20261102_five_source_e8.py` pins the five caller preimages and five callee source digests; removing the inserted declaration must recover each original caller source SHA-256. Its negative controls reject source drift. The strict C++17 workflow runs this gate before the exact-tree inventory. Local Clang++17 O0/O2 synthetic type probes passed for all five declarations (10 positives, 10 declaration-removal negatives). These probes are **not** a full repository syntax audit.

Other examined candidates were quarantined for mismatched draft argument types (notably guest integer addresses versus host pointers), void-return consumption, x87/SSE-dependent values, missing complete original-body digest matches, or unresolved `thunk_FUN_00237ec0` contracts. Do not turn a source-only declaration into a claim of verified Xbox ABI or 1:1 behavior. Native PC linkage, virtual dispatch, SEH and guest32 memory translation remain unresolved.
