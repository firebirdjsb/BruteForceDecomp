/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DA4F3748F3EC3DA37B178462B78C7CA09ED2C655319DD40D6A81BB9122592F0
 * Entry: 0x002b6500, Ghidra index: 9824, label: FUN_002b6500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002b6500(float *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  
  auVar2._0_4_ = *param_1 * *param_1;
  auVar2._4_4_ = 0;
  fVar3 = (float)*(undefined8 *)(param_1 + 1);
  fVar1 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  auVar2._8_4_ = fVar3 * fVar3;
  auVar2._12_4_ = fVar1 * fVar1;
  fVar3 = auVar2._8_4_ + auVar2._12_4_ + auVar2._0_4_;
  if (fVar3 < 1e-10) {
    return (float10)0.0;
  }
  auVar2 = rsqrtss(auVar2,fVar3);
  fVar1 = auVar2._0_4_;
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  return (float10)fVar1 * (float10)fVar3;
}
