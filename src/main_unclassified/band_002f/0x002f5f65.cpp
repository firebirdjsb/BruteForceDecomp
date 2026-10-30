/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA5565786724893957489F8544F38AD69DA69DDBFED2E2B752A87A7035FA044E
 * Entry: 0x002f5f65, Ghidra index: 10911, label: FUN_002f5f65
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort * FUN_002f5f65(int param_1,ushort *param_2,uint *param_3,ushort *param_4)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  int *piVar9;
  bool bVar10;
  int *local_c;
  int *local_8;
  
  puVar4 = param_3;
  iVar2 = (int)param_2;
  local_8 = (int *)0x0;
  piVar1 = *(int **)((int)param_2 + 0x38);
  if (piVar1 != (int *)0x0) {
    local_c = (int *)((int)param_2 + 0x38);
    do {
      piVar9 = piVar1;
      if ((*param_3 <= (uint)piVar9[2]) &&
         ((param_4 == (ushort *)0x0 || ((ushort *)piVar9[1] == param_4)))) {
        param_2 = (ushort *)piVar9[1];
        if (*(code **)(param_1 + 0x584) == (code *)0x0) {
          iVar5 = NtAllocateVirtualMemory(&param_2,0,param_3,0x1000,4);
        }
        else {
          iVar5 = (**(code **)(param_1 + 0x584))(param_1,&param_2,param_3);
        }
        puVar3 = param_2;
        if (iVar5 < 0) {
          return (ushort *)0x0;
        }
        *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) - (*puVar4 >> 0xc);
        if (*(int *)(iVar2 + 0x1c) == piVar9[2]) {
          *(undefined4 *)(iVar2 + 0x1c) = 0;
        }
        puVar8 = *(ushort **)(iVar2 + 0x40);
        if (((*(byte *)((int)puVar8 + 5) & 0x10) != 0) &&
           (puVar8 + (uint)*puVar8 * 8 == (ushort *)piVar9[1])) goto LAB_002f6057;
        if (local_8 == (int *)0x0) {
          puVar8 = *(ushort **)(iVar2 + 0x28);
        }
        else {
          puVar8 = (ushort *)(local_8[2] + local_8[1]);
        }
        if ((*(byte *)((int)puVar8 + 5) & 0x10) != 0) goto LAB_002f6057;
        goto LAB_002f602e;
      }
      piVar1 = (int *)*piVar9;
      local_c = piVar9;
      local_8 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
  return (ushort *)0x0;
LAB_002f602e:
  param_4 = puVar8;
  puVar8 = param_4 + (uint)*param_4 * 8;
  if ((*(ushort **)(iVar2 + 0x2c) <= puVar8) || (*puVar8 == 0)) {
    bVar10 = puVar8 != param_2;
    puVar8 = param_4;
    if (bVar10) {
      return (ushort *)0x0;
    }
    goto LAB_002f6057;
  }
  if ((*(byte *)((int)puVar8 + 5) & 0x10) != 0) {
LAB_002f6057:
    *(byte *)((int)puVar8 + 5) = *(byte *)((int)puVar8 + 5) & 0xef;
    piVar9[1] = piVar9[1] + *param_3;
    piVar1 = piVar9 + 2;
    *piVar1 = *piVar1 - *param_3;
    if (*piVar1 == 0) {
      if (piVar9[1] == *(int *)(iVar2 + 0x2c)) {
        *(undefined1 *)((int)param_2 + 5) = 0x10;
        puVar6 = param_2;
      }
      else {
        *(undefined1 *)((int)param_2 + 5) = 0;
        puVar6 = *(ushort **)(iVar2 + 0x28);
      }
      *(ushort **)(iVar2 + 0x40) = puVar6;
      *local_c = *piVar9;
      FUN_002f5eb1(iVar2,piVar9);
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + -1;
    }
    else {
      *(undefined1 *)((int)param_2 + 5) = 0x10;
      *(ushort **)(iVar2 + 0x40) = param_2;
    }
    *(char *)(puVar3 + 2) = (char)puVar8[2];
    *puVar3 = (ushort)(*param_3 >> 4);
    puVar3[1] = *puVar8;
    if ((*(byte *)((int)puVar3 + 5) & 0x10) == 0) {
      puVar3[(uint)*puVar3 * 8 + 1] = *puVar3;
    }
    if (*(int *)(iVar2 + 0x1c) == 0) {
      for (puVar7 = *(undefined4 **)(iVar2 + 0x38); puVar7 != (undefined4 *)0x0;
          puVar7 = (undefined4 *)*puVar7) {
        if (*(uint *)(iVar2 + 0x1c) <= (uint)puVar7[2]) {
          *(undefined4 *)(iVar2 + 0x1c) = puVar7[2];
        }
      }
    }
    return puVar3;
  }
  goto LAB_002f602e;
}
