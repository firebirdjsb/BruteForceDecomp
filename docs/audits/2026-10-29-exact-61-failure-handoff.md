# 2026-10-29 — exact-main C11 failure handoff (61 remaining)

**Scope:** read-only audit and prioritized source-repair handoff. This note does not change any game C source or claim a new C11 pass, original-XBE reauthentication, linked ABI, Xbox behavior, or native PC build.

## Pinned inputs

- Canonical branch `main`; observed head before this note: `2c35695b7fb661f74806b210830057549d9f4f7a`.
- The most recent successful complete per-function syntax audit is GitHub Actions [run 40910651837](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40910651837), exact source commit `739a6f8ebc32827c25d112f450aa0a3a3d6dddc3`.
- Retrieved and inspected its published artifact `full-c11-inventory` (artifact ID `12913173772`), notably `c11_sweep_report.json`, `failure_triage.csv`, `guest_stack_offsets.csv`, and `syntax_failures.csv`.
- **13,694 sources, 13,633 passing and 61 failing**; 0 original-body hash mismatches and 0 missing hash labels. The first-error categories below count failing functions, **not all diagnostics** in each function.
- Original Xbox XBE identity remains SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Its private bytes were not available for fresh disassembly or a new original-instruction test in this audit. Earlier evidence notes explicitly describe their own original-XBE checks; this audit does not repeat or upgrade those claims.

## Exact first-error queues

| Category | Count | Function entry addresses |
| --- | ---: | --- |
| unresolved guest stack | 30 | `000dd8e0`, `000dddd0`, `001f3aa0`, `001f4a90`, `00239e50`, `0023aba0`, `00254c60`, `00254f60`, `00255330`, `00257b50`, `00258040`, `00269600`, `00288d40`, `002a6f50`, `002a75d0`, `002b28e0`, `002bf610`, `002c2530`, `002c41e0`, `002ebea0`, `002ee515`, `0033fa74`, `0034018d`, `0034055e`, `00340734`, `00340cf7`, `0034107d`, `00341540`, `003416c2`, `0037b2fc` |
| float/pointer storage | 15 | `00041870`, `00065800`, `000702a0`, `000af1a0`, `000d8140`, `000dd380`, `000ee6e0`, `001137e0`, `0011c810`, `0011caa0`, `00142df0`, `0021ded0`, `00227f80`, `00266bf0`, `002c9f30` |
| invalid pseudo-members | 8 | `0002fd40`, `00049cf0`, `00117660`, `001ea2e0`, `001f5600`, `00213fc0`, `002ceb10`, `002d7270` |
| unresolved `uRam...` | 3 | `001ff0f0`, `002058c0`, `00282360` |
| other unresolved symbols | 3 | `002c2a20`, `002e70f0`, `00306d4c` |
| invalid array assignment | 2 | `00155840`, `002d8e40` |

Prefix each entry with `0x` to look up its canonical source with `tools/source_layout.py`; do not infer paths from guessed function roles.

## Next implementation gates — preserve the genuine interfaces

1. **Continue immediately after the repaired `0x0011AFA0` source.** It now syntax-passes and has original instruction-backed scalar/storage work, but its two `0x002339D0` calls still lack original ECX input transport; `0x0012B250` requires ECX/EDX and `0x002333B0` requires EDX. The producer/callee writes and caller lifetimes are recorded in [the original scalar storage evidence](../evidence/0011afa0-scalar-storage.md). Audit existing host callable signatures and every affected caller before binding shared operations. Do not introduce a guessed implicit-register global or reclassify this function as behavior-verified.
2. **Guest-stack output family:** `0x00257B50` uses one shared 260-byte string buffer and adjacent separate output words; `0x002A75D0` uses the same original guest word for byte/word reads without establishing its untouched upper bytes. These facts and the still-missing virtual writer contracts are recorded in [the bounded producer/callee audit](../evidence/20261028-producer-callee-guest-stack-and-probe.md). Reconstruct the actual output method target/write extent and restore the original stack addresses before replacing a ghost name.
3. **Dynamic ESP family:** `0x002EBEA0` is a stack-changing allocator (page probe and exchange/restore guest ESP), directly relevant to `0x002C2530`, `0x00269600`, `0x002BF610` and the XOnline cluster. A new static host array, unbacked host pointer or C VLA does not prove the original stack protocol. Treat signed lengths, page probing, and return-address movement as part of the contract.
4. **Parser `uRam00000008` pair:** `0x001FF0F0` and `0x002058C0` each read `[saved candidate pointer+8]`, not absolute guest address `8`; `0x001FEB60` receives an implicit output DWORD in EBX and returns AL. This is documented in [the dispatch/source recovery](../evidence/001ff0f0-002058c0-dispatch-source.md). Bind a real candidate producer and saved-stack pointer before replacing either switch; never make a fake `extern uRam00000008`.
5. **Float/pointer and SSE:** `0x0011C810` already has bounded, original-instruction-backed virtual, matrix, vector and tail evidence, but the actual guest-frame/virtual executor remains outside the canonical source. `0x00155840`, `0x000DD380`, `0x00049CF0` and `0x002D8E40` have explicit deferral notes identifying omitted register-output producers. Preserve raw F32 bits, x87 spill boundaries, RSQRTSS/RCPSS approximation and partial writes; do not solve these by numerical float-to-pointer conversions.

## Verification before counting another pass

- Re-run `python3 tools/sweep_c11.py --root . --out c11_sweep_results --jobs 8` on the **exact new source commit**, with unchanged host Clang flags; separately check focused Windows `i686-pc-windows-msvc` and `x86_64-pc-windows-msvc` targets.
- Run the relevant per-function verifiers, source layout/body-hash checks and `scripts/check_sources.py`, plus the repository safety test. Require no regression in the 13,633 existing passes and no provenance drift.
- Original instruction windows must be rechecked against the user's *private* pinned XBE locally for each new changed contract; GitHub CI by itself cannot do this. Never commit the original binary or complete decompiler dumps.
- Update `metadata/bulk_13694_inventory.csv` for any repaired C source digest/status **only after** a real passing check. The published `docs/progress/current.json` and progress bars reflect complete audited runs, not speculative counts.
- Preserve `ABI_UNVERIFIED` and behavior flags until linked, independent 1:1 evidence is available. No native PC executable is demonstrated by isolated syntax tests.

**Result of this handoff:** sources edited: 0; new syntax passes claimed: 0; the 61-failure exact-tree baseline is unchanged.