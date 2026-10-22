/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20453C689A14651C038B61DE0B675FC8F0702D100F6036601B7888D955F893A0
 * Entry: 0x0015a580, Ghidra index: 4515, label: FUN_0015a580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar opcode model; original XMM upper lanes not recovered.
 * ABI/behavior remain unverified, despite C11 syntax repair. */
undefined4 FUN_0015a580(undefined4 param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  undefined1 in_XMM0 [16];
  __m128 auVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  cVar1 = FUN_0015a140();
  if (cVar1 != '\0') {
    cVar1 = FUN_0015a140();
    if (cVar1 != '\0') {
      *param_2 = local_18 - local_c;
      param_2[1] = local_14 - local_8;
      param_2[2] = local_10 - local_4;
      if ((*param_2 != 0.0) || (param_2[2] != 0.0)) {
        param_2[1] = 0.0;
        auVar3 = _mm_rsqrt_ss(_mm_set_ss(*param_2 * *param_2 +
                                 param_2[2] * param_2[2] + param_2[1] * param_2[1]));
        fVar2 = _mm_cvtss_f32(auVar3);
        *param_2 = fVar2 * *param_2;
        param_2[1] = fVar2 * param_2[1];
        param_2[2] = fVar2 * param_2[2];
        return 1;
      }
      if (param_2[1] != 0.0) {
        param_2[1] = param_2[1] / ABS(param_2[1]);
        return 1;
      }
    }
  }
  return 0;
}
