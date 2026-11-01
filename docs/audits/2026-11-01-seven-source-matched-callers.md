# Seven source-matched C++17 direct-call repairs — 2026-11-01

## Baseline and scope

- Starting main: `4e75f2cec27a2bda45c45f62726836a8e7b7e579`.
- Last completed exact-tree audit: `0be12a21411e9f95c3be95876d74181b986079e8`, 3,630/13,694 isolated Clang++17 passes (26.51%), 10,064 failures. Do not claim a new percentage before a completed new audit.
- Screened at least 40 first-error declaration/arity candidates from the completed audit; selected ten for isolated C++17 preflight, quarantined three, and staged seven source-only fixes.
- Original retail XBE authenticated SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Original bytes remain private, never committed.

## Source repairs (draft declarations, **not** recovered Xbox ABI)

| Caller | Source-matched original-address callees | Original E8 CALL sites |
| --- | --- | --- |
| `0x000F47F0` | `0x00105840`, `0x000EFBB0`, `0x000EFB40` | `0x000F4805`, `0x000F4816`, `0x000F481F` |
| `0x000F7920` | `0x001020D0`, `0x0008A460`, `0x0010C7D0` | `0x000F7933`, `0x000F793F`, `0x000F7958` |
| `0x000FDB40` | `0x000FDBA0`, `0x0010BC40` | `0x000FDB6A`, `0x000FDB75` |
| `0x0010A240` | `0x0010A7D0` | `0x0010A268`, `0x0010A275` |
| `0x0010FE80` | `0x000BA140` | `0x0010FEB3`, `0x0010FEBC` |
| `0x001D1C60` | `0x0010BC40` | `0x001D1CA9`, `0x001D1CBA` |
| `0x001E0710` | `0x001D3530`, `0x0010BC40` | `0x001E073D`, `0x001E0748` |

The seven patches insert declarations after the existing type-header include. Every original source body, original-address label and embedded original-body SHA-256 is unchanged. The regression gate removes each inserted block and checks the original exact-audit SHA-256, then compiles at Clang++17 O0 and O2 and checks declaration-removal negatives. A separate test links all seven host objects with **test-only synthetic symbols** matching source drafts: this tests C++ name mangling only and is **not** original callee implementation or playable native linkage.

`scripts/verify_cpp_20261101_seven_source_calls_xbe.py` authenticates the private retail XBE when supplied, checks 16 original E8 destinations and 19 narrow register-producer/RET windows, and rejects 64 displacement mutations plus an altered CALL. CI runs its binary-free self-test; no XBE is stored in the repository.

Original instruction evidence includes EAX/EDI producers in `0x0010A240`, paired EAX/ECX LEA inputs in `0x001D1C60` and `0x001E0710`, and `RET 4` versus plain `RET`. These do not establish complete implicit register lifetime, guest pointer translation, virtual dispatch, return values, Xbox compiler ABI or 1:1 runtime behavior. Preserve `ABI_UNVERIFIED`.

## Quarantined candidates

- `0x000F3B20`, `0x000F3B60`, `0x000F3BA0`: the source-matched `0x00102000` calls are original E8 sites, but the drafts also call an indirect `code()` function with one argument, which strict C++17 rejects. The original virtual/interface contract needs separate instruction-level recovery; do not hide it with a guessed variadic prototype.
- `0x000230A0`, `0x00164A40`: guest32 pointer/storage and host pointer-width mismatches; no guessed narrowing casts.
- `0x0017F2D0`: source-matched arity is insufficient because the downstream pointer/float argument types conflict.
- x87, SSE, SEH, thunk return/register and vtable cases remain separate evidence-needed queues.

## Verification levels

- Original XBE identity, 16 CALL sites, 19 windows, and 64 synthetic negative controls: checked with authenticated private bytes.
- Isolated Clang++17 O0/O2 and synthetic symbol-only partial linkage: checked for seven source bodies.
- Full strict 13,694-function exact-tree audit after the single main ref update: **not yet measured**.
- Original Xbox C++ object ABI, full cross-function runtime linkage, guest32-to-host memory translation, virtual dispatch, 1:1 gameplay, Windows/Linux/Android native port: **not verified**.
