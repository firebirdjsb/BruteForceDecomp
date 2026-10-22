/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B93B669EE41DFD22F6DC0F6D06E260DD195264C03CA9DD4CE5F70B6A9BFB29E9
 * Entry: 0x0034f4c3, Ghidra index: 13036, label: FUN_0034f4c3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void FUN_0034f4c3(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint local_8;
  
  iVar6 = param_1;
  local_8 = 0xffffffff;
  uVar4 = *(uint *)(in_ECX + 0x1d8);
  while ((puVar1 = (undefined4 *)(param_1 + 0x1c), (undefined4 *)*puVar1 != puVar1 &&
         (piVar5 = (int *)*puVar1, (uint)piVar5[2] <= uVar4))) {
    iVar9 = *piVar5;
    piVar7 = (int *)piVar5[1];
    *piVar7 = iVar9;
    *(int **)(iVar9 + 4) = piVar7;
    cVar2 = (char)piVar5[3];
    *piVar5 = 0;
    if (cVar2 == '\x01') {
      uVar10 = 2;
      goto LAB_0034f54f;
    }
    if (cVar2 == '\x02') {
      if (*(byte *)((int)piVar5 + 0xd) < *(byte *)(in_ECX + 0x47)) {
        uVar10 = 2;
        goto LAB_0034f54f;
      }
      goto LAB_0034f547;
    }
    if (cVar2 == '\x04') {
      if (((uint)piVar5[0x28] < *(uint *)(param_1 + 0x54)) &&
         ((piVar5[0x29] != 0 || (*(byte *)((int)piVar5 + 0xd) < *(byte *)(in_ECX + 0x49))))) {
        uVar10 = 4;
      }
      else {
        uVar10 = 6;
      }
      goto LAB_0034f54f;
    }
    if (cVar2 == '\x05') {
      if (*(byte *)((int)piVar5 + 0xd) < *(byte *)(in_ECX + 0x4b)) {
        uVar10 = 5;
      }
      else {
LAB_0034f547:
        uVar10 = 6;
      }
LAB_0034f54f:
      FUN_0034f23b(param_1,piVar5,uVar10);
    }
  }
  if (*(int **)(param_1 + 0x14) != (int *)(param_1 + 0x14)) {
    do {
      piVar5 = *(int **)(param_1 + 0x14);
      if (((*(byte *)(piVar5 + 6) & 0xc0) != 0x80) || (*(int *)(in_ECX + 0xae4) == 6)) {
        if (((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(*(int *)(param_1 + 0x3c) + 0x14) == 0)) &&
           ((*(int *)(*(int *)(param_1 + 0x40) + 0x14) == 0 &&
            (*(int *)(*(int *)(param_1 + 0x44) + 0x14) == 0)))) {
          if ((*(int *)(param_1 + 0x54) == 0) || ((char)piVar5[3] == '\x05')) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if ((char)piVar5[3] == '\x02') {
            param_1 = (-(uint)bVar3 & 0x440) + 0x8b0;
            bVar3 = *(byte *)(in_ECX + 0x46);
          }
          else {
            uVar8 = 0x2b0;
            if (piVar5[5] == 0) {
              uVar8 = 0x440;
            }
            param_1 = (-(uint)bVar3 & uVar8) + uVar8;
            bVar3 = *(byte *)(in_ECX + 0x48);
          }
          iVar9 = *(int *)(iVar6 + 0x38);
          if (*(int *)(iVar6 + 0x38) - *(int *)KeTickCount_exref < 0) {
            iVar9 = *(int *)KeTickCount_exref;
          }
          if ((*(int *)(in_ECX + 0x1dc) + 200) - iVar9 < 0) {
            local_8 = uVar4 + 1;
          }
          else {
            *(uint *)(iVar6 + 0x38) = (uint)(param_1 * 1000) / *(uint *)(iVar6 + 0x34) + iVar9;
            if ((char)piVar5[3] == '\x02') {
              FUN_0034eafe(iVar6,piVar5);
            }
            else if (piVar5[5] == 0) {
              FUN_0034e8a9(iVar6,piVar5);
            }
            else {
              FUN_0034ec02(iVar6,piVar5);
            }
            iVar9 = *piVar5;
            piVar7 = (int *)piVar5[1];
            *piVar7 = iVar9;
            *(int **)(iVar9 + 4) = piVar7;
            *piVar5 = 0;
            uVar4 = uVar4 + (uint)bVar3 * 5;
            piVar7 = (int *)(iVar6 + 0x1c);
            piVar5[2] = uVar4;
            if (((int *)*piVar7 == piVar7) || (uVar4 <= (uint)((int *)*piVar7)[2])) {
              iVar9 = *piVar7;
              *piVar5 = iVar9;
              piVar5[1] = (int)piVar7;
            }
            else {
              piVar7 = *(int **)(iVar6 + 0x20);
              uVar8 = piVar7[2];
              while (uVar4 < uVar8) {
                piVar7 = (int *)piVar7[1];
                uVar8 = piVar7[2];
              }
              *piVar5 = *piVar7;
              piVar5[1] = (int)piVar7;
              iVar9 = *piVar7;
            }
            *(int **)(iVar9 + 4) = piVar5;
            *piVar7 = (int)piVar5;
          }
        }
        break;
      }
      FUN_0034f23b(param_1,piVar5,6);
    } while (*(int **)(param_1 + 0x14) != (int *)(param_1 + 0x14));
  }
  piVar5 = *(int **)(iVar6 + 0x1c);
  if ((piVar5 != (int *)(iVar6 + 0x1c)) && (uVar4 = piVar5[2], uVar4 < local_8)) {
    local_8 = uVar4;
  }
  FUN_0034c35a(iVar6 + 0x24,local_8);
  return;
}
