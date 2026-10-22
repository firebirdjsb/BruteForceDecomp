# Cross-function C interface blockers — October 22, 2026

**Important:** Passing isolated `clang -fsyntax-only` or mock-linkage tests does not mean all 13,694 C units link into an Xbox binary. The exact checked-out repository sweep at commit `c7a0a2d5ef7360c0b2aec2f302e45e90f3e559e6` found **11,917 passing units and 1,777 failing units** with compatibility-warning allowances. There were zero *detected* embedded function-body hash mismatches, but **99** legacy C files had no parseable embedded body digest. The original hashes remain available in migration metadata. A new sweep was triggered after further source changes.

## Formatting dependency chain

- `0x002EB322`, `0x002EAA19`, and `0x002EBCE0` all call `FUN_002EDBDE`. The new shared `bf_format_x86.h` deliberately declares its state parameter `void*`, reflecting use with both an observed 16-byte local record and the global output-state object at Xbox VA `0x003B69A8`. The **Ghidra-derived definition** in `src/0x002edbde.c` still uses `undefined4` for the first parameter and `uint*` for the variadic argument pointer. It has not been reconciled with the shared C header, and its large formatting state machine is not behavior-verified.
- `0x002EAEFA` calls `FUN_002EE515`; the original Ghidra C draft still models the internal formatter with `FILE*`, `byte*`, and `undefined4*` rather than a proved compatible shared prototype. This must not be guessed into one struct type.
- `__flsbuf` at `0x002ED1EF` has a large CRT stream interface. Passing a pointer to a 16-byte local output record in the wrapper is observed in machine code, but the callee has more internal state fields on other paths. Do not generalize that local record as a complete `FILE` object.
- `__stbuf` and `__ftbuf` at `0x002EF27E` and `0x002EF306` remain unverified linked CRT functions. Isolated mock tests check argument order and byte counts only.

## XNET tagged-record dependency chain

- `src/0x00349366.c` and wrapper `src/0x00349413.c` now share `include/bf_xnet_record_x86.h`, with ECX context and observed `ret 24` / `ret 8` argument cleanup.
- `FUN_0034CB5A`, `FUN_00347FE3`, `FUN_0034C932`, and `FUN_00348E95` currently have older Ghidra-generated function bodies/signatures that do **not** necessarily match their more specific call-site declarations (especially implicit ECX inputs). The new C interface prototypes are **analysis models**, not an already link-consistent replacement of all four sources.
- The XNET record payload copy uses 32-bit and 8-bit *forward* copying as shown by x86 `rep movsd` / `rep movsb`. Actual wire-record consumer validation remains pending.

## Shared lookup-helper group

- `FUN_0006A610` reads EBX and EDI registers plus one caller stack pointer. At least three verified returns use `ret 4`.
- The direct-call list has **57 distinct caller functions**. The individual callers `0x0006A5F0` and `0x000907A0` have assembly-grounded register/value preparation models in `analysis/bf_6a610_call_preparation.c`. Their original C drafts still contain unresolved stack pseudovariables and have **not** been rewritten as an unverified plain-C caller.
- The remaining caller register preparations and the callee's data layout are not yet verified as one shared `struct`.

## Naming and validation requirements

Readable roles should be kept separately in `metadata/recovered_function_roles.csv` until proven from original instructions and call paths. Stable `FUN_<entry>` identities remain for debugging/cross-referencing. Never declare new gameplay objects, network packet semantics, or arbitrary C prototypes solely to silence Clang.

The normal next gate is to inspect each *actual source definition* and all callsites against original disassembly, then update headers and tests together, and only after that attempt full 32-bit linking. All this remains reconstruction, not original source recovery or byte-identical recompilation.
