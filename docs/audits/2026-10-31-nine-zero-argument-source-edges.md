# 2026-10-31 — nine exact single-diagnostic, source-only direct-call declarations

## Current exact-tree checkpoint

Selection was based on completed strict Clang C++17 audit
`48e9a2fa7465d131acf4653bf65a1e188e5d89f8` (workflow run
`41232980884`): **3,552 / 13,694 passing (25.94%)**,
**10,142 failing**, no body-provenance mismatches. This is the last
completed, published inventory baseline, **not** the post-batch result.

These nine original-address callers each had exactly one Clang compiler
error: a direct `FUN_...` call without a visible declaration. The
independent callee source files passed the same inventory.
All nine call expressions use zero C++ arguments. Their original
call expressions, source bodies, x86 address labels and original x86
body SHA-256 digest labels were **not changed**. Every modification is
a file-scope `extern` declaration copied verbatim from its callee
draft, marked `ABI_UNVERIFIED`.

| Original caller | Existing callee draft signature | Caller preimage Git blob SHA-1 | Callee Git blob SHA-1 |
| --- | --- | --- | --- |
| `0x003800BB` | `undefined4 FUN_00381139(void)` | `44b3606bbd8b304475a4563642b26e60d32228f2` | `963366fe7eb6198d6957ee405cde728b143f6669` |
| `0x002816E0` | `void FUN_00281630(void)` | `ded04d2b719679ea3244aeab05ccc964a86d8683` | `04edd7941ffe3a79468819778fbfea5b69524956` |
| `0x00162600` | `void FUN_001625A0(void)` | `ee8e2a5e45375dc1a8a9c04128eafef94903395f` | `547d0089bd342fb5e7facf98d8bc57ff66ad7b01` |
| `0x00232520` | `float10 FUN_002324C0(void)` | `ccdd7a69f1c83c9c5476c6aaa4707de05c5b5a35` | `06d03aba3490fcecf6cc398912bd3e996ae62f0d` |
| `0x002E4940` | `int FUN_002E4600(void)` | `1c1196ec5bf4e77004d7342f6c77b324605e66d3` | `0e4d3f0d46866fa36931726abea0b8f13c261b55` |
| `0x002E9500` | `void FUN_002E9B30(void)` | `7d80610f68153f91205b6c9547a3ba6c33fed972` | `04f4c21f9f33bca86aab86e9f2c43718a9f94a3c` |
| `0x002B3420` | `void FUN_002B4100(void)` | `dad4d643b210a2122a76fb3beb67ffeb907a9225` | `8bf4ca28a1bf359dc54f6d1e8df1e7bac176b805` |
| `0x0028D1E0` | `undefined4 FUN_0028CE90(void)` | `b09086486d11f673c0e1f1ce9ffbe95fa19a58f6` | `a3d92f3753709ef4e4f514cef6fff63d1162d4cd` |
| `0x001E7F80` | `void FUN_001E7C00(void)` | `141be1ffe1aa0c8433a84d271725462ead72a5af` | `7b4016c61c3817059c38377b83d2c0ff453d6058` |

## Guards and limitations

`tools/test_cpp_20261031_nine_zero_arg_source_edges.py`
is wired to the full inventory workflow. It independently checks:
- Exactly nine original call sites and their original preimage Git blobs
  (by removing only the added declaration)
- Each independently captured original callee blob and matching signature
- Unchanged original XBE-body digest labels, original entry addresses and
  explicit `ABI_UNVERIFIED` annotations
- Clang C++17 `-O0` and `-O2` syntax success with the declaration
  and corresponding failure when the declaration is removed
- Three **relocatable host symbol-resolution tests** for
  `0x00162600`, `0x002E4940` and `0x002E9500`;
  these verify matching C++ symbol names via `nm`, *not* a PC executable

The tests and new full source sweep must complete before claiming any new
passing count. Source-draft matching and relocatable symbol resolution do
**not** establish original Xbox `RET n`, stack/implicit register input
binding, 32-bit guest pointer translation, x87 output semantics,
SEH behavior, vptr method identity, 1:1 behavioral parity, or native
PC game linkage. In particular, `0x00232520` returns a draft
`float10`; its original x87 return path needs original XBE evidence.

The pinned retail XBE identity is SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The original XBE is not available for reauthentication in this session.
No retail binary, game assets or full Ghidra export were committed.

## Remaining targets

Prioritize exact-tree compiler passes that retain the original function-body
hash. Recover original Xbox register/stack contracts and callee purge sizes
for the direct-call and virtual-dispatch hotspots. Investigate the 539
draft-fidelity review flags separately from syntax. Follow the original
XBE, REA naming and C++ fidelity rules; continue toward full original C++
reconstruction before native-PC BruteForce: Reloaded.
