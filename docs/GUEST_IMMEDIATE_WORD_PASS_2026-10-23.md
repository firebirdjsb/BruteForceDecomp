# Verified guest immediate-word C11 pass — 2026-10-23

## Scope and original x86 evidence

The user-supplied retail Brute Force `default.xbe` was checked locally against SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The latest full Clang inventory (run 40037382516, commit 51bf77de) identified 714 remaining failures. This pass selected **49** sources with exactly one reported compiler error each. The original source bytes of all 49 matched the audit's per-source SHA-256, and the original x86 instruction was independently decoded at the address in the manifest.

The changes replace one unresolved Ghidra pseudo-symbol per function with its **literal original 32-bit guest word**, expressed as `(uintptr_t)0x........U`. The instruction evidence includes original x86 `push`, `mov`, `cmp`, and `add` immediates; five labels also point to backed UTF-16 string data and one to an original guest callback address. These guest values are **not** native Windows host pointers or linked functions. The original entry identity and x86 body-hash comments remain unchanged.

## Reproducibility

- The manifest [verified_guest_immediate_words.csv](../metadata/verified_guest_immediate_words.csv) contains all 49 entries, original source Git blob IDs, exact expected edited SHA-256 digests, original instruction addresses and decoded mnemonic.
- [repair_verified_guest_immediates.py](../tools/repair_verified_guest_immediates.py) verifies the original source blob before any edit, applies the exact single replacement transactionally, and checks all 49 individual Clang C11 syntax results.
- Local tests with the original SHA-256-verified XBE, anchored `objdump` decoding and Clang passed for all 49. The source-only CI repeats the exact hash and Clang checks, without publishing the XBE.
- GitHub Actions applies the changes on the canonical `main` branch. **Do not increase README percentages until the separate full 13,694-source Clang audit has completed successfully.**

These repairs establish only isolated C11 syntax. Xbox register/stack ABI, guest virtual-address translation, callbacks, linked dependencies, Xbox platform APIs, and runtime 1:1 behavior are still unresolved.
