# Strict C++17 source-only repair batch — 2026-10-31

## Audited baseline and screening

- Starting `main` HEAD: `d8b0187ef5d76ee9ee8c6361eb0976fb54e0e939`. The last **completed exact-tree** audit covers `8a6007a62f904c96578680b17a12844184a5006c`: **3,543 / 13,694** strict C++17 drafts passing (25.87%), **10,151** failing. [Completed run](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41227906409). These are **pre-batch** figures.
- Exact-tree declaration triage reviewed 3,070 candidates (2,315 draft-arity matches, 685 mismatches, 66 unparseable callees, four provenance mismatches). This batch manually screened **66** selected first-error caller/callee candidates; **nine** independent source-only declarations survived additional source and type checks. The other **57** remain deferred; many had hidden later errors because the audit limits diagnostic count.
- C++17 only, not the historical C11 percentage. No original-address function body was rewritten.

## Nine changed callers

| Caller → callee | Existing source-only callee signature |
| --- | --- |
| `0016e830 → 0016e880` | `void(void)` |
| `002dddc0 → 00304ff0` | `void(void)` |
| `0014f7a0 → 000ab260` | `int(void)` |
| `00374130 → 00373ab0` | `int(void)` |
| `001241b0 → 00222ac0` | `void(int,int)` |
| `001ea890 → 0006a610` | `undefined4(int*)` |
| `0027d970 → 0027d3f0` | `void(int)` |
| `002b6ac0 → 002b65a0` | `undefined4(float*)` |
| `001e7c00 → 001f2910` | `void(float)` |

All nine staged caller files were compared to their original exact Git blobs: **removing the added declaration reproduces the entire original file byte-for-byte**. Every original x86 entry and body SHA-256 comment remains untouched. No call operand, cast, storage, guest pointer, return value or original statement changed. Existing callee source files were separately inspected and left untouched. All declarations explicitly retain `ABI_UNVERIFIED`.

## Verification gates and boundaries

- `tools/test_cpp_20261031_9_source_only_calls.py` checks original caller Git blob preimages, unchanged callee blob identity and draft signatures, body-hash labels and original call expressions, plus source tamper negative controls.
- Strict Clang++17 `-O0`/`-O2` and declaration-removal negative controls for all nine callers are registered in the existing **single** exact-tree CI workflow.
- Four partial relocatable **host symbol-link** tests cover `0016e830 → 0016e880`, `002dddc0 → 00304ff0`, `00374130 → 00373ab0` and `002b6ac0 → 002b65a0`. These establish only symbol resolution if they pass, **not** complete native PC linkage or Xbox-compatible ABI.
- Full CI and syntax net delta must be measured on the pushed exact SHA before updating README/progress. No new percentages are claimed in this document.
- **Retail XBE bytes unavailable during this run**. Required SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Original-machine CALL/RET, register producers, guest stack, return/output contracts and behavioral equivalence are **not** newly verified. Draft declarations are never presented as original Xbox ABIs.

## Evidence-needed queue

- Multi-error / hidden downstream declarations: `001051e0`, `001516c0`, `002d22b0`, `0013aad0`, `00292690`, `002f1318`. Their first three diagnostics can mask additional missing symbols or incompatible storage. Do not count them as passing until isolated Clang succeeds.
- Void result misuse: `00232290 → 002334b0`, `0027e5f0 → 0027e580`. No fabricated return values.
- Guest32 pointer/storage mismatch: `000bb600 → 000cd9c0`, `001392c0 → 0024c6a0`, `002e4a30 → 002e49c0`, `003158c4 → 0031b1cd`. Do not cast a guest address into a native pointer merely for compilation.
- Float-to-DWORD and x87/SSE: `00057a30 → 000577c0`, `0017aa30 → 0017aa70`, `00216560 → 00216050`. Need original machine-level argument and precision evidence.
- Vtable, SEH, indirect dispatch and native linkage remain separate evidence queues. Original XBE disassembly, verified caller/callee contracts and differential behavior tests are required before promoting any interface beyond source-only C++17.

No commercial game binary, full private decompiler export, assets or external reference implementation was added. REA, decomp.wtf and XboxRecomp remain methodological references, not Brute Force behavior proof.
