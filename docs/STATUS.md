# Project status — 2026-10-23

## Current progress source

The current, automatically maintained C11 syntax percentage, source pass/fail counts and exact GitHub Actions audit commit are recorded in [docs/progress/current.json](progress/current.json) and displayed on the [repository README](../README.md#reconstruction-progress). **This is syntax coverage, not completion of the native PC game.**

## Historical exact-tree source and compiler checkpoint

- **Canonical branch:** `main` only. The last complete full-tree audit ran on commit [`985639aa`](https://github.com/firebirdjsb/BruteForceDecomp/commit/985639aa5dba1925558d6f674cf6f021b3ff341c).
- **Function inventory:** exactly **13,694** distinct recovered C11 draft files, deterministically organized by original XBE section, otherwise by unclassified main-code address band; only 15 assembly-reviewed readable aliases have their own named folders.
- **Complete Ubuntu host Clang C11 syntax audit:** **12,344 passing, 1,350 failing, 0 missing sources, 0 original body-hash label mismatches**, at [GitHub Actions run 39970983553](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/39970983553). The audit deliberately suppresses selected warnings and does not link the functions.
- **Recent evidence-backed repairs:** `0x000E7780` original 32-bit x87 stack float word and unordered branch; `0x0006A5F0` and `0x000907A0` actual caller stack-word addresses; `0x0006A610` original immediate data word `0x003A3890`. These are partial dataflow/ABI observations, not complete behavioral equivalents.
- **Original XBE provenance:** SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`; the game binary itself is not in GitHub.
- **Native-PC build gate:** **not reached**. No 13,694-function integrated link, no resolved implicit x86-register calling contract, no complete Xbox-to-PC API adapters, no verified game launch. Before any widescreen, HD texture, high-refresh, 64-player or modding work can run, the core must compile, link and execute with verified semantics.

The figures above are an **exact commit audit**, not an estimate of correctly reconstructed game functions. All older upload counts and status text below are historical and must not be read as current.

## Continued original-XBE C11 repair checkpoint — 2026-10-23

The [continued x86 repair ledger](X86_C11_REPAIR_PASS_2026-10-23_B.md) covers five additional narrowly grounded repairs (`0x0006C840`, `0x000AA3B0`, `0x000447B0`, `0x0005C730`, `0x0008F5D0`) and keeps unresolved high stack bytes, x87 behavior and callback relocation explicitly unverified. The focused CI scope is now 22 individual C11 files, with 100 original instruction fingerprints and 33 direct-call checks. Always consult [live verified audit metrics](progress/current.json) for the current count; **no overall percentage is changed merely by committing source fixes**.

## Verified x86 register/stack ABI checkpoint — 2026-10-23

The [latest focused call-contract pass](X86_ABI_LINKAGE_PASS_2026-10-23.md) verifies two additional limited C11 repairs (`0x00081D10`, `0x001E8CD0`) against original instructions; it inventories twelve direct call sites to `0x00087630`, whose original interface uses EAX plus a stack word. The original XBE verifier now includes **82 exact instruction windows** and **33 known near-call destinations**, along with **17 source-invariant checks**. The original mixed-register ABI is **not yet represented by safe linked host-C signatures**. The focused CI compiles 17 repaired C files in isolation; passing that does not imply an integrated native link. The latest published pass/fail totals and their exact audited commit are maintained automatically in [docs/progress/current.json](progress/current.json); earlier counts in this document remain historical. No native-PC linked binary is claimed.

## Current repair evidence — 2026-10-23

See [the current repair ledger](C11_REPAIR_PASS_2026-10-23.md) for nine
instruction-backed float-storage corrections, restored CI after source relocation,
and checks against the original XBE. The older upload and syntax totals below are
historical snapshots. The latest whole-tree inventory is an audit, not a native
PC build or proof of 1:1 behavior. ABI and runtime verification remain outstanding.

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

## 2026-10-21 — Complete legacy C11 migration package prepared

- **All 103 legacy C++ drafts** now have generated ISO C11 counterparts with preserved function address and original body hash.
- **103/103 pass Clang C11 syntax-only** under warnings that tolerate unresolved prototypes, pointer/int conversions, and unknown external ABI. This is **not** Xbox compilation or behavioral verification.
- The existing four C11 drafts already on GitHub remain protected; the remaining 99 sources and full migration metadata are staged in the downloadable `BruteForce_C11_All_103.zip` workspace. **They are not yet pushed to GitHub.**
- Local script `Sync-103-C11-To-Private-GitHub.ps1` checks repository visibility and source digests, then uploads 99 new `.c` drafts, unresolved-symbol declarations, and per-function tracking. It never uploads the original XBE, ISO, full decompiler exports or backup CPP archive.
- No new function has been marked ABI-verified, behavior-verified or byte-identical. Recovered signatures, SSE/x87 semantics, data symbols, stack layouts, and virtual-call prototypes are still under review.

## Bulk C11 draft staging — 2026-10-21

- Local generated package: `BruteForce_C11_13694_v1.zip`. It has **13,694** C files (one per Ghidra-discovered function); **103** preserve existing translated draft candidates; **13,591** are mechanical C-form output from Ghidra pseudocode.
- **13,694/13,694** checked with host Clang 17 `-std=c11 -fsyntax-only`, with some warning categories permitted for unresolved prototypes/pointers. **11,703 passed**, **1,991 failed**. This is **not** an Xbox build.
- Function-level SHA-256 provenance and compiler diagnostics are in the package inventory. **No** ABI or behavior equivalence has been established for the 13,694, and several aliases and unknown data declarations require repair.
- **Private GitHub source upload is pending.** The optional local `Push-C11-Batches-Every-5-Minutes.ps1` script stages up to 200 new source files at a time, verifies that this repository remains private, preserves existing C files, and commits and pushes at approximately five-minute intervals **only while running on the user's machine**.
- The source XBE, original ISO, full Ghidra project, and complete pseudocode exports stay **out of this repository**. Do not mark functions complete solely because files were generated or parsed.
