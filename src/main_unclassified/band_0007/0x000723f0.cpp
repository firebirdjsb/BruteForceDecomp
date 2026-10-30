/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF96ECE857351A27D7B6BD5D93FBD39907B92242A0F13243D4C044FDAD4D4634
 * Entry: 0x000723f0, Ghidra index: 1279, label: FUN_000723f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040219c;
extern uint32_t DAT_00414da0;
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_0048a824;
extern uint32_t PTR_DAT_004021a0;
undefined4 FUN_000723f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_4;
  
  puVar4 = param_1;
  puVar5 = &DAT_0048a824;
  iVar10 = 4;
  do {
    iVar9 = 0x200;
    do {
      puVar5[-2] = 0x5000;
      puVar5[-1] = 0;
      *puVar5 = 0;
      puVar5[1] = 0x5000;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0x5000;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0x5000;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0x5000;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0x5000;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0x5000;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0x5000;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0x16] = 0x5000;
      puVar5[0x17] = 0;
      puVar5[0x18] = 0;
      puVar5 = puVar5 + 0x1b;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (DAT_0040219c != 0) {
    puVar11 = (undefined4 *)PTR_DAT_004021a0;
    for (uVar7 = DAT_0040219c + 0x1fU >> 5; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  param_1 = (undefined4 *)0x0;
  piVar6 = puVar4 + 0xe;
  do {
    if (((-1 < (int)param_1) && ((int)param_1 < 7)) && (iVar10 = *piVar6, iVar10 != 0)) {
      if (-1 < (char)(*(char *)(iVar10 + 0x124) << 1)) {
        FUN_0006e850(1);
        puVar4[((int)(char)(*(char *)(iVar10 + 0x124) << 1) >> 1) + 9] = 0;
        *(byte *)(iVar10 + 0x124) = *(byte *)(iVar10 + 0x124) | 0x7f;
        *(undefined4 *)(iVar10 + 0x120) = 0;
      }
      if (*piVar6 != 0) {
        FUN_0008f6e0();
        *piVar6 = 0;
      }
    }
    param_1 = (undefined4 *)((int)param_1 + 1);
    piVar6 = piVar6 + 2;
  } while ((int)param_1 < 7);
  (**(code **)(*DAT_00469b54 + 0x1c))(&local_3c,&local_38);
  puVar4[5] = 0;
  puVar4[7] = unaff_EBP;
  puVar4[6] = 0;
  puVar4[8] = unaff_EBX;
  puVar11 = (undefined4 *)puVar4[3];
  if (puVar11 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar11;
  }
  FUN_001298b0(&piStack_4,uVar8,puVar11);
  puVar4[1] = puVar4[3];
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  iVar10 = FUN_002ea01d(0x144);
  if (iVar10 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0006bb60(0,*puVar4);
  }
  piVar2 = (int *)puVar4[0x1c];
  piVar1 = puVar4 + 0x1b;
  if (piVar2 != piVar6) {
    if ((piVar2 != (int *)0x0) && (((uint)piVar2 & 1) == 0)) {
      puVar4[0x1c] = 0;
      iVar10 = *(int *)(&DAT_00414da0 + ((int)piVar2 * 0x19660d + 0x3c6ef35fU >> 0x15) * 4);
      piVar2 = (int *)(&DAT_00414da0 + ((int)piVar2 * 0x19660d + 0x3c6ef35fU >> 0x15) * 4);
      while (iVar10 != 0) {
        piVar3 = (int *)*piVar2;
        if (piVar3 == piVar1) {
          *piVar2 = *(int *)*piVar2;
          break;
        }
        piVar2 = piVar3;
        iVar10 = *piVar3;
      }
    }
    puVar4[0x1c] = piVar6;
    if ((piVar6 != (int *)0x0) && (((uint)piVar6 & 1) == 0)) {
      uVar7 = (int)piVar6 * 0x19660d + 0x3c6ef35fU >> 0x15;
      *piVar1 = *(int *)(&DAT_00414da0 + uVar7 * 4);
      *(int **)(&DAT_00414da0 + uVar7 * 4) = piVar1;
    }
  }
  iVar10 = puVar4[3];
  piStack_4 = piVar6;
  iVar9 = FUN_000ff730(puVar4 + 2,iVar10,*(undefined4 *)(iVar10 + 4),&piStack_4);
  FUN_000b2a50();
  *(int *)(iVar10 + 4) = iVar9;
  **(int **)(iVar9 + 4) = iVar9;
  piStack_4 = (int *)0x41f00000;
  local_3c = 0x41a00000;
  uStack_10 = 0x41f00000;
  uStack_c = 0x41a00000;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_18 = 0x3f800000;
  uStack_28 = 0x3f800000;
  local_38 = 0x3f800000;
  uStack_14 = 0;
  (**(code **)(*piVar6 + 0x44))(&local_38);
  iVar10 = piVar6[0x14];
  *(undefined4 *)(iVar10 + 0x1c) = 0x3ba3d70a;
  fVar12 = ((float10)*(float *)(iVar10 + 0x14) + (float10)*(float *)(iVar10 + 0x14)) * (float10)0.5;
  *(float *)(iVar10 + 0x14) = (float)fVar12;
  fVar12 = (float10)fptan(fVar12 * (float10)0.017453292);
  *(float *)(iVar10 + 0x24) = (float)fVar12;
  FUN_0006ad00();
  *(float *)(iVar10 + 0x2c) = *(float *)(iVar10 + 0x24) / *(float *)(iVar10 + 0x28);
  fVar12 = ((float10)*(float *)(iVar10 + 0x18) + (float10)*(float *)(iVar10 + 0x18)) * (float10)0.5;
  *(float *)(iVar10 + 0x18) = (float)fVar12;
  fVar12 = (float10)fptan(fVar12 * (float10)0.017453292);
  *(float *)(iVar10 + 0x28) = (float)fVar12;
  FUN_0006ad90();
  *(float *)(iVar10 + 0x2c) = *(float *)(iVar10 + 0x24) / *(float *)(iVar10 + 0x28);
  FUN_0006c840(piVar6);
  *(undefined4 *)(piVar6[0x14] + 0x20) = 0x43fa0000;
  FUN_0006c840(piVar6);
  FUN_0006c840(piVar6);
  piVar6[0x15] = 2;
  piVar6[1] = -0x71c98ee;
  return 1;
}
