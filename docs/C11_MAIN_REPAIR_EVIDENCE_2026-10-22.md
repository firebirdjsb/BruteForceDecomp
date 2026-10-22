# Main-only C11 repair and REA evidence ledger — 2026-10-22

## Authority and target

This ledger records source edits on the canonical `main` branch of `firebirdjsb/BruteForceDecomp`. The original Xbox executable (SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`) and machine-code disassembly were **not** available to the GitHub-only editing session. Only source already checked into the repository and preexisting XBE-body hash metadata were inspected.

Follow `AGENTS.md` and the REA principles of preserving observed source, separating inference from observation, and failing closed on unknown ABI, labels and original-machine semantics. **None of these edits warrants a 1:1 or behavior-verified status.** The game is not linked or playable on PC.

## Direct syntax correction

- `0x00045990` — commit `6e80575dd02a158d5004a6b409a4b50821f83315`: balanced parentheses for the existing `_mm_rsqrt_ss(_mm_set_ss(...))` and `_mm_cvtss_f32(auVar13)` expressions without changing their argument calculation. This corrects a malformed C11 statement in the recovered draft, **not** proof of original x86 `rsqrtss` behavior or precise floating-point state.

## Source-grounded callback declarations

Commit `bebb0d68fcaf364b719e2b8a1958237fda0095f1` adds **22 forward declarations across 19 C files**. The signature of each `FUN_...` comes from the corresponding checked-in `src/0x....c` definition. There was no C function-body rewrite or machine-code-proven ABI change.

| Caller address | Callback target(s) |
|---|---|
| `0x002ebe35` | `FUN_002efa98` |
| `0x002fe4a6` | `FUN_002fe2fd` |
| `0x00337bcf` | `FUN_0033e945` |
| `0x00338276` | `FUN_0033e945` |
| `0x0033dc41` | `FUN_0033c55b` |
| `0x0033ee35` | `FUN_0033ed68` |
| `0x0033f02a` | `FUN_0033eef3` |
| `0x0033f147` | `FUN_0033f069` |
| `0x00348ad6` | `FUN_00347cb2` |
| `0x0034bf1f` | `FUN_00347ae8` |
| `0x0034cca3` | `FUN_00069780` |
| `0x003554bb` | `FUN_003558e8` |
| `0x0035614e` | `FUN_00355d8a` |
| `0x003574b0` | `FUN_0035f8d0`, `FUN_0035a8c0` |
| `0x0035d340` | `FUN_0035c660` |
| `0x0035f8d0` | `FUN_0035f280` |
| `0x0037f712` | `FUN_003855b3`, `FUN_00384edf` |
| `0x00380a8e` | `FUN_00380281` |
| `0x003843be` | `FUN_00384293`, `FUN_003840c1` |

These C declarations **may remove one or more errors** but they are not sufficient for a passing per-file compilation if the file also contains unresolved original `LAB_`, `stack0x`, external-data labels, register inputs, pointer widths or other syntax issues. A function pointer stored in an inferred 32-bit field is especially not verified as a native 64-bit PC pointer.

## Known exclusions and verification gates

- Do **not** relabel `FUN_00100300` or `FUN_00100210` to make C address arithmetic compile without x86 evidence: recovered code treats function identifiers as address bases, indicating ambiguous identity/data mapping.
- Do **not** invent a prototype for `FUN_00012080` from its separate `BF_00012080_C11_draft(uint32_t incoming_ecx)` without proving the register ABI and exported symbol identity.
- No new guessed global types for the 100+ `D3D8__D3D_g_pDevice` uses; use the original XBE's mapped pointer storage and dereferences first.
- The last complete audited commit available before these repairs was `bd3e3e962d87b6ba1d50a96ef850016abbb9c5cd`: **12,074 host Clang syntax passes, 1,620 failures**, zero indexed body-hash mismatches, and **99 missing embedded original-body hashes**. This was **not** a syntax audit of the new head.
- Run `Full C11 draft syntax inventory` on the exact `main` tree after every batch. The workflow is not a build: its source-tree and original-hash integrity checks are separate from unresolved C11 failures. Before upgrading any function to `1:1`, compare its x86 bytes, instruction semantics, control flow, stack/register ABI, callers, data and external calls against the original executable and add executable cross-function tests.

**Only `main` is a source of truth.** The retired repair PR is closed; an obsolete remote branch may still exist until removed via the GitHub UI because this integration does not expose branch deletion.
