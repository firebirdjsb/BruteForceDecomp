# Brute Force function groups — navigation guide

**Canonical index:** [all_13694_functions.csv](../metadata/function_groups/all_13694_functions.csv) — one row per Ghidra-discovered original-Xbox x86 function. [Group counts](../metadata/function_groups/groups_summary.csv).

The inventory contains **13,694** addresses. These categories are grounded by **original XBE executable section** and observed references in the current C drafts. The main `.text` section is **not synonymous with gameplay**; it mixes game code, engine support and statically linked libraries. Unknown roles stay marked `UNKNOWN`, and address-band groups are organizational buckets only.

| Group | Functions | What its origin supports |
| --- | ---: | --- |
| Main `.text` | 11,896 | Mixed game and engine code, statically linked runtime; individual roles mostly unverified |
| `DSOUND` | 455 | Xbox sound/audio library code |
| `XONLINE` | 404 | Xbox online-services library code |
| `XNET` | 390 | Xbox networking-library code |
| `D3D` | 216 | Xbox graphics / Direct3D library code |
| `XPP` | 202 | XPP-named section; exact individual purposes unverified |
| Bink-related sections | 131 | Video playback and pixel-format helper code |
| **Total** | **13,694** | Ghidra's current discovered-function inventory, not proven exhaustive original code coverage |

## What the columns mean

- `entry` and `source_file`: stable original virtual address and matching reconstructed C draft.
- `section` and `functional_domain_supported_by_section`: reliable section-level origin, not a specific gameplay responsibility.
- `group`: a named linked-library section, source-observed library call references, or a main-address band for unknowns.
- `readable_role`: populated only when the matching address has a vetted, instruction-supported alias in [asm_supported_readable_names.csv](../metadata/asm_supported_readable_names.csv).
- `review_flags`: syntax/ABI investigation clues such as unresolved implicit registers, stack pseudovariables, x87 or SIMD.
- `original_body_sha256_embedded`: function-body digest extracted from the original C draft comment, when present. A blank does not mean the original XBE bytes were absent.

## How function names advance

`FUN_XXXXXXXX` → assembly and callsite inspection → descriptive `bf_...` **source-level alias** → shared C prototypes → appropriate x86 ABI/model tests → dependency and game-runtime validation.

A readable label never by itself proves runtime equivalence. Do not rename a function `spawn_enemy`, `player_damage`, `mission_manager` or another specific gameplay role based only on its address, a neighboring call or a plausible string. Keep unknown roles explicit until supported.

## Review and build state

The C++ drafts are **reconstructions**, not the original game source. Successful syntax checks do not establish a linked Xbox executable or byte-identical recompilation. The current fail/pass total must be taken from the most recent successful [full C++17 inventory workflow](../../actions/workflows/cpp-compatibility-audit.yml), not estimated by subtracting edited-file counts.

Use the two CSVs to navigate. For each function, review the source file and original XBE instruction evidence; keep uncertainties documented in the corresponding file and in `docs/`.
