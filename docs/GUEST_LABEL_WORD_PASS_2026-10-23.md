# Original XBE guest address immediate pass — 2026-10-23

The [26-entry manifest](../metadata/verified_guest_label_words_pass_3.csv) records 26 independently failing C11 draft functions with exactly one unresolved `&LAB_XXXXXXXX` address pseudo-symbol. Each is replaced by the corresponding exact original Xbox 32-bit immediate `(uintptr_t)0xXXXXXXXXU`.

The user-provided original XBE SHA-256 was checked as `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Each original `push` or `mov` immediate was decoded at the manifest's exact instruction address. The old and replacement Git blob SHAs are recorded to detect source drift. Original entry and x86 body-SHA comments remain intact.

**Scope:** Guest address-word fidelity only. The constants are not valid host function pointers, native callbacks, resolved register/stack ABI or evidence of a playable 1:1 native PC build.

Use `python3 tools/verify_guest_label_words.py --xbe /private/default.xbe --verify` with a private original XBE. GitHub CI runs `python3 tools/verify_guest_label_words.py --verify` without game bytes, checking the exact source blobs, labels and isolated host Clang C11 syntax.

Starting successful full audit: commit `a144ce372a9156100b6253cfb5d1cf6d725b62ae`, run `40043165260`, 13,029/13,694 passing (95.14%), 665 failing, zero original body-hash mismatches. **Do not advance the public percentage until the new full-tree audit has completed successfully.**
