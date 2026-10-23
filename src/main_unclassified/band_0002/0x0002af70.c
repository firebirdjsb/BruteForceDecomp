/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 685C80028568A3DB3ED6A554F19F61EFE27DD6AF52930D16749581A1DE30331F
 * Entry: 0x0002af70, Ghidra index: 288, label: FUN_0002af70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_003a4f68;
undefined4 FUN_0002af70(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int **ppiVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  int *piStack_54;
  float fStack_50;
  int *piStack_48;
  int iStack_44;
  uint local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  byte bStack_24;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  int *piStack_c;
  
  piVar10 = (int *)0x0;
  local_40 = 0;
  local_38 = in_ECX;
  piStack_48 = (int *)(**(code **)(*(int *)(in_ECX + -0x40) + 0x24))();
  if (*(char *)(in_ECX + 0x940) != '\0') {
    return 1;
  }
  FUN_0004e8f0();
  fStack_50 = 3.4028235e+38;
  piStack_54 = (int *)0x0;
  iVar5 = FUN_00055aa0();
  if (*(int *)(iVar5 + 0x14) == 0) {
    iVar5 = *(int *)(*(int *)(in_ECX + -0x30) + 8);
    puVar7 = *(undefined4 **)(iVar5 + 0x1d4);
    if (puVar7 != (undefined4 *)0x0) {
      piVar10 = (int *)*puVar7;
    }
    if (piVar10 == *(int **)(iVar5 + 0x1d4)) {
      return 0;
    }
    do {
      piVar1 = (int *)piVar10[3];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piStack_48 + 0xc))();
        (**(code **)(piVar1[2] + 4))();
        fVar11 = (float10)FUN_000394b0();
        if (fVar11 < (float10)fStack_50) {
          fStack_50 = (float)fVar11;
          piStack_54 = piVar1;
        }
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)*(int *)(*(int *)(*(int *)(in_ECX + -0x30) + 8) + 0x1d4));
  }
  else {
    iVar5 = FUN_00055aa0();
    piStack_54 = *(int **)(iVar5 + 0x14);
    iVar5 = (**(code **)(*piStack_54 + 0x3c))();
    if ((iVar5 != 0xb) && (iVar5 = (**(code **)(*piStack_54 + 0x3c))(), iVar5 != 0xc)) {
      return 0;
    }
  }
  if (piStack_54 != (int *)0x0) {
    iVar5 = *(int *)(*(int *)(in_ECX + -0x30) + 8);
    puVar7 = *(undefined4 **)(iVar5 + 0x1d4);
    fStack_50 = -NAN;
    if (puVar7 == (undefined4 *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)*puVar7;
    }
    iVar9 = in_ECX;
    if (piVar10 != *(int **)(iVar5 + 0x1d4)) {
LAB_0002b0a8:
      piVar1 = (int *)piVar10[3];
      if (((piVar1 == (int *)0x0) || (iVar5 = (**(code **)(*piVar1 + 0x3c))(), iVar5 != 0xc)) ||
         (((piVar1[9] ^ piStack_54[9]) & 0xfffU) != 0)) goto LAB_0002b0cd;
      ppuStack_20 = &PTR_FUN_003a4f68;
      piStack_c = (int *)0x0;
      puVar7 = (undefined4 *)(**(code **)(piVar1[2] + 4))();
      uStack_18 = puVar7[1];
      iStack_14 = puVar7[2];
      uStack_1c = *puVar7;
      if (piStack_c != piVar1) {
        FUN_0008f6a0(piVar1);
      }
      FUN_00038320();
      ppuStack_20 = &PTR_FUN_003a4f68;
      if (piStack_c != (int *)0x0) {
        FUN_0008f6e0();
      }
      fStack_50 = 0.0;
      iVar9 = local_38;
      for (piVar10 = (int *)piVar1[0xf]; (piVar10 != (int *)0x0 && (piVar10 != piVar1));
          piVar10 = (int *)piVar10[0xf]) {
        ppuStack_20 = &PTR_FUN_003a4f68;
        piStack_c = (int *)0x0;
        local_38 = iVar9;
        if (piVar10 == (int *)0x0) {
          iStack_14 = 0;
          uStack_18 = 0;
          uStack_1c = 0;
        }
        else {
          puVar7 = (undefined4 *)(**(code **)(piVar10[2] + 4))();
          uStack_18 = puVar7[1];
          uStack_3c = puVar7[2];
          uStack_1c = *puVar7;
          iStack_14 = uStack_3c;
          if (piStack_c != piVar10) {
            if (piStack_c != (int *)0x0) {
              FUN_0008f6e0();
            }
            piStack_c = piVar10;
            if (((uint)piVar10 & 1) == 0) {
              uVar6 = (int)piVar10 * 0x19660d + 0x3c6ef35fU >> 0x15;
              uStack_10 = *(uint *)(&DAT_00414da0 + uVar6 * 4);
              *(uint **)(&DAT_00414da0 + uVar6 * 4) = &uStack_10;
            }
          }
        }
        FUN_00038320();
        ppuStack_20 = &PTR_FUN_003a4f68;
        if ((piStack_c != (int *)0x0) && (((uint)piStack_c & 1) == 0)) {
          iVar5 = (int)piStack_c * 0x19660d;
          piStack_c = (int *)0x0;
          uVar6 = *(uint *)(&DAT_00414da0 + (iVar5 + 0x3c6ef35fU >> 0x15) * 4);
          puVar3 = (uint *)(&DAT_00414da0 + (iVar5 + 0x3c6ef35fU >> 0x15) * 4);
          while (uVar6 != 0) {
            puVar2 = (uint *)*puVar3;
            if (puVar2 == &uStack_10) {
              *puVar3 = *(uint *)*puVar3;
              break;
            }
            puVar3 = puVar2;
            uVar6 = *puVar2;
          }
        }
        if (piVar10 == piStack_54) {
          if (*(int *)(in_ECX + 0x91c) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (*(int *)(in_ECX + 0x920) - *(int *)(in_ECX + 0x91c)) / 0x18;
          }
          fStack_50 = (float)(iVar5 + -1);
        }
        iVar9 = local_38;
      }
    }
LAB_0002b29e:
    if ((*(int *)(in_ECX + 0x91c) == 0) ||
       ((*(int *)(in_ECX + 0x920) - *(int *)(in_ECX + 0x91c)) / 0x18 < 2)) {
      FUN_0004e8f0();
    }
    else {
      if ((float)*(int *)(in_ECX + 0x928) != fStack_50) {
        *(float *)(in_ECX + 0x928) = fStack_50;
        *(undefined4 *)(in_ECX + 0x930) = 0x7f7fffff;
        *(undefined4 *)(in_ECX + 0x93c) = 0;
      }
      iVar5 = *(int *)(*(int *)(in_ECX + 0x91c) + 0x14 + *(int *)(in_ECX + 0x928) * 0x18);
      if (iVar5 == 0) {
        puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x91c) + *(int *)(in_ECX + 0x928) * 0x18 + 4);
      }
      else {
        puVar7 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 8) + 4))();
      }
      uStack_3c = puVar7[2];
      local_38 = puVar7[1];
      uStack_34 = *puVar7;
      uStack_30 = local_38;
      uStack_2c = uStack_3c;
      iVar5 = (**(code **)*piStack_48)();
      iStack_14 = FUN_0004c2e0(*(undefined4 *)(iVar5 + 8),&uStack_34);
      if (iStack_14 != 0) {
        uStack_18 = 0;
        uStack_1c = 0;
        ppuStack_20 = (undefined **)0x0;
        uStack_10 = uStack_10 & 0xfffffffc;
        FUN_0004e8f0();
        if (*(int *)(iVar9 + -0x38) == 0) {
          ppiVar8 = (int **)(iVar9 + -0x34);
        }
        else {
          local_40 = 1;
          iStack_44 = 0;
          ppiVar8 = &piStack_48;
        }
        piVar10 = ppiVar8[1];
        if (((local_40 & 1) != 0) && (iStack_44 != 0)) {
          FUN_0008f6e0();
        }
        piVar10[0x94] = piVar10[0x94] | 1;
        iVar5 = (**(code **)(*piVar10 + 0x40))();
        iStack_28 = piVar10[0x93];
        local_38 = *(undefined4 *)(iVar5 + 0x28);
        uStack_3c = *(undefined4 *)(iVar5 + 0x2c);
        uStack_34 = *(undefined4 *)(iVar5 + 0x24);
        bStack_24 = bStack_24 & 0xfd | 1;
        uStack_30 = local_38;
        uStack_2c = uStack_3c;
        cVar4 = FUN_000416a0(iVar9 + 0x8f0,1);
        if (cVar4 != '\0') {
          FUN_00025730(iVar9 + 0x8f0,1,0);
          *(undefined4 *)(iVar9 + 0x1a8) = 0x40800000;
          *(undefined4 *)(iVar9 + 0x1a0) = 0x40800000;
          *(byte *)(iVar9 + 0x1a4) = *(byte *)(iVar9 + 0x1a4) & 0xf9 | 1;
          return 1;
        }
      }
    }
  }
  return 0;
LAB_0002b0cd:
  piVar10 = (int *)*piVar10;
  if (piVar10 == (int *)*(int *)(*(int *)(*(int *)(in_ECX + -0x30) + 8) + 0x1d4)) goto LAB_0002b29e;
  goto LAB_0002b0a8;
}
