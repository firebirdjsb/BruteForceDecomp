# Ghidra overlay-name C11 cleanup — 2026-10-23

Scope: six independent C11 drafts; no native game build, executed Xbox code, ABI recovery, or original XBE file included.

The exact source spelling `_param_N` was emitted by Ghidra as a distinct expression but had no C declaration. Clang's automatic suggested replacement `param_N` is **not generally safe** because incoming parameter widths may differ from the scratch value. These six drafts have a locally-defined value dominating each use of the overlay, no address taken of that incoming parameter at or after overlay assignment, and no later read of the incoming parameter on the affected path. We represent the **draft's** overlay value by a typed C local. This is a *source-level repair*, not evidence that C's local-storage layout matches original x86 stack aliasing.

| Original entry | Ghidra scratch | Draft C scratch type | Source-local role |
| --- | --- | --- | --- |
| `0x00150420` | `_param_3` | `float` | Observed float expression or -1.0 sent to unresolved callee |
| `0x0017e200` | `_param_3` | `float` | Observed computed float output component |
| `0x003557ac` | `_param_3` | `uint` | Bounded transfer size from existing unsigned-word operands |
| `0x00201cb0` | `_param_1` | `uint` | Local unsigned count within copy loop |
| `0x00203350` | `_param_1` | `uint` | Local unsigned count within copy loop |
| `0x00336410` | `_param_2` | `uint` | Count bounded by saved input `ushort` |

**Deliberate exclusions:** `0x0022cd80` calls another function with `&param_2` after writing `_param_2`, which may involve a meaningful original stack-slot alias. `0x00150670` still contains missing `stack0xffffffd0` with no verified frame/address contract. Neither is silently made to compile by guessed storage.

Existing x86 function entry and original-body SHA-256 labels were left unchanged. Each source still says `GHIDRA_C_DRAFT`, `ABI_UNVERIFIED`. The local source textual normalization does not establish original x86 behavior, original-frame memory aliasing, exact function signature, cross-function linking, or native PC execution. The 13,694-function C11 inventory's historical **C-source** digests may drift for these six files until explicitly reindexed; the immutable **original x86-body** labels must not be rewritten to match C edits.

## Completed compiler audit (not 1:1 semantics)

[Full C11 inventory, GitHub Actions run 39999450394](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/39999450394) audited exact source commit `ee320b0833e804df4889c2423a4465e7cca589a0` and all 13,694 functions. The six entries above each changed from **fail** to **pass**; zero entries regressed. Result: **12,397 host C11 syntax passes / 1,297 syntax failures** (90.53%), **zero original x86 body-label mismatches** and **zero missing body labels**. These were the only six status changes from the immediately previous audited commit `051b2e93078eb762e11c799422e715cf7864a3fe`.

The source-only sweep at commit `ee320b0` recorded 655 historical C-source digest differences, six more than the immediately previous snapshot. Commit [`a87747a8`](https://github.com/firebirdjsb/BruteForceDecomp/commit/a87747a8abc720fb23965948779bc463bb0c8fe5) has since updated **only those six C-source SHA-256 fields** and their independently audited `HOST_CLANG_OK` syntax states in `metadata/bulk_13694_inventory.csv`; the original x86 body digests, ABI states and behavior states are unchanged. The remaining 649 historical C-source digest differences are not silently rewritten. None of the six functions is Xbox ABI verified, proven linkable as a game, native-PC runtime-tested, or demonstrated fully 1:1 against the original machine code.
