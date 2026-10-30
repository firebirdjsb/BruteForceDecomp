/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 228B12AD771D21FC8A657BE5CB6EC030A43B596FEBE345A2CE16A986B75720D2
 * Entry: 0x000b49e0, Ghidra index: 2178, label: FUN_000b49e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_000b2870(int param_1);
extern float10 FUN_000b2800(int param_1);

float * FUN_000b49e0(int param_1,float *param_2)

{
  short sVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float local_14;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
      fVar2 = (float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x20) * 0.5 - 64.0;
      iVar4 = 0;
      if (*(int *)(param_1 + 100) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x5a4);
      }
      fVar5 = *(float *)(iVar4 + 0x28) * (float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x22);
    }
    else {
      iVar4 = 0;
      if (*(int *)(param_1 + 100) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x5a4);
      }
      fVar2 = *(float *)(iVar4 + 0x24) * (float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x20) *
              0.5;
      iVar4 = 0;
      if (*(int *)(param_1 + 100) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x5a4);
      }
      fVar5 = *(float *)(iVar4 + 0x28) * (float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x22);
    }
    local_c = (float)-(int)fVar2;
    fVar2 = (float)-(int)(fVar5 * 0.5);
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
    fVar5 = (float)(*(int *)(param_1 + 0x74) - (int)local_14);
    sVar1 = *(short *)(param_1 + 8);
    fVar6 = (float)(*(int *)(param_1 + 0x70) - (int)fVar2);
    local_c = fVar6;
    local_8 = fVar5;
    local_4 = local_14;
    fVar7 = (float10)FUN_000b2870(param_1 + 0x2c);
    fVar7 = fVar7 - (float10)(int)sVar1;
    local_4 = (float)fVar7;
    fVar2 = (float)(int)fVar7;
    sVar1 = *(short *)(param_1 + 10);
    local_14 = fVar2;
    fVar7 = (float10)FUN_000b2800(param_1 + 0x2c);
    fVar7 = fVar7 - (float10)(int)sVar1;
    local_4 = (float)fVar7;
    fStack_10 = (float)(int)fVar7;
    pfVar3 = &local_14;
    if ((int)fVar2 <= (int)fVar6) {
      pfVar3 = &local_c;
    }
    local_c = *pfVar3;
    pfVar3 = &fStack_10;
    if ((int)fStack_10 <= (int)fVar5) {
      pfVar3 = &local_8;
    }
    fVar2 = *pfVar3;
  }
  *param_2 = local_c;
  param_2[1] = fVar2;
  return param_2;
}
