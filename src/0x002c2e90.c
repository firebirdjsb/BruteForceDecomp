/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8468C8DFC760BE46E8BC8E98D850D0F3D1E75DC0A6F61A9D8F562756131149B
 * Entry: 0x002c2e90, Ghidra index: 10044, label: FUN_002c2e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c2e90(int param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x38);
  fVar3 = *(float *)(iVar5 + 0x74);
  fVar4 = *(float *)(iVar5 + 0x78);
  *param_2 = fVar2 * *(float *)(iVar5 + 0x70);
  param_2[1] = fVar2 * fVar3;
  param_2[2] = fVar2 * fVar4;
  fVar2 = *(float *)(param_1 + 0x3c);
  uVar1 = *(undefined8 *)(iVar5 + 0x84);
  *param_2 = *param_2 + *(float *)(iVar5 + 0x80) * fVar2;
  *(ulonglong *)(param_2 + 1) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) +
                (float)((ulonglong)uVar1 >> 0x20) * fVar2,
                (float)*(undefined8 *)(param_2 + 1) + (float)uVar1 * fVar2);
  FUN_002b6500(param_2);
  if (*(char *)(param_1 + 0x34) == '\x01') {
    FUN_002c2a20(param_1,param_2);
  }
  return;
}
