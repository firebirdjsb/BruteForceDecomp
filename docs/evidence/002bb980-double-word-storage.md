# 0x002bb980 incoming double word stores

- Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Original function-body SHA-256: `8CB376C292FA8F6967BAE34AEE2046268E94D533917193E144975FCD03387261`; entry `0x002bb980`, 622 bytes. The body and digest were checked with the local hash-pinned inspection script.
- At `0x002bba79..0x002bba8f`, the original loads the incoming QWORD from `[esp+8]`, writes it back with x87 `FST`, then stores `[esp+0xc]` to object `+0x17c` and `[esp+8]` to `+0x178`. These are the high and low DWORDs in that order.
- At `0x002bbb89..0x002bbb9b`, the original writes the x87 value to `[esp+8]` with `FSTP`, then stores the low DWORD to object `+0x180` and the high DWORD to `+0x184`.
- The C11 draft copies the object representation of the incoming eight-byte `double` into two `uint32_t` words and retains the observed order of destination writes. This resolves four decompiler-only `param_1._*_4_` expressions. It does not model x87 stack state, signaling-NaN effects, guest stack writeback, or the calling ABI; semantic and runtime equivalence remain unverified.
- Focused Clang C11 syntax passed with the repository's existing implicit-call and pointer-conversion warning suppressions. `git diff --check` passed. No Xbox build or game test was performed.

Independent integration review checked the original body and both store ranges.
The neutral `value_words` name avoids inferring gameplay meaning. This local
representation assumes the supported little-endian x86/x64 host; x87 effects
listed above remain unresolved. The persistent verifier now pins this body
and both ranges. Both i686 and x86_64 focused syntax checks passed.
