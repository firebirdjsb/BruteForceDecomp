# 0x00125ad0 local float vector

- Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Local pinned-XBE inspection confirmed entry `0x00125ad0`, 1,122 body bytes and body SHA-256 `2C79F5187A5A3F6B3ACEBADC6F6C3738B63845D6CC749A9683EE8F565D09B9B4`.
- `0x125d4a..0x125d5d` load and subtract binary32 Z (`+0x2c`), Y (`+0x28`), then X (`+0x24`) components from the two objects. `0x125d60` stores X as m32fp at `[ESP+0x24]`; `0x125d68..0x125d76` exchange the x87 stack and store Z at `[ESP+0x1c]`, then Y at `[ESP+0x20]`. `0x125d64..0x125d86` copy their DWORD representations into the consecutive vector at `[ESP+0x28]` X, `[ESP+0x2c]` Y and `[ESP+0x30]` Z. `0x125d82` takes the address of that three-word vector and `0x125d8d..0x125d9e` passes it to `0x000b3010`.
- The previous C draft attempted to cast the X float subtraction to a pointer. It also treated the vector's first word as a pointer variable that earlier held an unrelated object pointer. The repaired path uses a contiguous `float[3]` for the observed binary32 words and passes its address. The alternate branch still passes the object address at `iVar7+0x24`. The existing `piStack_28` pointer used by an earlier call remains separate.
- Focused Clang C11 syntax passed for i686 and x86_64 Windows with repository sweep flags; `git diff --check` passed. The original stack slot reuse and callee's complete register/stack interface are only partially represented in C; x87 precision/exception state, guest pointer mapping, complete `0x000b3010` ABI, and runtime behavior remain unverified.

Independent integration review confirmed the 1,122-byte original body and
the FSTP/MOV sequence producing three consecutive four-byte X,Y,Z words.
EDX holds the vector address before PUSH EDX; this observation alone does
not establish an implicit register argument for the callee. The C array has
a 12-byte static size check. Earlier pointer uses remain in their original
draft lifetime; no whole-function guest-frame equivalence is claimed.

Body provenance concatenates the original ordered ranges 0x125ad0..0x125ced
(542 bytes) and 0x125cf9..0x125f3c (580 bytes). The intervening 11 bytes
are outside this exported function body; the verifier preserves that gap.
