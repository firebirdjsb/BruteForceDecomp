# 2026-10-31: five source-only C++17 declaration repairs

All five callers below were identified from the exact-tree C++17 report for
commit `15586ce8ccd00c99ae8dc05e78399887639bdad3` as having a **single**
undeclared-identifier compiler error. The linked callee draft had a matching
**Ghidra-derived** signature. Only a file-scope declaration and an
`ABI_UNVERIFIED` warning were inserted; original caller function bodies,
entry addresses and original x86 body SHA-256 labels were not edited.

| Caller | Referenced callee | Original source SHA-256 (before insertion) | Original x86 body SHA-256 *label* |
| --- | --- | --- | --- |
| `0x000E0B20` | `void FUN_002f254a(void)` | `0663dc86058aa049f6f6398869089c42c10af0e2d283da762a52e847d92cc577` | `107857E3EDD8242F0C56BFE62A5034AE4A6C822D32B240BD6DD31E4CD6A77985` |
| `0x00302460` | `void FUN_00302430(void)` | `9089e9e05f57200f4c7525e89ccebc08238eff6fa43076dd63a5ab303daedb1d` | `A322E23ED37436EFC0A98CD0575E9CB6B7B663517EA99082E2E92E7738412573` |
| `0x00315E78` | `void FUN_00317b5d(int)` | `c881d06947ac1a920bac501e835552000aebb649617795131480ca79fcf8dd24` | `CE7BB445DC4885E9A50E01D3BAE2342FA309D4854C57895D51A4D4D451F3895D` |
| `0x00375940` | `float10 FUN_003758d0(float)` | `58a29b5de501ec5033ce6c38a63720e481d727f7def4dfbeba3281ef9f6f0623` | `D045256A2F5BF519CEDB7711D8C77F77D5C795358D5983432FE39E5BCB149417` |
| `0x00375980` | `float10 FUN_003758d0(float)` | `0f524e3ebc5435e17ddc60c9f5c7137e33b385b67fb867573a3b4b47ec3f895e` | `D24B5EF6282993AE8D8C4EC1E9197D9340946DA480C28E25ED2C2341283079A0` |

## Regression gates

Three focused tests inspect the preserved source SHA-256 when the declaration
is removed, match the declaration to the callee's existing definition, check
the original body digest label, run host Clang++17 `-O0`/`-O2` syntax
preflights, and require negative missing-declaration cases to fail:

- `tools/test_cpp_20261031_position_check_source_call.py`
- `tools/test_cpp_20261031_two_source_matched_calls.py`
- `tools/test_cpp_20261031_two_x87_source_calls.py`

They are included in `.github/workflows/cpp-compatibility-audit.yml`.
**These are source-level/regression tests, not original Xbox instruction
proof.** No full-audit pass increase should be credited until a completed
exact-tree 13,694-function Clang++17 audit of the changed tree is published.

## ABI and behavioral quarantine

The original retail XBE has **not** been reauthenticated in this repair
session; no original CALL displacements, guest register producers, x87
precision/rounding, SEH behavior, stack cleanup, dynamic indirect targets,
object layouts or game-level outputs were independently checked in this
batch. In particular the D3D `float10` drafts retain their original
unverified x87 bit/precision semantics; adding an `extern` is not a fix for
those issues. There are no guessed 32-bit-host-pointer casts, additional
arguments, stubs, link shims, data structures or executable replacements.
Source-only declarations do **not** establish source-code or behavioral 1:1
equivalence.

The original private XBE remains external to Git and must be authenticated
against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`
before a behavior or ABI status upgrade.
