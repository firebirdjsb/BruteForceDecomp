# Original SSE scalar rsqrtss expression recovered, entry 0x0001D0C0

Original Xbox Brute Force `default.xbe`, entry `0x0001D0C0`, source-body SHA-256 `799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4`.

The 594-byte original x86 body has **three `rsqrtss xmm0,[esp+4]` instructions**, at `0x0001D103`, `0x0001D20C`, and `0x0001D2AE`. Ghidra modeled the 128-bit temporary as an ordinary 16-byte C array then tried to assign vectors to the array and read the nonexistent `._0_4_` member. The original consumer reads only the low scalar float lane, so the new C11 draft uses `_mm_rsqrt_ss(_mm_set_ss(expression))` and `_mm_cvtss_f32` to represent **that specific SSE opcode and consumed lane**. It also uses `fabsf` for an observed `fabs` instruction.

Host Clang C11 syntax with the repository's existing compatibility warnings passed. The original code mixes x87 intermediate precision with SSE approximate reciprocal square roots. Exactly matching its 32-bit intermediate rounding and unusual threshold/NaN branch still requires instruction-level tests. The draft's `in_EAX` / `in_ECX` variables are not yet bound to C arguments, and the function is **not safe to invoke as if behavior or ABI were verified**.

This repair makes only the SIMD syntax more expressive. It does **not** declare the 9-float output to be a proven named transform structure, nor validate a full game build.
