# Initializer ledger and bounded link checks

Source baseline: `0ea8554667644c103de4452bfbe327ad2c664e35` (source unchanged at `0ffee2a3df0adce47f0c7a6f13a93c8951593026`).

The full CI run 43282600685 stopped at the historical 209-case literal ledger after two guest initializer replacements. Preserve the exact pre-replacement sources from commit `2ebb03c789c680c0b256ae246447ff6cab0b76f8` as fixtures, and pin both historical and replacement source hashes through the existing supersession gate. Original ledger counts, original function addresses and body hashes remain unchanged.

`tools/test_cpp_20261107_superseded_literal_ledger.py` now includes `0x00311b03` and `0x0031aa6e` in historical/current compilation and mutation checks. `tools/check_cpp_guest_record_initializers.py` is included in CI: it builds and links the three actual initializer definitions with a test-only guest-memory backend at O0/O2, then checks ordered memory operations, aliases, address wraparound and EAX results. Local verification also authenticated all three original bodies against the hash-pinned retail XBE. This is not a production guest-memory backend.

`tools/check_cpp_20261112_color_object_links.py` compiles the actual `0x000b1d70`, `0x000b8820` and `0x000b87a0` translation units and uses a relocatable link to resolve two exact mangled C++ symbols. Removing each callee independently must leave its symbol unresolved. Both edges pass at O0; four other undefined symbols remain. O2 removes the caller references, so optimized linkage receives no credit. No stubs or replacement game implementations are used.

The latest eight direct-call repairs separately pass O0/O2 syntax checks and retail verification of 14 original bodies and 12 E8 destinations. Object compilation still blocks linkage through these four callees:

| Callee | First compile blocker |
| --- | --- |
| `0x0033e8c3` | undeclared `FUN_003476db` |
| `0x00358ff0` | undeclared `FUN_0035b1a0` |
| `0x00371240` | undeclared `D3D_MakeRequestedSpace_8` |
| `0x00371ce0` | pointer-to-integer assignment |

The initializer callers `0x002feb34`, `0x003146a7` and `0x00315ad6` still require explicit guest stack/register handoffs. Casting host pointers or manufacturing arguments would not establish the original contract.

These verification changes do not increase syntax coverage. Full-game linkage, Xbox ABI, runtime behavior and byte-identical rebuilding remain unverified. No game installation, assets, saves or production runtime were modified.
