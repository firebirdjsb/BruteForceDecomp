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

Validation required: focused `clang -std=c11 -fsyntax-only` using `tools/sweep_c11.py`'s existing flags and full main-branch CI sweep. A source syntax pass is separate from a real verified 1:1 machine-code reconstruction.
