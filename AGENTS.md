# BruteForceDecomp — C11 Reconstruction Rules

- All active reconstruction source belongs in `src/` and must be **ISO C11** (`.c` / `.h`). No C++ syntax or source extensions.
- Every function must retain its original 32-bit x86 entry address and exact original function-body SHA-256, where available.
- Keep an explicit distinction among Ghidra pseudocode, a C draft, syntax-checked code, reviewed semantics, and tested behavior. None implies a byte-identical rebuild.
- Do **not** invent gameplay meaning, structure fields, calling conventions, register inputs, external prototypes, indirect call behavior, or missing data.
- Record unresolved assumptions as `TODO` or `ABI_UNVERIFIED`. Preserve pointer/address-width assumptions and any apparent undefined behavior for investigation.
- Use evidence from the user's original game build, not another Xbox game's addresses. Keep original XBE hash fixed at `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Never commit the XBE, ISO, copyrighted assets, complete decompiler dump, Ghidra databases, local absolute paths, tokens, passwords or credentials.
- Existing 103 C++ drafts are *legacy evidence* to migrate manually or through verified, explicit C conversions. Do not rename a `.cpp` to `.c` and claim it is converted.
- Prefer small batches and keep function identity, byte hashes, testing results and Git commit references current.
- **Single-branch policy:** `main` is the canonical and only intended long-lived source branch. Commit reviewed, provenance-preserving C11 fixes directly to `main` in small atomic commits, with an exact-tree compile audit; allow short-lived contributor branches and PRs, but never retain them as alternate long-lived sources; merge reviewed PRs into `main` and delete temporary branches. Do not mark unverified changes 1:1 or runtime-tested merely because `main` compiled.
- The 13,694 C files are deterministically filed by original XBE section/address band, or an explicitly assembly-reviewed readable alias. Route source paths through `tools/source_layout.py`; never assume flat `src/0x????????.c` paths, and never treat folder names as behavior/ABI proof.
