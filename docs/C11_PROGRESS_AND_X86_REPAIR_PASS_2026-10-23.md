# Verified C11 repair and progress-publishing pass — 2026-10-23

## 1:1 source, status, and progress definitions

- Source of truth: original user-supplied Xbox `default.xbe`, SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Original XBE, decompiler exports and game assets are **never committed**.
- Every modified C file preserves its original entry-address basename and original x86 body-digest annotation.
- These are **instruction-evidence-backed source syntax repairs**, not function-level semantic certification.
- Use [live progress state](progress/current.json) and the [README bars](../README.md#reconstruction-progress) for the **latest published complete** audit, not old numbers within a dated report. The seven-stage overall percentage is a conservative planning proxy, **not a playable-game completion estimate**.

## Evidence-backed function corrections

| Original entry | Verified original x86 observations | C11 correction | Still unresolved |
| --- | --- | --- | --- |
| `0x0008A560` | `0x0008A58E` saves the incoming 32-bit stack pointer in EBX; `0x0008A5A3` writes zero to the same incoming stack word's **low byte**; `0x0008A6CF` writes one; `0x0008A70E` loads only that byte into AL; `0x0008A715` is `ret 4` | Replace three invalid Ghidra `param_1._0_1_` accesses with `uint8_t status_low_byte`; preserve incoming pointer separately | Implicit ECX input, virtual dispatch, original guest pointer width on host |
| `0x00048DA0` | `0x00049157` reads a source flag byte; `0x0004915D` shifts it by three; `0x00049160` masks bit zero; `0x00049162` writes only the low byte of the incoming stack argument, while the source pointer remains in EBX. `0x0004917F` reads that low byte, and `0x000491E9` later reuses the same stack slot as a DWORD | Recover a separate `uint8_t source_flag_bit3` and use that value for both observed downstream byte accesses | Whole-register state and the effects of indirect function calls; no host ABI claim |
| `0x000BECF0` | `0x000BED94` and `0x000BED9B` load two independent m32fp values from offsets `0x20` and `0x14`; two `fstp m32fp` operations and two raw DWORD moves write adjacent float stack slots at `0x000BEDAD` and `0x000BEDB9` | Replace invalid `_fStack_40 = CONCAT44(...)` pseudo-value with the observed two separate `float` assignments | Source of virtual-method return pointer, x87/SSE precision/rounding edge cases |
| `0x000C4BC0` | `0x000C4C39` computes an arithmetic right shift by two. `0x000C4C3E` and `0x000C4C42` copy CL into packed-byte offsets 1 and 2; `0x000C4C5A` writes AL to byte offset 0; `0x000C4C93` writes `0xFF` to byte offset 3; `0x000C4CAE` calls an **indirect** vtable slot | Replace invalid 24-bit Ghidra pseudo-field assignments with a four-byte `uint32_t packed_color_word` and pass its address to the same unresolved indirect call | Actual vtable target, register-pair return of `0x000C4CD0`, full native PC pointer layout |

The 17-source focused GitHub Actions workflow compiles these source drafts in isolation and checks expected C statements. **Passing focused source syntax is not native execution.** The verifier presently contains **82 exact x86 instruction fingerprints, 33 direct call addresses, and 17 source-expression invariant records**. The new instruction windows above were compared against the matching original XBE; the original game executable is not present on GitHub.

## Automated README and percentage publishing

The original [full C11 audit](../.github/workflows/full-c11-inventory.yml) produces immutable commit-scoped counts for all **13,694** reconstructed source files. Previously, the [refresh workflow](../.github/workflows/refresh-progress.yml) skipped every completed audit if `main` had advanced while its several-minute scan ran, so the README percentages could remain stale indefinitely during active repairs.

The refresh gate now uses [`tools/progress_gate.py`](../tools/progress_gate.py) to publish a validated audit **only when its run ID is newer than the last published run**. Because `tools/update_progress.py` still checks the report's exact audited SHA, 13,694 source count, complete pass/fail accounting and original body-digest integrity, progress can advance while active fixes continue without inventing per-function pass counts.

Publication updates these **four files together in the same GitHub Actions commit**:

1. `README.md` — both labeled percentages, pass/fail counts and the exact audit run/commit link;
2. `docs/progress/current.json` — machine-readable statistics and provenance;
3. `docs/progress/c11-syntax.svg` — measured syntax bar;
4. `docs/progress/overall.svg` — seven-stage planning proxy bar.

The automatic workflow serializes publishers and refuses any older run ID. It triggers only on successful complete audits from pushes to `main`; it does **not** change the recovered game core or distribute Xbox binary contents.

For validation without the original executable:

```sh
python3 tools/test_progress_gate.py
python3 tools/test_progress.py
python3 tools/verify_x86_c11_lane_contracts.py --root .
```

For original instruction evidence locally (not on public CI):

```sh
python3 tools/verify_x86_c11_lane_contracts.py --root . --xbe /path/to/default.xbe
```

The remaining major priorities are missing x86 stack and register contracts, indirect-call dispatch, cross-function native linking, Xbox service backends, and eventual original-vs-PC differential behavior tests. See [XboxRecomp reference policy](XBOXRECOMP_REFERENCE_1TO1.md), the [ABI ledger](X86_ABI_LINKAGE_PASS_2026-10-23.md), and [live metrics](progress/current.json).
