# Cross-function C11 callback repair — 2026-10-22

## Scope and source evidence

The two October 22 commits `b32c7bb758fca8cd5993e70e31a0e40067d9e29a` and `8a643cff8ae71f7bf507a641e6f24a0c45eb53f3` introduce **32 exact C-draft-matching declarations** into **20 caller sources**. No functional instructions, branch conditions, operands, constants, original x86-body SHA-256 comments or recovered function definitions were changed.

Each declaration was matched to an existing `src/0x<target>.c` recovered C draft under the same source address. The original machine-code calling conventions, register inputs, callback invocation signatures, linkage and behavior remain **ABI_UNVERIFIED**. Even a successful syntax-only check does not establish a 1:1 implementation.

## First commit — nine caller files

| Caller | Matched recovered function |
| --- | --- |
| `0x0021C170` | `FUN_0021C110` |
| `0x002942F0` | `FUN_00294270` |
| `0x002F48A5` | `FUN_00110000` |
| `0x002F870D` | `FUN_00090020` |
| `0x00381CB6` | `FUN_00381620` |
| `0x00383BDD` | `FUN_003844C1` |
| `0x00384293` | `FUN_0038411C` |
| `0x003844C1` | `FUN_00384491` |
| `0x00384541` | `FUN_00384353` |

## Second commit — eleven caller files

| Caller | Source-identical declarations added |
| --- | --- |
| `0x00331457` | `FUN_0033136C`, `FUN_00331425` |
| `0x00331A19` | `FUN_00331694`, `FUN_00331991` |
| `0x0033222D` | `FUN_00331DB8`, `FUN_003321A5` |
| `0x003329B5` | `FUN_0033233C`, `FUN_00330E59` |
| `0x00333392` | `FUN_00332B65`, `FUN_00333315` |
| `0x0033488D` | `FUN_003338CB`, `FUN_003335A5` |
| `0x003350DA` | `FUN_00334DCA`, `FUN_00335070` |
| `0x00342FF1` | `FUN_00342A84`, `FUN_0034244A` |
| `0x00381D13` | `FUN_00381955`, `FUN_00381B3B` |
| `0x00381E85` | `FUN_0038156D`, `FUN_00381D13`, `FUN_00381887` |
| `0x0038274F` | `FUN_0038244B`, `FUN_0038267D` |

## Required validation

1. Run `python3 tools/sweep_c11.py --root . --out c11_sweep_results --jobs 8` on the exact updated commit; compare the pass/fail totals with the last **completed** complete audit, not a historical or estimated count.
2. Inspect any newly unmasked syntax errors and fix them only using original XBE machine-code evidence.
3. Cross-check all callback-address use sites with x86 calling conventions; many stored code pointers originate from 32-bit word fields, and a host 64-bit function pointer cannot be assumed to fit in them. Do not add arbitrary casts, shims or invented structure layouts to make compilation succeed.
4. Separately verify actual C symbol linkage, x86/32-bit behavior and then native PC adapter behavior. Keep the status `ABI_UNVERIFIED` until proven.

This work also records the eventual [native PC game goals](NATIVE_PC_PORT_GOALS.md), which are future milestones, not features already implemented. The PR should remain in draft until a human reviews the evidence and validation.
