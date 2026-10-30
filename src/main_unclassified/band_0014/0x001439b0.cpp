/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CCA80A0DAF77CE611B24679860402EA3E59246CCB95142F4CDFD36DAAD8952F
 * Entry: 0x001439b0, Ghidra index: 4146, label: FUN_001439b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001439b0(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_90;
  int local_8c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    local_8c = 0;
  }
  else {
    local_8c = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
  }
  if ((*(char *)(param_1 + 0x54) == '\0') || (*(float *)(param_1 + 0x50) <= 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar4 = FUN_001438d0(param_1,param_2,param_1 + 0x30);
  if (cVar4 == '\0') {
    if (!bVar3) goto LAB_00143cf3;
    if (*(int *)(param_1 + 4) != 0) goto LAB_00143a24;
  }
  else {
LAB_00143a24:
    iVar9 = *(int *)(param_1 + 0x1c);
    if ((*(int *)(iVar9 + 4) != 0) &&
       (iVar2 = (*(int *)(iVar9 + 8) - *(int *)(iVar9 + 4)) / 0x1c, iVar2 != 0)) {
      FUN_001449c0(*(undefined4 *)(iVar9 + 0x14),*(undefined4 *)(iVar9 + 0x18),
                   *(undefined4 *)(param_1 + 0x24),iVar2);
      if ((bVar3) && (*(int *)(param_1 + 4) != 0)) {
        FUN_0017aa30(*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x44),param_1 + 0x30);
      }
      pfVar7 = *(float **)(param_1 + 0x34);
      piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 8);
      do {
        while( true ) {
          if (pfVar7 == *(float **)(param_1 + 0x38)) {
            FUN_00143820(param_1 + 0x20);
            return 1;
          }
          fVar1 = *pfVar7;
          if ((1.0 <= fVar1) || (0.0 <= fVar1)) break;
LAB_00143cc8:
          pfVar7 = pfVar7 + 1;
          piVar5 = piVar5 + 7;
        }
        if (fVar1 < 1.0) {
          if (fVar1 == 0.0) goto LAB_00143cc8;
        }
        else {
          fVar1 = 1.0;
        }
        fVar1 = fVar1 * (float)piVar5[4];
        iVar9 = 0;
        local_90 = 0;
        if (local_8c < 1) goto LAB_00143cc8;
        do {
          pfVar8 = (float *)(*piVar5 + iVar9);
          puVar10 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar9);
          cVar4 = FUN_00144e50(0x3727c5ac);
          if (cVar4 == '\0') {
            if (*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 4 + local_90 * 8) == 0) {
              local_24 = pfVar8[2];
              local_18 = puVar10[1];
              local_1c = *puVar10;
              local_14 = puVar10[2];
              local_20 = puVar10[3];
              local_2c = *pfVar8;
              local_28 = pfVar8[1];
              local_30 = pfVar8[3];
              puVar6 = (undefined4 *)FUN_00233b10(local_10,&local_20,&local_30,fVar1);
              local_34 = puVar6[3];
              local_38 = puVar6[2];
              local_3c = puVar6[1];
              puVar10[3] = *puVar6;
              *puVar10 = local_3c;
              puVar10[1] = local_38;
              puVar10[2] = local_34;
            }
            else {
              local_50 = *pfVar8 * fVar1;
              local_4c = pfVar8[1] * fVar1;
              local_48 = pfVar8[2] * fVar1;
              local_44 = pfVar8[3] * fVar1;
              FUN_00144e20(&local_50);
            }
          }
          local_90 = local_90 + 1;
          iVar9 = iVar9 + 0x10;
        } while (local_90 < local_8c);
        pfVar7 = pfVar7 + 1;
        piVar5 = piVar5 + 7;
      } while( true );
    }
  }
  if (bVar3) {
    return 0;
  }
LAB_00143cf3:
  FUN_00143570();
  return 0;
}
