# C11, x86 ABI and platform repair checkpoint — 2026-10-23

This checkpoint distinguishes *syntax repair*, *source-implied types*, *ABI evidence*, and *runtime validation*. None of the changes below proves 1:1 Xbox execution or enables the native PC game.

## Exact audited source state

Full GitHub Actions audit of commit `468a1f8e30e21b30d25c559600302c22fdfc61de`: 13,694 separate drafts; **12,399 syntax-pass / 1,295 syntax-fail**. Relative to `a168d1dbee80ab5d7d0a58883945eed02a792a3b`, exactly `0x00024080` and `0x000d2240` changed fail -> pass, with zero pass -> fail regressions, zero missing original body hash labels, and zero original body hash mismatches. This audit allows unresolved prototype and pointer-width warnings, checks isolated files only, and does **not** link the PC game.

## Source corrections with unresolved binary proof

- `0x000d2240`: the recovered draft assigns four-byte float reads to `_DAT_004a8d34` and `_DAT_004a8d38`, then uses both in floating arithmetic. Correct the two erroneous pointer/integer declarations to `float`. A separate original-XBE instruction read must still verify stores, loads and cross-function storage identity; the draft is **ABI_UNVERIFIED**.
- `0x00024080`: replace invalid Ghidra 16-byte array assignments and `._0_4_` subpieces with C11 SSE `_mm_rsqrt_ss` and `_mm_cvtss_f32` where the recovered code consumes only the scalar low lane. Upper XMM lanes are not modeled and original instruction ordering, rounding and flags remain **ABI_UNVERIFIED**.

## Xbox XNET declaration repair (not syntax-passing yet)

- `0x00346207` (XONLINE bind) and `0x0034628b` (XONLINE connect) now include the *existing* `bf_xbox_socket_abi_draft.h` opaque `sockaddr` declaration, consistently with the recovered forwarding wrappers `0x003450b4` and `0x003450bf`.
- Both implementations dereference `sa_data`. The repository deliberately does not assert the full Xbox sockaddr binary layout. **Do not substitute host POSIX or Windows structures, invent a `sa_data` offset, or claim either function is repaired.** Verify original x86 effective addresses and platform structure layout first, then add a separately tested byte-level reader.
- Calling convention, runtime socket behavior, error translation and network scalability remain unverified.

## Next gated investigations

1. Recover stack/register evidence for `0x0001c250` and related callers from the original XBE, including `stack0x00000004` identity and return/caller cleanup. Do **not** create uninitialized fake locals.
2. Inspect original floating-point read/write widths and bit transfers in pointer-cast failures (for example `0x00314e18`), checking if Ghidra typed a raw pointer word as `float`. Do **not** use numeric float-to-pointer casts.
3. Verify x86 packed-SSE lane shuffles and x87 rounding before extending the scalar repair to `0x00027540` or `0x00056740`, which have consumed packed lanes and unresolved pointer/stack behavior.
4. Recover indirect-call target and argument ABI from source instructions, not from the host C compiler's permitted implicit-call warnings.
5. Integrate Xbox CRT, D3D, sound and XNET through separately verified 32-bit ABI contracts before designing a native PC implementation or 64-player multiplayer.

The original XBE, copyrighted assets and Ghidra database remain outside Git; the stable user-owned XBE SHA-256 is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

The source-only commits after the audited checkpoint are `8fce969723487f19d9d3d0cac4e7274fa0596d13` and `7071b0cebc89f259c1cd60e1748d55b1cb948d67`. Audit those exact trees independently before publishing updated numbers.
