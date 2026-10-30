/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A43E3EA44F944AFA4EACBBF2A8A8CCC463F43ABCA2CD29355FA64E670450B7A4
 * Entry: 0x001525f0, Ghidra index: 4421, label: FUN_001525f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699bc;
extern uint32_t _DAT_0041f2e8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001525f0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00152200(param_1);
  iVar1 = *(int *)(param_2 + 0x204);
  local_24 = *(undefined4 *)(param_1 + 0x94);
  local_28 = *(undefined4 *)(param_1 + 0x90);
  local_2c = *(undefined4 *)(param_1 + 0x8c);
  iVar2 = *(int *)(iVar1 + 0x3c);
  *(int *)(iVar1 + 0x3c) = iVar2 + 1;
  DAT_004699bc = 0;
  _DAT_0041f2e8 = 0;
  FUN_000d1680(&local_2c);
  if (local_18 != 0) {
    do {
      for (puVar8 = *(undefined4 **)(local_18 + 0x1c); puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)*puVar8) {
        piVar3 = *(int **)((uint)*(ushort *)(puVar8 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if ((((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x26) < '\0')) &&
            (iVar6 = piVar3[6], piVar3[6] = iVar2, iVar6 != iVar2)) &&
           (((param_3[0x44] & 1 << ((byte)*(undefined4 *)(piVar3[3] + 4) & 0x1f)) == 0 &&
            (cVar4 = (**(code **)(*param_3 + 4))(piVar3), cVar4 != '\0')))) {
          (**(code **)(*piVar3 + 0x10c))(param_1);
        }
      }
      iVar6 = *(int *)(local_18 + 8);
      piVar3 = (int *)(local_18 + 8);
      if (iVar6 == 0) {
        FUN_001f35b0(0x3f800000);
        iVar6 = *piVar3;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 2)) {
          *(int *)(param_1 + 0x9c) = iVar6;
          if (*(int *)(iVar6 + 0x3c) == 0) {
            uVar5 = FUN_002bbeb0();
            *(undefined4 *)(iVar6 + 0x3c) = uVar5;
          }
          if ((*(char *)(iVar6 + 0x70) < '\b') &&
             (*(int *)(*(int *)(iVar6 + 0x3c) + 0x60) < *(int *)(*(int *)(iVar6 + 0x14) + 0x120))) {
            FUN_002bbf70();
          }
          *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar6 + 0x3c);
          FUN_00151ac0();
          iVar6 = *(int *)(*(int *)(iVar6 + 0x7c) + 4);
LAB_00152832:
          FUN_00151a00(*(int *)(iVar6 + 0x20) + iVar6);
        }
      }
      else if (*(int *)(iVar6 + 4) == 2) {
        *(int *)(param_1 + 0x9c) = iVar6;
        if (*(int *)(iVar6 + 0x3c) == 0) {
          uVar5 = FUN_002bbeb0();
          *(undefined4 *)(iVar6 + 0x3c) = uVar5;
        }
        if ((*(char *)(iVar6 + 0x70) < '\b') &&
           (*(int *)(*(int *)(iVar6 + 0x3c) + 0x60) < *(int *)(*(int *)(iVar6 + 0x14) + 0x120))) {
          FUN_002bbf70();
        }
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar6 + 0x3c);
        FUN_00151ac0();
        iVar6 = *(int *)(*(int *)(iVar6 + 0x7c) + 4);
        goto LAB_00152832;
      }
      iVar6 = iStack_14;
      if ((iStack_14 < iStack_8) ||
         (iStack_10 = iStack_10 + 1, iVar6 = iStack_c, iStack_10 < iStack_4)) {
        iStack_14 = iVar6 + 1;
        local_18 = (**(int **)(iStack_1c + 0x20) * iStack_10 + iVar6) * 0x40 +
                   *(int *)(iStack_1c + 0x18);
      }
      else {
        iStack_10 = iStack_4;
        local_18 = 0;
      }
    } while (local_18 != 0);
    local_18 = 0;
  }
  if (local_20 != '\0') {
    for (puVar8 = *(undefined4 **)(iVar1 + 0x2c); puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)*puVar8) {
      piVar3 = *(int **)((uint)*(ushort *)(puVar8 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
      if ((((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x26) < '\0')) &&
          (iVar6 = piVar3[6], piVar3[6] = iVar2, iVar6 != iVar2)) &&
         (((param_3[0x44] & 1 << ((byte)*(undefined4 *)(piVar3[3] + 4) & 0x1f)) == 0 &&
          (cVar4 = (**(code **)(*param_3 + 4))(piVar3), cVar4 != '\0')))) {
        (**(code **)(*piVar3 + 0x10c))(param_1);
      }
    }
  }
  pfVar7 = *(float **)(param_2 + 0x104);
  for (puVar8 = *(undefined4 **)(*(int *)(param_2 + 0xa70) + 0x104);
      puVar8 != *(undefined4 **)(*(int *)(param_2 + 0xa70) + 0x108); puVar8 = puVar8 + 0x11) {
    iVar1 = puVar8[0xf];
    if ((((iVar1 != 0) && ((param_3[0x43] & 1 << ((byte)*puVar8 & 0x1f)) == 0)) &&
        ((*pfVar7 < *(float *)(param_1 + 0x48) != (*pfVar7 == *(float *)(param_1 + 0x48)) &&
         (((*(float *)(param_1 + 0x44) < pfVar7[1] != (*(float *)(param_1 + 0x44) == pfVar7[1]) &&
           (pfVar7[2] < *(float *)(param_1 + 0x50) != (pfVar7[2] == *(float *)(param_1 + 0x50)))) &&
          (*(float *)(param_1 + 0x4c) < pfVar7[3] != (*(float *)(param_1 + 0x4c) == pfVar7[3])))))))
       && (((pfVar7[4] < *(float *)(param_1 + 0x58) != (pfVar7[4] == *(float *)(param_1 + 0x58)) &&
            (*(float *)(param_1 + 0x54) < pfVar7[5] != (*(float *)(param_1 + 0x54) == pfVar7[5])))
           && (*(int *)(iVar1 + 4) == 2)))) {
      *(int *)(param_1 + 0x9c) = iVar1;
      if (*(int *)(iVar1 + 0x3c) == 0) {
        uVar5 = FUN_002bbeb0();
        *(undefined4 *)(iVar1 + 0x3c) = uVar5;
      }
      if ((*(char *)(iVar1 + 0x70) < '\b') &&
         (*(int *)(*(int *)(iVar1 + 0x3c) + 0x60) < *(int *)(*(int *)(iVar1 + 0x14) + 0x120))) {
        FUN_002bbf70();
      }
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x3c);
      FUN_00151ac0();
      iVar1 = *(int *)(*(int *)(iVar1 + 0x7c) + 4);
      FUN_00151a00(*(int *)(iVar1 + 0x20) + iVar1);
    }
    pfVar7 = pfVar7 + 6;
  }
  return DAT_004699bc;
}
