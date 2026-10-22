/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D786107A4E61AA96161DA24C39C7832DFBC4A3C38A390C0361388AD8A2E30A39
 * Entry: 0x0015b8f0, Ghidra index: 4532, label: FUN_0015b8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra scalar SSE opcode model; XMM upper lanes remain unobserved.
 * ABI/behavior remain unverified despite host C11 syntax repair. */
float * FUN_0015b8f0(float *param_1,float param_2)

{
  float fVar1;
  __m128 auVar2;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (param_2 < fVar1) {
    auVar2 = _mm_rcp_ss(_mm_set_ss(fVar1));
    fVar1 = _mm_cvtss_f32(auVar2);
    *param_1 = *param_1 * fVar1;
    *(ulonglong *)(param_1 + 1) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_1 + 1) * fVar1);
    return param_1;
  }
  return param_1;
}
