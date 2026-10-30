/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06AF192820CD07214F3AD3BEB775FAE0580F4D0DA21D4ED2F6FE0292C9E5B917
 * Entry: 0x00226930, Ghidra index: 7650, label: FUN_00226930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00226930(int *param_1,float param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_88;
  undefined1 auStack_6c [108];
  
  piVar1 = (int *)param_1[0x7b];
  fVar2 = (float)piVar1[0x7e];
  fVar3 = (float)piVar1[0x7d];
  fVar4 = (float)piVar1[0x7c];
  iVar5 = (**(code **)(*param_1 + 0x40))();
  fVar2 = *(float *)(iVar5 + 0x2c) - fVar2;
  fVar3 = *(float *)(iVar5 + 0x28) - fVar3;
  fVar4 = *(float *)(iVar5 + 0x24) - fVar4;
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  if (SQRT(fVar2) * 0.2 <= (float)param_1[0x8b]) {
    local_88 = SQRT(fVar2) * 0.2;
  }
  else {
    local_88 = (float)param_1[0x8b];
  }
  FUN_0020e080(auStack_6c,(float)param_1[0x89] * 0.017453292);
  (**(code **)(*piVar1 + 0x40))();
  iVar5 = FUN_002334b0();
  fVar2 = *(float *)(iVar5 + 0x10);
  fVar3 = *(float *)(iVar5 + 0x1c);
  *param_3 = local_88 * *(float *)(iVar5 + 4) + *param_3;
  param_3[1] = local_88 * fVar2 + param_3[1];
  param_3[2] = local_88 * fVar3 + param_3[2];
  param_1[0x89] = (int)(param_2 * (float)param_1[0x8a] + (float)param_1[0x89]);
  return;
}
