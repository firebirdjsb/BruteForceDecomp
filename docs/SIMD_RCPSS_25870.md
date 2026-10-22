# RCPSS source repair — original Xbox function 0x00025870

- Original function address: `0x00025870`; original body size: **390 bytes**.
- Original body SHA-256: `93BCAEF1744D6170CF70640B24BCB0803CC45F8CE6663C2E0CED991FBDAD20C7`.
- Machine instructions at `0x0002591A`: `movss xmm0,[esp+8]`; `0x00025920`: `rcpss xmm0,xmm0`.
- Ghidra's pre-repair draft assigned this scalar SIMD instruction to an invalid 16-byte C array and accessed `._0_4_`. The corrected C11 analysis source uses `_mm_rcp_ss(_mm_set_ss(fVar8))` and `_mm_cvtss_f32` to model **the approximate reciprocal instruction**.
- The original uses incoming EAX, ECX, and ESI register values not modeled as ordinary C arguments. The surrounding x87 stack effects and unusual x86 flags-packed return values remain subject to assembly review.
- Host Clang `-std=c11 -msse -fsyntax-only` with the repository's existing compatibility-warning allowances: **pass**.
- No full Xbox compile, linkage, behavior, or byte-identical recompilation claim. Gameplay purpose is **unknown**.

The original `RCPSS` instruction is different from `RSQRTSS` (reciprocal square root). It must not be replaced with the latter merely to simplify C.
