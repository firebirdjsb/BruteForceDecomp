/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C117EE3C01269202E8055F3D45FFE64BDBFDD4F18C087DF727DACC8A2F4EB5F3
 * Entry: 0x00232f20, Ghidra index: 7777, label: FUN_00232f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
float10 FUN_00232f20(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float reciprocal;
  
  fVar1 = param_1;
  if (param_1 <= 1.1754944e-38) {
    fVar1 = 0.0;
  }
  fVar1 = (float)((uint)fVar1 & 0x807fffff | 0x3f800000);
  if (fVar1 < 0.70710677) {
    fVar2 = 0.5;
  }
  else {
    fVar2 = 1.0;
  }
  reciprocal = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(fVar1 + fVar2)));
  fVar2 = (fVar1 - fVar2) * reciprocal;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar2 * fVar2;
  reciprocal = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(
      (fVar3 * -35.67228 + 312.09378) * fVar3 + -769.69196)));
  return (float10)(fVar2 + (float)(int)((((uint)param_1 >> 0x17) - 0x7f) -
                                       (uint)(fVar1 < 0.70710677)) * 0.6931472 +
                  ((fVar3 * -0.7895803 + 16.386665) * fVar3 + -64.141) * fVar3 * fVar2 *
                  reciprocal);
}
