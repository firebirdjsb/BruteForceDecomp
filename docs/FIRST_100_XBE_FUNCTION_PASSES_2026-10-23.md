# One hundred original-XBE function review passes — 2026-10-23

**Exact original Xbox build:** SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

The first **100 distinct C11 function entries** in the original `.text` address band, from `0x00012000` through `0x0001BD30`, received individual recorded source-provenance/contiguous-body checks against the user-provided retail XBE. The next discovered function at `0x0001BD90` bounds the final search.

- **100/100:** each C file has a unique original x86 body-SHA-256 label.
- **82/100:** SHA-256 was independently matched against an actual **contiguous prefix** of original XBE bytes, bounded by the following discovered function.
- **18/100:** no contiguous prefix match was found within that address bound. This does **not** imply a wrong hash or absent function: Ghidra can hash non-contiguous code blocks, and boundary/function inventory review may be necessary. These entries remain `requires_block_map_review`, not marked verified.
- **No game body bytes, original-XBE disassembly dump, ISO, or executable are committed.**

The 18 pending entries are `0x00012180`, `0x000123F0`, `0x00012580`, `0x00012A50`, `0x00015F30`, `0x00015FE0`, `0x00016200`, `0x000163A0`, `0x00016FD0`, `0x00017770`, `0x0001A420`, `0x0001AFE0`, `0x0001B650`, `0x0001B7A0`, `0x0001B910`, `0x0001BB30`, `0x0001BC90`, `0x0001BD30`.

`tools/audit_xbe_first_100.py` reruns **100 separate host Clang C11 syntax passes**, compares each exact original body label and exports one diagnostic/status row per function to `c11_sweep_results/first_100_function_passes.json` and `.csv`. In CI it has no original game executable and labels original-byte validation **not checked**. To reproduce the original-byte check locally, pass `--xbe path/to/your/default.xbe`; it fails closed on incorrect executable identity and any unexpected count of verified contiguous functions.

The full repository sweep of all 13,694 function drafts, original caller-register/stack contracts, Xbox platform APIs, cross-function linking and native Windows game operation remain independent requirements. **A body hash proves provenance, not that the C implementation is semantically 1:1.**
