/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B48FBE6CA86D48DB255626DB74BFBF14A12B434C627A93288FDB54B32D9D0EE7
 * Entry: 0x00346499, Ghidra index: 12832, label: FUN_00346499
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00346499(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  undefined4 local_8c [18];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_14;
  undefined1 *local_10;
  undefined8 *local_c;
  undefined4 *local_8;
  
  local_14 = local_8c;
  local_1c = 0;
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
    return -1;
  }
  if (param_2 == (uint *)0x0) {
    local_c = (undefined8 *)0x0;
  }
  else {
    local_c = (undefined8 *)(*param_2 & 0xffff);
  }
  if (param_3 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *param_3 & 0xffff;
  }
  local_24 = uVar4 + (int)local_c;
  if (param_4 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *param_4 & 0xffff;
  }
  param_1 = uVar4 + local_24;
  if (param_1 == 0) {
    iVar12 = 0x2726;
    goto LAB_00346521;
  }
  if (param_1 == 1) {
    local_10 = local_28;
    local_8 = &local_44;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
LAB_003465a3:
    puVar3 = local_c;
    iVar12 = FUN_0034594b(param_2,local_8,0,0x1a800);
    if (iVar12 == 0) {
      iVar12 = FUN_0034594b(param_3,local_8,puVar3,0x5000);
      if (iVar12 == 0) {
        iVar12 = FUN_0034594b(param_4,local_8,local_24,0x10000);
        if (iVar12 == 0) {
          if (param_5 == (int *)0x0) {
            local_c = (undefined8 *)0x0;
LAB_00346646:
            iVar12 = 0;
            param_5 = (int *)0x0;
            if (param_1 != 0) {
              piVar8 = local_8 + 4;
              do {
                iVar6 = piVar8[-1];
                if (*piVar8 != 0) {
                  iVar5 = FUN_00345a29(iVar6,*piVar8,0xffffffff);
                  if (iVar5 != 0) break;
                  *(int *)(local_10 + iVar12 * 4) = iVar6 + 0x10;
                  iVar12 = iVar12 + 1;
                }
                param_5 = (int *)((int)param_5 + 1);
                piVar8 = piVar8 + 5;
              } while ((int)param_5 < param_1);
            }
            if (param_5 == (int *)param_1) {
              if (3 < iVar12) {
                local_14 = (undefined4 *)ExAllocatePoolWithTag(iVar12 * 0x18,0x6854454e);
                if (local_14 != (undefined4 *)0x0) {
                  puVar9 = local_14;
                  for (iVar6 = (iVar12 * 3 & 0x1fffffffU) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar9 = 0;
                    puVar9 = puVar9 + 1;
                  }
                  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *(undefined1 *)puVar9 = 0;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                  }
                }
                if (local_14 == (undefined4 *)0x0) goto LAB_00346789;
              }
              iVar6 = KeWaitForMultipleObjects(iVar12,local_10,1,6,1,0,local_c,local_14);
              if (((iVar6 < 0) || (iVar12 <= iVar6)) && (iVar6 != 0x102)) {
                iVar12 = 0x271e;
                goto LAB_0034678e;
              }
            }
          }
          else {
            local_c = &local_30;
            lVar11 = __allmul(*param_5,*param_5 >> 0x1f,0xfff0bdc0,0xffffffff);
            local_30 = __allmul(lVar11 - param_5[1],10,0);
            if (local_30 != 0) goto LAB_00346646;
          }
          if (param_2 != (uint *)0x0) {
            *param_2 = 0;
          }
          if (param_3 != (uint *)0x0) {
            *param_3 = 0;
          }
          if (param_4 != (uint *)0x0) {
            *param_4 = 0;
          }
          local_1c = 0;
          if (param_1 != 0) {
            piVar8 = local_8 + 1;
            param_2 = (uint *)param_1;
            do {
              uVar4 = 0;
              iVar12 = FUN_00345a29(piVar8[2],piVar8[1],0);
              if (iVar12 != 0) {
                puVar1 = (uint *)*piVar8;
                uVar2 = *puVar1;
                bVar10 = uVar2 == 0;
                if (uVar2 != 0) {
                  puVar7 = puVar1;
                  do {
                    puVar7 = puVar7 + 1;
                    if (*puVar7 == piVar8[-1]) break;
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < uVar2);
                  bVar10 = uVar4 == uVar2;
                }
                if ((bVar10) && (uVar2 < 0x40)) {
                  puVar1[uVar4 + 1] = piVar8[-1];
                  *(int *)*piVar8 = *(int *)*piVar8 + 1;
                }
                local_1c = local_1c + 1;
              }
              piVar8 = piVar8 + 5;
              param_2 = (uint *)((int)param_2 + -1);
            } while (param_2 != (uint *)0x0);
          }
          iVar12 = 0;
        }
      }
    }
  }
  else {
    iVar12 = param_1 * 5;
    local_20 = (undefined4 *)ExAllocatePoolWithTag(param_1 * 0x14,0x6854454e);
    puVar9 = local_20;
    if (local_20 != (undefined4 *)0x0) {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    local_8 = local_20;
    local_10 = (undefined1 *)ExAllocatePoolWithTag(param_1 * 4,0x6854454e);
    if ((local_20 != (undefined4 *)0x0) && (local_10 != (undefined1 *)0x0)) goto LAB_003465a3;
    param_1 = 0;
LAB_00346789:
    iVar12 = 0x2747;
  }
LAB_0034678e:
  if (param_1 != 0) {
    piVar8 = local_8 + 4;
    do {
      iVar6 = piVar8[-1];
      if ((iVar6 != 0) && (*piVar8 != 0)) {
        FUN_00345541(0xfffe07ff,0);
        *(undefined4 *)(iVar6 + 8) = 0x2b434f53;
      }
      piVar8 = piVar8 + 5;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  if ((local_14 != local_8c) && (local_14 != (undefined4 *)0x0)) {
    ExFreePool(local_14);
  }
  if ((local_8 != &local_44) && (local_8 != (undefined4 *)0x0)) {
    ExFreePool(local_8);
  }
  if ((local_10 != local_28) && (local_10 != (undefined1 *)0x0)) {
    ExFreePool(local_10);
  }
  if (iVar12 == 0) {
    return local_1c;
  }
LAB_00346521:
  XAPILIB__SetLastError(iVar12);
  return -1;
}
