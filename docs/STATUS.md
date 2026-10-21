# Project status — 2026-10-21

## Verified input identity

- Game: Brute Force (original Xbox x86).
- `default.xbe` SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Ghidra discovered **13,694** functions and the user exported their pseudocode. These are discovered functions, not proven total original function coverage.
- Uploaded current workspace includes **103** legacy `.cpp` reconstruction drafts requiring C11 migration.
- The main `default.xbe`, full `FunctionExport`, and Ghidra projects stay off GitHub.

## Track each function by state

`C11_Pending` → `C11_Draft` → `C11_Syntax_OK` → `Reviewed` → `Semantics_Tested`.

Unknown ABI or unresolved indirect calls must be recorded, not guessed. Even `Semantics_Tested` does **not** establish byte-identical recompilation.

## Work plan

1. Maintain a versioned inventory indexed by function entry and original body SHA-256.
2. Convert the 103 existing C++ drafts carefully to C11; preserve their original metadata and note all uncertainties.
3. Update the local viewer/Codex batch runner to generate **.c** instead of **.cpp**.
4. Add 32-bit compiler/build checks and targeted regression tests before marking drafts verified.
5. Continue with unresolved x86 control-flow and ABI investigation.
