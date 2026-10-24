# BruteForceDecomp — Continued original-XBE C11 repair pass, 2026-10-23

## Verified original input

- User-supplied retail Xbox `default.xbe` SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`
- The local XBE was read through its section-backed guest virtual-address mapping to obtain exact x86 bytes. **The original executable is not published to GitHub.**
- All modified recovered functions retain the original entry name/address, original-body SHA-256 annotation and their unverified ABI warnings.
- Changes are on the canonical **main** branch only.

## First batch: 15 guest SEH handler immediate repairs

The following 15 source drafts contained undefined `&LAB_...` handler pseudo-labels: `0x0001C630`, `0x0001C980`, `0x0004AFF0`, `0x000615D0`, `0x00062A10`, `0x00085CF0`, `0x0008EE10`, `0x000B1370`, `0x000D2A60`, `0x0016D7F0`, `0x001C54B0`, `0x001C6CC0`, `0x001C9110`, `0x00218790`, `0x00287270`.

Each original function's first 17 bytes follow **`55 8B EC 6A FF 68 <little-endian handler VA> 64 A1 00 00 00 00 50`**, and the handler immediate matches that function's exact former pseudo-label. These are now preserved as `uint32_t` C11 guest address words, with the complete address mapping in [the dedicated SEH report](X86_SEH_IMMEDIATE_15_ENTRY_PASS_2026-10-23.md).

**Important:** After this correction, all 15 functions still encountered previously hidden `stack0xffffff..` Ghidra frame pseudo-symbols in the subsequent complete audit. Their stack contracts are **not guessed**, so these 15 edits do **not** increase the total number of Clang-passing functions by themselves.

## Second batch: 13 other guest address and table initializers

- 12 function entries have source expressions converted from `&LAB_<guestVA>` pseudo-symbols to original-XBE-backed `UINT32_C(guestVA)` values.
- **`0x002C2630` / `0x002CCB80`**: both functions initialize 16-entry guest function-address tables at `0x00443DE8..` and `0x00443E28..`. Every additional original table target was observed as an immediate from `MOV EAX/ECX/EDX,imm32` or `MOV [guest-data],imm32`; the untyped and function-name pseudo-label usages in the C drafts were replaced with their exact guest32 address words.
- **`0x0030F830`**: original instruction `C7 05 B8 13 40 00 A0 E3 39 00` stores `0x0039E3A0` to guest address `0x004013B8`. The source now declares the guest data symbol and stores the matching value, not an unresolved pseudo-label.

All **29 exact instruction windows** for the second batch are retained in [the small CSV verification ledger](../metadata/verified_guest_code_addresses_2026_10_23.csv). [The independent source and optional-original-XBE verifier](../tools/verify_guest_code_addresses.py) checks recovered source identities and target constants, and can compare the original instruction bytes using `--xbe path/to/default.xbe` when run locally. The [GitHub Actions source-only gate](../.github/workflows/verified-guest-code-addresses.yml) runs without distributing the copyrighted Xbox executable.

## What the compiler and runtime results actually mean

The first completed post-repair full C11 audit raised isolated syntax from **13,061 / 13,694 = 95.38%** to **13,063 / 13,694 = 95.39%**, reducing failures to 631. Later jobs for the fully recovered table targets run independently; only their completed, successful audit results may update the README percentages. Consult [current JSON progress](progress/current.json), not a hardcoded claim, for the latest complete audited commit.

The new sources **still cannot be linked into a functional native PC executable**. Preserving guest addresses is *not* translating executable entry points into host-native callable pointers. Original Xbox register and stack calling contracts, pointer-width semantics, exception chaining, guest memory tables, platform libraries, and cross-function linking remain unverified. No performance, HD texture, or 64-player enhancements are implemented by this pass. Avoid running the raw guest address as a native Windows pointer.

## Next priority

Continue fixing source diagnostics that follow earlier pseudo-symbol removal **only when original x86 instructions and guest stack ownership justify the representation**. Group repeated compiler failures, audit each patch, and progressively establish verified guest32 memory and callback adapters before attempting the integrated host build.
