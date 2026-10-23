# One hundred original-XBE function review passes — 2026-10-23

**Exact original Xbox build:** SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

The first **100 distinct C11 function entries** in the original `.text` address band, from `0x00012000` through `0x0001BD30`, were reviewed individually. The following discovered function is `0x0001BD90`.

- **100/100** source files have unique original x86 body SHA-256 labels and **100/100 pass host Clang C11 syntax**, confirmed on [GitHub Actions run 39974243871](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/39974243871).
- **82/100** label hashes match contiguous prefixes of original XBE bytes, individually bounded by the following discovered function.
- **15/100** additional label hashes exactly match concatenations of **two or three ordered XBE byte spans**. The byte offsets are recorded in `tools/audit_xbe_first_100.py`; **a matching sequence is not by itself a reconstructed control-flow graph or verified Ghidra block map**.
- **3/100** remain unresolved for this bounded hash reconstruction: `0x00017770`, `0x0001AFE0`, `0x0001BD30`. Do not relabel them as verified.
- **97/100** body digests are thus reproducible from exact original-XBE byte selections. No game executable, assets, proprietary complete disassembly, or game code bytes were committed.

Run `python3 tools/audit_xbe_first_100.py --root . --xbe path/to/your/original/default.xbe` **locally** for the original-byte verification. In CI the XBE is deliberately absent: its 100 syntax passes and source hash-label checks are genuine, but original byte checks are marked `not_checked_no_xbe`. The machine-readable JSON and CSV reports preserve each pass outcome separately.

The full 13,694-function C11 syntax inventory, x86 register/stack contracts, caller dependency linkage, Xbox kernel and graphics/audio/network platform adapters, and runnable native Windows game remain separate verification gates. **No function is called a 1:1 behavior match merely because its source label hash matches original instructions.**
