# C++17 source-only declaration batch — 2026-11-02

## Exact-tree starting point

- Starting `main`: `89850aef2276bcc90faeec9c3cb6d16f87654dd7` (progress-publication commit).
- Last completed strict 13,694-draft audit: `7d9c67d8857312fdf89349a161145c844575502c`, [run 41381591720](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41381591720): **3,918 pass, 9,776 fail**.
- The starting progress commit changed documentation only; each modified source blob was compared with the exact audited source blob before staging.
- Original retail XBE bytes were **not available** in this run. No original CALL/ECX/ESP/RET/outputs were newly authenticated. These are source-proven declarations, **not Xbox-verified ABI**.

## Source-only repairs

- **26 callers** in `src/main_unclassified/band_001f/` now declare the existing draft `void FUN_001fe150(void)`. Each originally had exactly two C++ errors: the missing `FUN_001fe150` declaration and an independently unresolved `thunk_FUN_00237ec0` call. The declaration removes only the first. **These 26 remain syntax-failing**, and no thunk signature or guest32 input is guessed.
- **0x002E3500** now declares the existing callee draft `uint FUN_002e3490(undefined4,undefined4)`. Its three calls, source body, address and original-body SHA-256 label are untouched. The exact-source isolated Clang++17 O0/O2 test passed; the declaration-removal negative control failed as expected. It is a **candidate for one net full-audit syntax pass**, not yet a published percentage.
- Total: **27 source-only declaration repairs**, all explicitly `ABI_UNVERIFIED`. Original function bodies, x86 digest comments, call expressions and guest-address representations were not modified.

## Regression and evidence boundary

`scripts/verify_cpp_20261102_27_source_only.py` pins all 27 original caller source SHA-256 preimages and both callee source SHA-256 values, checks entry labels and exact declaration strings, runs Clang++17 at O0/O2, and exercises declaration-removal negative controls. For the 26 partial wrappers it explicitly requires the **single remaining thunk error**, preventing an invented no-argument thunk declaration from silently being treated as a repair. A local two-source fixture using exact source preimages passed; the complete 27-source gate is run by CI on the canonical repository tree.

No native linkage, original Xbox ABI, class/vtable, SEH, x87/SSE, or gameplay 1:1 equivalence is claimed. The next behavioral blocker is the original retail-XBE caller/register/stack evidence for `thunk_FUN_00237ec0`; guest32 mapping at `0x002E9E80` also remains unresolved. Preserve original retail code in BruteForceDecomp and exclude only verified demo-only material from the later Reloaded packaging boundary.

Do **not** update README syntax/overall progress until a completed full exact-tree audit for the pushed SHA publishes the measured result.
