# Verified SEH handler-address syntax pass — 2026-10-23

## Original executable evidence

The original user-supplied retail Xbox `default.xbe` was checked locally with SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Its XBE section table was used to map guest virtual addresses to file bytes. For **407** separately identified C11 drafts, the original instruction at **function entry + 5** is `push imm32` (`68 <little-endian guest VA>`), and the immediate exactly matches the unresolved `&LAB_0030xxxx` SEH handler address in the draft. The complete, auditable address pairs are in [`metadata/verified_seh_immediates.csv`](../metadata/verified_seh_immediates.csv).

The repair replaces only `puStack_c = &LAB_0030xxxx;` with an explicit `undefined1 *` cast of that same **guest virtual address**. It retains the original entry and body-hash comment and documents that the address is **not a host symbol**. No guessed guest stack contents, return convention, exception frame layout, or Windows handler is introduced. The source replacement is syntactic and represents an original immediate; it is **not a functioning SEH implementation**.

## Checks and limitations

- The 407 original source bytes in the supplied source migration archive matched the latest audited source SHA-256 values for these entries.
- All 407 original XBE `push imm32` instruction windows were checked against the matching retail XBE, not inferred from Ghidra pseudocode.
- After the targeted replacements, all 407 individually passed local Clang `-std=c11 -fsyntax-only` with the repository's audit warning policy; zero failed in that focused local check.
- The checked-in script `tools/repair_verified_seh_immediates.py` supports repeatable `--xbe` instruction verification using a local copy of the original game, `--apply` for guarded changes, and `--verify` for independent source-only Clang checks. The original XBE remains outside GitHub.
- GitHub Actions applies the reviewed source changes to `main`, checks all 407 with Clang, and publishes only after a successful focused verification. The regular full-inventory workflow must then finish before any README syntax percentage changes. If CI cannot push, the source fixes are **not** counted as published progress.

**Remaining blockers:** original Xbox FS:0/SEH behavior, stack/register calling contracts, external Xbox services, integrated linking, and native PC execution. Passing C11 syntax is not 1:1 semantic verification.

## Published source checkpoint

The reviewed 407-source repair was committed to canonical `main` as [`b1bbde18`](https://github.com/firebirdjsb/BruteForceDecomp/commit/b1bbde189fbc07314b61e2e1943a2999a843498d). The focused GitHub Actions verification completed successfully (run `40037255162`). A separate, subsequent complete Clang C11 audit is required before updating any public pass count or percentage; the earlier audit on the workflow-setup commit predates these 407 source changes.
