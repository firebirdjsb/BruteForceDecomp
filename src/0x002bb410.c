/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A96A15FEDAF84DF7787BD20674CD4C38C3AE261992825E99528C369081EB91CD
 * Entry: 0x002bb410, Ghidra index: 9902, label: FUN_002bb410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002bb410(uint *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = 1.0 / (float)param_1[7];
  pfVar1 = (float *)(param_1 + 0xd);
  fVar3 = 1.0 / (float)param_1[6];
  param_1[0xe] = (uint)fVar3;
  *pfVar1 = 1.0 / (float)param_1[5];
  param_1[0xf] = (uint)fVar2;
  param_1[0x10] = (uint)(1.0 / (float)param_1[8]);
  fVar4 = (float)*(undefined8 *)(param_1 + 6);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20);
  if ((fVar4 * fVar4 + fVar5 * fVar5 + (float)param_1[5] * (float)param_1[5]) * 0.010000001 <=
      (fVar2 - *pfVar1) * (fVar2 - *pfVar1) + (*pfVar1 - fVar3) * (*pfVar1 - fVar3) +
      (fVar3 - fVar2) * (fVar3 - fVar2)) {
    *param_1 = *param_1 & 0xffffff3f;
  }
  else {
    *param_1 = *param_1 & 0xffffff7f | 0x40;
  }
  param_1[0x12] = (uint)(0.5 / (float)param_1[1]);
  return;
}
