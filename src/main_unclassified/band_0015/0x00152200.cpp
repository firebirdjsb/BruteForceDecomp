/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C179C7C480E54FD44B920EA628703FCE275925BB3BBD7225BB940CAD85A7C9AE
 * Entry: 0x00152200, Ghidra index: 4419, label: FUN_00152200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00152200(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  int local_60;
  float local_48 [4];
  float local_38;
  float local_34 [5];
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  *(undefined4 *)(param_1 + 0x7c) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x80) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x84) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x8c) = 0xc7c35000;
  *(undefined4 *)(param_1 + 0x90) = 0xc7c35000;
  *(undefined4 *)(param_1 + 0x94) = 0xc7c35000;
  iVar6 = 0x1c;
  do {
    pfVar3 = local_34;
    iVar4 = 4;
    do {
      *pfVar3 = 0.0;
      pfVar3 = pfVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    fVar1 = *(float *)(param_1 + 8);
    local_48[1] = -*(float *)(param_1 + 0x10);
    local_48[0] = *(float *)(param_1 + 0x10);
    local_60 = 0;
    do {
      pfVar3 = local_48 + 2;
      local_48[2] = fVar1 + *(float *)(iVar6 + -4 + param_1);
      iVar5 = 4;
      local_48[3] = local_48[local_60] + *(float *)(iVar6 + param_1);
      local_38 = *(float *)(iVar6 + 4 + param_1) - fVar1;
      local_34[1] = *(float *)(iVar6 + -4 + param_1) - fVar1;
      local_34[2] = local_48[3];
      local_34[3] = local_38;
      local_20 = local_48[2];
      local_1c = local_48[3];
      local_18 = fVar1 + *(float *)(iVar6 + 4 + param_1);
      local_8 = local_18;
      iVar4 = 0x8c;
      local_10 = local_34[1];
      local_c = local_48[3];
      pfVar7 = pfVar3;
      while( true ) {
        do {
          fVar2 = *pfVar3;
          fVar8 = *(float *)(iVar4 + -0x10 + param_1);
          if (fVar2 <= fVar8) {
            fVar8 = fVar2;
          }
          *(float *)(iVar4 + -0x10 + param_1) = fVar8;
          fVar8 = *(float *)(iVar4 + param_1);
          if (*(float *)(iVar4 + param_1) <= fVar2) {
            fVar8 = fVar2;
          }
          *(float *)(iVar4 + param_1) = fVar8;
          iVar4 = iVar4 + 4;
          pfVar3 = pfVar3 + 1;
        } while (iVar4 < 0x98);
        pfVar3 = pfVar7 + 4;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) break;
        iVar4 = 0x8c;
        pfVar7 = pfVar3;
      }
      local_60 = local_60 + 1;
    } while (local_60 < 2);
    iVar6 = iVar6 + 0xc;
  } while (iVar6 < 0x34);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x94);
  return;
}
