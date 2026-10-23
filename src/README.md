# Brute Force C11 function sources — 13,694 discovered entries

**This is evidence-oriented organization, not reconstructed game architecture.** All original functions keep their original `0x????????.c` entry identities and embedded original x86 body SHA-256. Their Git blob content is unchanged by this reorganization.

- `main_unclassified/band_XXXX/` — the original XBE `.text` address band. This mixes gameplay, engine, runtime and static libraries; **do not assume a gameplay subsystem from the address band**.
- `platform/graphics_d3d/` — functions in the original D3D section.
- `platform/audio_dsound/` — functions in the original DSOUND section.
- `platform/network_xnet/` — functions in the original XNET section.
- `platform/online_xonline/` — functions in the original XONLINE section.
- `platform/xpp_role_unverified/` — the original XPP section; its exact functional role is not established.
- `video_bink/<original-section>/` — original Bink-family code sections and pixel formats.
- `reviewed_by_assembly/<readable-alias>/` — only the **15 individually evidence-reviewed aliases** from `metadata/asm_supported_readable_names.csv`; these are functional descriptors, **not** ABI/behavior verification.
- `unmapped_unclassified/` — explicit fallback for addresses outside these recorded sections (if encountered).

Find a particular function with `python3 -c "import sys;sys.path.insert(0,'tools');from source_layout import source_path;print(source_path('.', '0x000b4f20'))"`.

Use `python3 tools/test_source_layout.py` to verify 13,694 unique entries and the canonical inventory, `python3 scripts/check_sources.py` to verify identity/hash labels, and `python3 tools/sweep_c11.py --root . --out c11_sweep_results --jobs 8` for individual **host syntax** checks. `python3 tools/classify_c11_functions.py` regenerates the metadata function group snapshots with their current paths.

## Native-PC completion criteria

C11 syntax is merely the first gate. The future native game requires verified 32-bit x86 register/stack and object contracts, a linked C11 core, explicit Xbox-to-PC platform adapters, asset and save/load support, actual playable runtime tests, and then isolated optional widescreen, high-refresh, HD textures, 64-player multiplayer and modding. **None is implied by file grouping.**
