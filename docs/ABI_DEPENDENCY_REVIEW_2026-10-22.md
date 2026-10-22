# Dependency review and human-readable naming policy (2026-10-22)

`metadata/recovered_function_roles.csv` assigns **descriptive display names to four function entries** whose actual instructions and immediate callees have been inspected. This table is not a rename of stable `FUN_<address>` entry symbols; callers can still resolve existing exported identifiers. The CSV `original_body_sha256` column contains SHA-256 of original XBE bytes, not of the reconstructed C files.

## Reviewed interface links

**Formatting chain**

- `0x0033DF31` (stack cdecl + variadic arguments) → `0x002EB322` (stateful bounded formatter) → `0x002EDBDE` (unresolved formatting implementation), optionally `__flsbuf` at `0x002ED1EF`.
- `0x0037A3E0` (stack cdecl + variadic arguments) → `0x002EB322` → `DbgPrint` at `0x002FE1C0`.
- The two wrappers and `0x002EB322` share `include/bf_format_x86.h`. Host linkage tests use mock dependencies and passed; they do **not** establish Xbox CRT linkage.

**XNET-tag wrapper**

- `0x00349413`: incoming ECX context and two stack words, `ret 8`.
- `0x00349366`: ECX context and six stack words, `ret 24`.
- These are `thiscall`-*compatible* x86 ABIs established by stack/register behavior. Source signatures remain reconstruction choices, not proof of original C++ or compiler source language.
- Existing `src/0x00349366.c` has no incoming ECX parameter. **Do not** change that callee's implicit context or its internally called functions without new instruction and calling-site evidence.

**Register-heavy helper**

- `0x0006A610` consumes incoming EBX and EDI as pointer bases plus one stack-passed pointer. Three observed exits (`0x0006A64D`, `0x0006A6BD`, `0x0006A6D3`) each execute `ret 4`.
- Ghidra's direct-call inventory lists **57 distinct caller functions** targeting `0x0006A610` (re-counted from `reports/direct_calls.csv`); not all caller preparations have been verified. Existing (0x0006A5F0, 0x000907A0) assembly evidence is in `docs/STACK_ABI_EVIDENCE_6A5F0_907A0.md`.
- Until the register contract is modeled consistently across callers, replacing `&stack0x...` with any uninitialized local or guessing an ordinary C prototype is prohibited.

## Validation and remaining limits

Four modified `.c` files were checked with host `clang -std=c11 -pedantic-errors -Wall -Wextra -Werror` and Clang's i386 Windows target in syntax-only mode. Mock unit checks exercised formatting and XNET forwarding; one mock linked **three reconstructed formatting functions**. None is a verified Xbox build, game runtime test, original-source recovery, or byte-identical reconstruction.

There are additional unresolved `stack0x` expressions beyond these wrappers. No claim is made that the entire 13,694-file tree compiles, links, or has human-readable names.
