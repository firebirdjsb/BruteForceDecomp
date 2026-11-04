# C++17 call-edge repair evidence — 2026-11-01

This is **original-XBE instruction evidence**, not proof of native linkage or complete 1:1 behavior. The pinned retail XBE SHA-256 is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The executable remains outside Git.

## Three bounded source repairs

| Original caller | Original CALL | Callee | Evidence | Remaining limitations |
| --- | --- | --- | --- | --- |
| `0x002E12A0` | `0x002E12EF` | `0x002E0960` | `PUSH ESI`, LEA scratch, `PUSH ECX`, `MOV ECX,EDX`; callee `RET 8` | Caller/callee native ECX interface and 24-byte guest stack-local aliasing unverified |
| `0x002E1360` | `0x002E1389` | `0x002E0960` | `PUSH EAX`, LEA scratch, `PUSH ECX`, `MOV ECX,EDX`; callee `RET 8` | Same implicit-register and stack-local limitations |
| `0x002F07E5` | `0x002F08D9` | `0x002F0784` | Original `FLD QWORD [EBP+8]` and `FLD QWORD [EBP+0x10]`; `FSTP QWORD [ESP]` supplies the callee double; caller cleans two stack words | x87 precision, external constant storage, other branches and native linkage unverified |

Original caller-body SHA-256 labels and entry addresses were retained. The `0x002E0960` callee has two observed `RET 8` exits at `0x002E0A6B` and `0x002E0A77`. Its original contiguous body digest, and that of `0x002F0784`, were matched to the retail executable.

The two scratch-call repairs use a pointer reinterpretation to the callee draft's observed 16-bit storage access, without converting a host pointer to a guest32 integer. The second DWORD remains a raw guest word. The double repair replaces numerical conversion of a concatenated 64-bit integer with an IEEE-754 bit-preserving copy. These changes preserve the observed argument values; they do **not** reconstruct all implicit guest register state.

## Checks and limitations

`tools/verify_cpp_20261101_three_edges_xbe.py --xbe /path/to/private/default.xbe --root .` verifies the pinned XBE, three original caller bodies, two callee bodies, three direct E8 targets, producer/cleanup windows, six original-byte mutation negatives and exact modified source digests. Without `--xbe`, its standalone IEEE-754 self-test remains usable.

Focused Clang++17 `-fsyntax-only` at `-O0` and `-O2` passed for the three source-identical isolated callers. Original-source negative controls failed at the missing declarations. A full exact-tree audit is required before changing syntax progress; neither isolated parsing nor instruction-window matching establishes complete original behavior.

The 2026-11-01 completed exact-tree audit at `e1944c8269e3dfe8c0851b7d309b091b92c56f6b` reported 3,841/13,694 C++17 syntax passes. This repair batch does not claim a measured net increase until the new exact-tree CI completes.

Complex x87/SEH, virtual dispatch, indirect calls, guest-memory translation, cross-function linkage and original-game execution remain separately evidence-gated.
