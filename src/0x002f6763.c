/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEEB1FA96F27E8B40F1DE3EAE163B6A9AC0A224287430A480CED65C570855EEB
 * Entry: 0x002f6763, Ghidra index: 10917, label: FUN_002f6763
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f6763(int param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *local_1c;
  ushort *local_14;
  uint local_10;
  uint local_c;
  ushort *local_8;
  
  puVar1 = param_2;
  if (*(int *)(param_1 + 0x584) != 0) {
    FUN_002f6395(param_1,param_2,param_3);
    return;
  }
  local_14 = (ushort *)0x0;
  iVar4 = *(int *)(param_1 + 0x60 + (uint)(byte)param_2[2] * 4);
  local_8 = (ushort *)((int)param_2 + 0xfffU & 0xfffff000);
  local_c = (int)local_8 - (int)param_2 >> 4;
  if ((short)local_c == 1) {
    local_8 = local_8 + 0x800;
    local_c = 0x101;
  }
  else if ((param_2[1] != 0) && (local_8 == param_2)) {
    local_14 = param_2 + (uint)param_2[1] * -8;
  }
  local_1c = (ushort *)0x0;
  puVar12 = param_2 + param_3 * 8;
  puVar10 = (ushort *)((uint)puVar12 & 0xfffff000);
  local_10 = (int)puVar12 - (int)puVar10 >> 4;
  if ((short)local_10 == 1) {
    local_10 = 0x101;
    puVar10 = puVar10 + -0x800;
  }
  else if (((short)local_10 == 0) && ((*(byte *)((int)param_2 + 5) & 0x10) == 0)) {
    local_1c = puVar12;
  }
  param_2 = puVar10;
  uVar11 = local_10 & 0xffff;
  puVar12 = puVar12 + uVar11 * -8;
  if (local_8 < param_2) {
    param_2 = (ushort *)((int)param_2 - (int)local_8);
  }
  else {
    param_2 = (ushort *)0x0;
  }
  if ((param_2 != (ushort *)0x0) && (iVar7 = FUN_002f5d91(iVar4), iVar7 != 0)) {
    iVar8 = NtFreeVirtualMemory(&local_8,&param_2,0x4000);
    FUN_002f5eb1(iVar4,iVar7);
    if (-1 < iVar8) {
      FUN_002f5ed2(iVar4,local_8,param_2);
      *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + ((uint)param_2 >> 0xc);
      uVar6 = (ushort)local_c;
      if (uVar6 == 0) {
        if (local_14 == (ushort *)0x0) {
          if ((*(ushort **)(iVar4 + 0x40) < local_8) ||
             ((ushort *)((int)param_2 + (int)local_8) <= *(ushort **)(iVar4 + 0x40)))
          goto LAB_002f696c;
          local_14 = *(ushort **)(iVar4 + 0x28);
        }
        else {
          *(byte *)((int)local_14 + 5) = *(byte *)((int)local_14 + 5) | 0x10;
        }
        *(ushort **)(iVar4 + 0x40) = local_14;
      }
      else {
        *(undefined1 *)((int)puVar1 + 5) = 0x10;
        *puVar1 = uVar6;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + (local_c & 0xffff);
        *(ushort **)(iVar4 + 0x40) = puVar1;
        *(byte *)((int)puVar1 + 5) = *(byte *)((int)puVar1 + 5) & 0xf8;
        if (uVar6 < 0x80) {
          piVar9 = (int *)(param_1 + 0x180 + (local_c & 0xffff) * 8);
          if ((int *)*piVar9 == piVar9) {
            pbVar2 = (byte *)((*puVar1 >> 3) + 0x160 + param_1);
            *pbVar2 = *pbVar2 | '\x01' << ((byte)*puVar1 & 7);
          }
        }
        else {
          for (piVar9 = *(int **)(param_1 + 0x180);
              ((int *)(param_1 + 0x180) != piVar9 && (*(ushort *)(piVar9 + -2) < uVar6));
              piVar9 = (int *)*piVar9) {
          }
        }
        piVar5 = (int *)piVar9[1];
        puVar10 = puVar1 + 4;
        *(int **)puVar10 = piVar9;
        *(int **)(puVar1 + 6) = piVar5;
        *piVar5 = (int)puVar10;
        piVar9[1] = (int)puVar10;
      }
LAB_002f696c:
      uVar6 = (ushort)local_10;
      if (uVar6 != 0) {
        puVar12[1] = 0;
        uVar3 = *(undefined1 *)(iVar4 + 4);
        *(undefined1 *)((int)puVar12 + 5) = 0;
        *(undefined1 *)(puVar12 + 2) = uVar3;
        *puVar12 = uVar6;
        puVar12[uVar11 * 8 + 1] = uVar6;
        *(byte *)((int)puVar12 + 5) = *(byte *)((int)puVar12 + 5) & 0xf8;
        if (uVar6 < 0x80) {
          piVar9 = (int *)(param_1 + 0x180 + uVar11 * 8);
          if ((int *)*piVar9 == piVar9) {
            pbVar2 = (byte *)((*puVar12 >> 3) + 0x160 + param_1);
            *pbVar2 = *pbVar2 | '\x01' << ((byte)*puVar12 & 7);
          }
        }
        else {
          for (piVar9 = *(int **)(param_1 + 0x180);
              ((int *)(param_1 + 0x180) != piVar9 && (*(ushort *)(piVar9 + -2) < uVar6));
              piVar9 = (int *)*piVar9) {
          }
        }
        piVar5 = (int *)piVar9[1];
        puVar1 = puVar12 + 4;
        *(int **)puVar1 = piVar9;
        *(int **)(puVar12 + 6) = piVar5;
        *piVar5 = (int)puVar1;
        piVar9[1] = (int)puVar1;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + uVar11;
        return;
      }
      if (local_1c == (ushort *)0x0) {
        return;
      }
      local_1c[1] = 0;
      return;
    }
  }
  FUN_002f6395(param_1,puVar1,param_3);
  return;
}
