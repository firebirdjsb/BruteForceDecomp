/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 331D44F6DD3009E949FB076EE0AA3E499D686DBB76987B5F683C8F97D8FCE0AD
 * Entry: 0x000b4bf0, Ghidra index: 2179, label: FUN_000b4bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_000b28e0(int param_1);
extern float10 FUN_000b2770(int param_1);

float * FUN_000b4bf0(int param_1,float *param_2)

{
  short sVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
      local_c = (float)(int)((float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x20) * 0.5 + 64.0);
      iVar4 = 0;
      if (*(int *)(param_1 + 100) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x5a4);
      }
      fVar2 = (float)(int)(*(float *)(iVar4 + 0x28) *
                           (float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x22) * 0.5);
    }
    else {
      iVar4 = 0;
      if (*(int *)(param_1 + 100) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x5a4);
      }
      local_c = (float)(int)(*(float *)(iVar4 + 0x24) *
                             (float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x20) * 0.5);
      iVar4 = 0;
      if (*(int *)(param_1 + 100) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x5a4);
      }
      fVar2 = (float)(int)(*(float *)(iVar4 + 0x28) *
                           (float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x22) * 0.5);
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x78) * 0.5;
    if (fVar2 <= 32.0) {
      fVar2 = 32.0;
    }
    local_14 = *(float *)(param_1 + 0x78) * 0.75;
    if (local_14 <= 32.0) {
      local_14 = 32.0;
    }
    fVar5 = (float)(*(int *)(param_1 + 0x74) + (int)local_14);
    sVar1 = *(short *)(param_1 + 8);
    fVar6 = (float)(*(int *)(param_1 + 0x70) + (int)fVar2);
    local_c = fVar6;
    local_8 = fVar5;
    local_4 = local_14;
    fVar7 = (float10)FUN_000b28e0(param_1 + 0x2c);
    fVar7 = fVar7 - (float10)(int)sVar1;
    local_4 = (float)fVar7;
    fVar2 = (float)(int)fVar7;
    sVar1 = *(short *)(param_1 + 10);
    local_14 = fVar2;
    fVar7 = (float10)FUN_000b2770(param_1 + 0x2c);
    fVar7 = fVar7 - (float10)(int)sVar1;
    local_4 = (float)fVar7;
    local_10 = (float)(int)fVar7;
    pfVar3 = &local_14;
    if ((int)fVar6 <= (int)fVar2) {
      pfVar3 = &local_c;
    }
    local_c = *pfVar3;
    pfVar3 = &local_10;
    if ((int)fVar5 <= (int)local_10) {
      pfVar3 = &local_8;
    }
    fVar2 = *pfVar3;
  }
  *param_2 = local_c;
  param_2[1] = fVar2;
  return param_2;
}
