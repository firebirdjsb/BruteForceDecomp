# Three original RSQRTSS scalar-lane repairs — 2026-10-22

These functions were originally decompiled with Ghidra's non-assignable `undefined1[16]` temporaries and invented `._0_4_` accesses. The original Xbox x86 contains **`rsqrtss`** instructions at:

| Original VA | Original body SHA-256 | RSQRTSS opcode VA |
|---|---|---|
| 0x00026060 | `41688132890B06BA9FB24CA733161F4F5CE3854D4E5BEF90C2231A0D79789C73` | 0x000261BD |
| 0x0002bf60 | `B33CBC085A87E7C4F7CA2DEBA5E1513EAC9401C7937F34B51CEA6AA6FD6D8EFF` | 0x0002C12C |
| 0x00024c00 | `12AD36047C739DB8C612BC9253A4F773511150119F5CF6393E561EA06A423CFA` | 0x00024CFA |

Each original body was independently mapped back to the uploaded `default.xbe` and hashed, and the revised C11 file was syntax-checked individually using Clang, `-msse`, and the repository's existing *lenient* compatibility-warning allowances. The revised code uses `_mm_rsqrt_ss(_mm_set_ss(input))` and `_mm_cvtss_f32`; this preserves the approximate reciprocal-square-root instruction and only the observed scalar lane rather than inventing a complete vector structure or replacing it with exact `1 / sqrtf`.

**Limits:** SSE upper lanes, x87 intermediate rounding, original function calling conventions, indirect calls, and linked runtime behavior remain unverified. This is a syntax repair of supported low-lane operations, **not** a complete semantic reconstruction or Xbox build. Unknown game-specific purposes retain stable address names.
