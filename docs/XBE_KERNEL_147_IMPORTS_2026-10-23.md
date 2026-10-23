# Original Xbox kernel imports: 147 source-verified ordinal slots

The original user-owned retail `default.xbe` (SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`) has an encoded kernel import thunk pointer at header offset `0x158`. Decoding the retail-XBE pointer identifies VA `0x00386340`, the beginning of file-backed `.rdata`.

From this exact executable, the import table has **147 ordered nonzero 32-bit entries followed by a zero terminator**. Each is an ordinal-based thunk with the most significant bit set; the ordinal numbers are **all distinct**, from 1 through 360 (not contiguous). The exact ordered ordinal list is in [`metadata/xbe_kernel_import_ordinals.csv`](../metadata/xbe_kernel_import_ordinals.csv). This list is original import evidence, **not a list of verified API names or prototypes**.

`tools/audit_xbe_kernel_imports.py` verifies the original XBE SHA, section mapping, import address, table termination and all 147 ordinal values against the versioned manifest. It is intentionally run with the **user's local binary only**:

```text
python3 tools/audit_xbe_kernel_imports.py --xbe path/to/original/default.xbe
```

`tools/test_xbe_kernel_imports.py` tests parser invariants with a synthetic, noncommercial XBE-like byte buffer and requires no game binary. The CI tests do **not** recheck original bytes unless the user supplies the XBE locally.

## Native-PC platform dependency implications

The native port has to provide behaviorally correct platform replacements for the **actually-used kernel imports** and Xbox-specific APIs. Before assigning human-readable import names, verify the ordinal-to-SDK-version mapping and signatures from appropriate independent evidence; then check each callsite, register/stack contract, error behavior and object lifetime. Do not use guessed dummy implementations and claim the game works.

Separate major imported/static platform areas in the original XBE include DSOUND audio, D3D graphics, XNET network and XONLINE. Those section labels do **not** validate a functioning Windows rendering, audio, networking or online adapter. The native Windows game build, modern rendering, widescreen, high refresh and 64-player multiplayer are future integration gates.
