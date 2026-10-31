# Evidence-gated C++17 repair: 0x0017AA30 -> 0x0017AA70

Status: **C++17 syntax + partial host symbol linkage + original XBE direct-call/float-word operands verified; Xbox ABI and behavior remain ABI_UNVERIFIED**.

## Source and audit provenance

- Parent main: `209311ef2d499e1b38d266ac3c0cda2ee5e2b432`.
- Last completed exact-tree audit: `9aa8cf635f17400705ed24406eec50aa1e2077d4`, **3,576/13,694 passing (26.11%)**. No percentage is extrapolated from this repair.
- Caller: `src/main_unclassified/band_0017/0x0017aa30.cpp`; original source SHA-256 `28df8a15a1df01f90b5b33816bd59af76d5d945c85608029c17277d0c331e74a`; original x86 body digest comment `35B9561B204D486D23DDCB1C495C7D4A81BC2A265EC3B8343B2575B92D0B0FA8`.
- Callee: `src/main_unclassified/band_0017/0x0017aa70.cpp`; unchanged source SHA-256 `e9e405e30890245e7a99d0b7020d76f0a3570172e9ef1082a4e19e5580a6d87d`; original x86 body digest comment `6F321390DB44ACBE73476F2DD32C1016EFD94D896B97BDEB0819E1C585492EF1`.
- Original retail XBE authenticated SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`; original binary remains outside Git.

## Machine-code evidence and narrow repair

- `0x0017AA49: PUSH EBP` passes the **raw 32-bit stack word**, and `0x0017AA4A: MOV ECX,ESI` supplies an implicit callee object/register input.
- `0x0017AA4C: E8 1F 00 00 00` is a direct relative CALL to `0x0017AA70`. The target is checked from the displacement, not a draft name.
- `0x0017AA94: FLD DWORD PTR [ESP+8]` reads the argument as IEEE754 float bits. `0x0017AA90: POP ECX; RET 4` is one observed callee return path. `0x0017AA58: FSTP DWORD PTR [ECX+EDI*4]` stores the x87 result; `0x0017AA66: RET 8` returns from the caller.
- Therefore, the existing draft's numeric `uint32_t -> float` argument conversion was not a faithful representation of this call edge. A local `memcpy` now preserves the incoming DWORD bit pattern before the source-matched `float10 FUN_0017aa70(float)` call. No guest address is converted into a host pointer, and the callee body is unchanged.
- Original function entry addresses, Ghidra labels and x86 body SHA-256 comments remain intact. The host `float10` proxy is **not** a proven Xbox x87 ABI.

## Gates

- Strict Clang++17 `-O0/-O2 -fsyntax-only`: caller and callee pass.
- Declaration-removal negative controls fail with the expected missing callee name.
- Original caller source preimage and unchanged callee source SHA-256 are asserted by `tools/test_cpp_20261031_float_word_edge.py`.
- `clang++ -c` caller/callee objects + `ld -r` resolve the mangled `FUN_0017aa70(float)` host symbol. This is **partial symbol linkage**, not a complete native PC link or Xbox ABI test.
- Optional local `BF_RETAIL_XBE=/path/to/default.xbe python3 -m unittest discover -s tools -p 'test_cpp_20261031_float_word_edge.py' -v` authenticates the XBE and checks the above instruction bytes; CI skips this optional binary gate because the XBE must not be committed.
- Additional local bit-pattern tests confirmed bitwise round-trips for positive/negative values, signed zero, infinity and a NaN payload, and rejected numeric conversion as equivalent.

## Quarantined and unresolved

- `0x00101510 -> 0x001013D0`: caller supplies `int*`, callee draft declares `uint32_t*`. Source-only declaration fails strict C++17; no alias-breaking cast was accepted. Original output writes and virtual dispatch need independent review.
- `0x00165970 -> 0x0001FE00`: existing callback is `void()`, callee draft expects `code*` with unverified return/implicit ECX. No callback prototype or cast was invented.
- Other screened candidates had pointer/scalar return mismatches, guest32/host pointer hazards, unresolved SEH, x87/SSE or virtual dispatch.
- **Still unverified:** complete caller/callee register preservation, every callee return path, full x87 precision and rounding, class/vtable layout, guest-memory translation, game behavior and native PC linkage.

This report is a partial original-machine contract and one compiler-passing source repair, **not** a 1:1 behavior certification or a measured exact-tree syntax delta.
