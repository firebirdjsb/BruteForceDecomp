# SIMD scalar RSQRTSS syntax correction — 0x00023140

Original Brute Force Xbox XBE SHA256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.

This Ghidra-discovered function's 310 original machine-code bytes (`0x00023140..0x00023275`) hash to `752206875CE006CFFCA6FA3175367CEA09CF54344C7B883A85BAC0989B19AD4C` and matched the source XBE.

Original assembly at 0x00023200 executes `rsqrtss xmm0, dword ptr [esp+4]`. It stores the low float lane at 0x00023206, loads it via x87 `fld` at 0x0002320C, and returns with `ret 8`. The Ghidra C draft assigned the vector result into a C `undefined1[16]` array and attempted to access its nonexistent `._0_4_` member. The conservative syntax repair uses `_mm_rsqrt_ss(_mm_set_ss(fVar5))` and `_mm_cvtss_f32`. It does not substitute `1/sqrtf`, which would change the approximate instruction.

Clang host C11 `-msse -fsyntax-only` succeeded, but the C function calling convention and x87 intermediate precision remain unverified. A Windows x86 cross check was not available in this local environment due to absent target C headers. No gameplay semantics were inferred and no whole-game link or runtime equivalence is claimed.
