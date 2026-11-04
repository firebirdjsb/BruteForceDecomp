# Six conservative C++17 declaration repairs — 2026-10-31

## Exact-tree selection

- Starting main HEAD: `891bd70e31249dbe5bb4f1796e991ed39cd0acb4` (progress-only child of the completed audit SHA).
- Completed strict C++17 audit: `51ebd34d18a6cf917196b117cfdfc1d559069a9a`, **3,535/13,694** passing, **10,159** failing.
- Read-only declaration triage: 3,078 first-error caller/callee rows, of which 2,323 had matching Ghidra draft arity. Filtering for a single reported diagnostic and a syntax-passing callee produced 47 review candidates. Arity is NOT original Xbox ABI evidence.
- Six source-only declarations were selected after checking caller expressions, callee draft definitions, return use, source identity and unchanged original-body digest labels. No original game function statement, argument, cast, guest storage or body label changed.

| Caller | Callee | Source-only declaration | Remaining evidence |
| --- | --- | --- | --- |
| `0x0033C404` | `0x0033BBD6` | `void(int)` | ECX receiver, stack and RET unknown |
| `0x0033C44A` | `0x0033BC06` | `void(uint)` | ECX receiver, stack and RET unknown |
| `0x0033CA1C` | `0x0033BFE2` | `uint(int)` | Original call/return semantics unverified |
| `0x002E3560` | `0x00345DF1` | `ushort(ushort)` | Guest 32-to-16-bit argument contract unverified |
| `0x002E3590` | `0x00345DF1` | `ushort(ushort)` | Guest 32-to-16-bit argument contract unverified |
| `0x002EAE7C` | `0x002EE49D` | `uint(uint)` | Signed char promotion and CRT input contract unverified |

## Checks and verification boundaries

- Six pre-edit UTF-8 SHA-256 values matched the exact-tree audit; removing only the inserted declaration reproduces each original source preimage and preserves its recorded original x86 body SHA-256 label.
- Six focused Clang++17 source checks passed at `-O0` and `-O2` with equivalent guest scalar aliases. Declaration-removal and deliberately wrong-arity negative controls each failed as expected. The repository-header CI test is separately wired into the full strict audit.
- Three online caller/callee pairs compiled as host C++ objects; a relocatable host object link resolved all six original-address symbol names in that family. **This is not a complete native game link or Xbox calling-convention verification.**
- Original retail XBE bytes were **not available** in this execution. Required XBE SHA-256 is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. No original CALL/RET/register/stack instruction checks or differential behavior tests were performed. All six interfaces remain `ABI_UNVERIFIED`, `NOT_LINK_TESTED` for complete native integration, and `NOT_BEHAVIOR_TESTED`.
- The source-only filter rejected or deferred examples including `0x000BB600 -> 0x000CD9C0` (pointer result consumed as guest DWORD), `0x00232290 -> 0x002334B0` (void callee cast to a pointer), `0x0031C11A -> 0x0031C0FD` (void callee assigned to scalar), and `0x0017E200 -> 0x000A0C60` (void callee cast to float pointer). Do not introduce prototypes to paper over these discrepancies.

## Publication rule

Do not infer a +6 full-inventory syntax delta or change README percentages from focused checks. Publish only a completed provenance-clean exact-tree C++17 audit of the pushed commit. Linkage, Xbox ABI, behavior and native PC progress remain separately measured.
