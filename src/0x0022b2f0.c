/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55619925C50DDBAB0ACE34127D1269391D63F2AE7BEE794E107A7CA3A8B582B6
 * Entry: 0x0022b2f0, Ghidra index: 7685, label: FUN_0022b2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022b2f0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float local_20;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x354) != 0) &&
     ((*(int *)(param_1 + 0x358) - *(int *)(param_1 + 0x354)) / 0xc != 0)) {
    pfVar3 = *(float **)(param_1 + 0x358);
    pfVar8 = *(float **)(param_1 + 0x354);
    local_20 = 0.0;
    if (pfVar8 != pfVar3) {
      local_4 = 0;
      do {
        local_14 = (short)(int)(*pfVar8 * 65535.0);
        puVar4 = *(undefined4 **)(param_1 + 0x3d8);
        local_12 = (short)(int)(pfVar8[1] * 65535.0);
        puVar7 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          puVar7 = (undefined4 *)*puVar4;
        }
        if (puVar4 != puVar7) {
          iVar5 = puVar4[1];
          *(short *)(iVar5 + 0xc) = local_14;
          *(short *)(iVar5 + 0xe) = local_12;
        }
        fVar2 = pfVar8[2];
        local_8 = local_20;
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 3;
        if (*pfVar1 != 0.0) {
          if (((local_14 == 0) && (local_12 == 0)) && (pfVar8 == pfVar3)) break;
          iVar5 = *(int *)(param_1 + 0x3d8);
          local_10 = local_14;
          local_e = local_12;
          local_c = local_20 + fVar2;
          iVar6 = FUN_00129f40(param_1 + 0x3d4,iVar5,*(undefined4 *)(iVar5 + 4),&local_14);
          FUN_0027a650();
          *(int *)(iVar5 + 4) = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
        }
        local_20 = local_20 + fVar2;
      } while (pfVar8 != pfVar3);
    }
  }
  if ((*(int *)(param_1 + 0x368) != 0) &&
     ((*(int *)(param_1 + 0x36c) - *(int *)(param_1 + 0x368)) / 0xc != 0)) {
    pfVar3 = *(float **)(param_1 + 0x36c);
    pfVar8 = *(float **)(param_1 + 0x368);
    local_20 = 0.0;
    if (pfVar8 != pfVar3) {
      local_4 = 0;
      do {
        local_14 = (short)(int)(*pfVar8 * 65535.0);
        puVar4 = *(undefined4 **)(param_1 + 0x3e4);
        local_12 = (short)(int)(pfVar8[1] * 65535.0);
        puVar7 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          puVar7 = (undefined4 *)*puVar4;
        }
        if (puVar4 != puVar7) {
          iVar5 = puVar4[1];
          *(short *)(iVar5 + 0xc) = local_14;
          *(short *)(iVar5 + 0xe) = local_12;
        }
        fVar2 = pfVar8[2];
        local_8 = local_20;
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 3;
        if (*pfVar1 != 0.0) {
          if (((local_14 == 0) && (local_12 == 0)) && (pfVar8 == pfVar3)) {
            return;
          }
          iVar5 = *(int *)(param_1 + 0x3e4);
          local_10 = local_14;
          local_e = local_12;
          local_c = local_20 + fVar2;
          iVar6 = FUN_00129f40(param_1 + 0x3e0,iVar5,*(undefined4 *)(iVar5 + 4),&local_14);
          FUN_0027a650();
          *(int *)(iVar5 + 4) = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
        }
        local_20 = local_20 + fVar2;
      } while (pfVar8 != pfVar3);
    }
  }
  return;
}
