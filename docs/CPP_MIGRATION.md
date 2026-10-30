# C11 draft to evidence-driven C++ reconstruction

**Target-language decision (2026-10-30): C++ for the reconstructed game core.** Investigate the reported C++/Digital Anvil-derived engine and its virtual dispatch against original Xbox instructions and data. Do not infer a specific class, member, inheritance layout or compiler version from that characterization alone.

## Preserve existing evidence

- The 13,694 `0x????????.c` files are **historical decompiler drafts**, not proof that the original game was written in C. Keep each original x86 entry address, embedded function-body SHA-256 and instruction/caller evidence intact.
- The published **13,636/13,694 (99.58%)** C11 syntax result belongs only to the [historical audit commit](https://github.com/firebirdjsb/BruteForceDecomp/commit/55a72a1b089c473e55e2ecaf7d1a563034d235b1). It must **not** be presented as C++ syntax coverage or game completion.
- C/C++ source spelling and host C++ parsing are not Xbox object/ABI/behavior equivalence. Some linked runtime and platform components can have their own language and ABI conventions.

## Migration gates

1. **Measure before renaming.** Run `python3 tools/sweep_cpp_compat.py --root . --out cpp_compat_results --jobs 8 --limit 100` for a sample, then omit `--limit` for all 13,694. This compiles current `.c` files **as C++17** using Clang, without source edits, and verifies original body hash labels. C++17 is only a host-parsing baseline, **not evidence of the original Xbox compiler or C++ dialect**. Do not hide strict C++ type errors with permissive flags or guessed declarations.
2. **Host type-alias separation.** The Xbox 32-bit `ulong` draft alias conflicts with the LP64 Linux C++ system `ulong`; `include/bf_ghidra_types.h` now preserves a 32-bit guest alias in C++ without changing its C11 definition. This is a parsing compatibility measure, not a verified native object layout.
3. **Adapt dependent tooling.** Update `tools/source_layout.py`, `scripts/check_sources.py`, inventory and source-group path metadata, provenance tests, audit/report tooling, existing workflow path references and README progress-generation code before declaring canonical `.cpp` files. The original 13,694 identities must remain complete, unique and correctly filed.
4. **Move files with content preserved.** The initial `.c` to `.cpp` move must be byte-for-byte (except later separately reviewed repairs). Check source SHA-256 and original XBE body SHA-256; migrate in small reviewed batches on `main`. A renamed file remains `CPP_DRAFT, ABI_UNVERIFIED`, not reconstructed C++.
5. **Repair C++ parsing with verified types.** Prioritize missing declarations, scalar/pointer conversions, indirect-call signatures, POD/union use and guest32 pointer contracts. No host pointer should substitute for an Xbox guest address just to satisfy Clang.
6. **Recover real C++ objects.** Validate vtable addresses and slots, vptr/member offsets, constructors/destructors, adjusted `this`, inheritance, `ECX`/stack arguments and `RET n` against original x86 caller/callee evidence. Do not assume each indirect call is virtual or invent an object type.
7. **Separate ABI and runtime testing.** Use matching original Xbox 32-bit x86 and MSVC-compatible object/ABI rules where established. Linux `clang++` syntax is **not** an Xbox vtable or `thiscall` check. Cross-function linkage, guest-memory/SEH, x87/SSE, platform adapters and playable Windows builds remain separate verification gates.

Status labels: `C_DRAFT` (historic) -> `CPP_DRAFT` -> `CPP_SYNTAX_OK` -> `X86_OBJECT_ABI_REVIEWED` -> `CROSS_FUNCTION_TESTED` -> `BEHAVIOR_TESTED`. Never automatically promote a function. Publish a separate C++ percentage only after a complete, provenance-clean, exact-commit 13,694-function audit.


## Source migration staging completed

All 13,694 original-address C drafts were moved to .cpp without changing their Git blob contents. The historic C11 99+% syntax baseline is archived; C++ compilation and virtual-function reconstruction are separate goals.
