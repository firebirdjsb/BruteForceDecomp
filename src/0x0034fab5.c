/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B928D0541EB6801DAFF0EB2B6AD209F47EB36D9347E1B1ADBAA967A23D58402D
 * Entry: 0x0034fab5, Ghidra index: 13039, label: FUN_0034fab5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034fab5(undefined4 param_1,int param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  local_8 = in_ECX;
  FUN_0034e276(&local_1c);
  if (((*(ushort *)((int)param_3 + 2) == param_4) && (0x17 < param_4)) &&
     (local_c = *(int **)(in_ECX + 0xa8c), local_c != (int *)0x0)) {
    do {
      iVar5 = 2;
      bVar10 = true;
      piVar7 = local_c;
      piVar9 = param_3;
      do {
        piVar9 = piVar9 + 1;
        piVar7 = piVar7 + 1;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar10 = *piVar7 == *piVar9;
      } while (bVar10);
    } while ((!bVar10) && (local_c = (int *)*local_c, local_c != (int *)0x0));
    if ((((local_c != (int *)0x0) &&
         ((uVar8 = (uint)*(ushort *)(param_3 + 3), uVar8 < (uint)local_c[0x12] &&
          (local_14 = uVar8 * 0xac + local_c[0x13], *(int *)(local_14 + 0x14) != 0)))) &&
        (*(int *)(local_14 + 0x94) == param_2)) &&
       ((*(char *)(local_14 + 0xc) == '\x04' || (*(char *)(local_14 + 0xc) == '\x05')))) {
      bVar3 = *(byte *)((int)param_3 + 0xf);
      uVar4 = local_c[0x15];
      local_10 = bVar3 & 4;
      if ((uVar4 != 0) || ((bVar3 & 4) != 0)) {
        param_4 = param_4 - 0x18;
        if ((bVar3 & 4) == 0) {
          bVar10 = false;
          bVar11 = param_4 == 0;
        }
        else {
          uVar6 = (uint)*(byte *)(local_8 + 0xf) * 4;
          bVar10 = param_4 < uVar6;
          bVar11 = param_4 == uVar6;
        }
        if (bVar10 || bVar11) {
          pbVar2 = (byte *)(local_c + uVar8 * 6 + 0x1a);
          if ((bVar3 & 4) == 0) {
            if (*(uint *)(local_14 + 0xa0) <= uVar4) {
              uVar4 = *(uint *)(local_14 + 0xa0);
            }
            if (*(byte *)((int)param_3 + 0xe) < uVar4) {
              iVar5 = *(int *)(local_14 + 0xa8) + (uint)*(byte *)((int)param_3 + 0xe) * 0x28;
              if ((bVar3 & 1) == 0) {
                if ((*(int *)(iVar5 + 8) == 0 && *(int *)(iVar5 + 0xc) == 0) &&
                   (*(int *)(iVar5 + 0x10) == 0 && *(int *)(iVar5 + 0x14) == 0)) {
                  *(undefined4 *)(iVar5 + 8) = local_1c;
                  *(undefined4 *)(iVar5 + 0xc) = local_18;
                  uVar4 = FUN_0034e296(&local_1c,iVar5);
                  *(uint *)(iVar5 + 0x18) = uVar4;
                  uVar8 = param_3[4];
                  if (uVar4 < (uint)param_3[4]) {
                    uVar8 = uVar4;
                  }
                  *(uint *)(iVar5 + 0x18) = uVar4 - uVar8;
                }
              }
              else if (*(int *)(iVar5 + 0x10) == 0 && *(int *)(iVar5 + 0x14) == 0) {
                *(undefined4 *)(iVar5 + 0x10) = local_1c;
                *(undefined4 *)(iVar5 + 0x14) = local_18;
                uVar4 = FUN_0034e296(&local_1c,iVar5);
                *(uint *)(iVar5 + 0x1c) = uVar4;
                uVar8 = param_3[4];
                if (uVar4 < (uint)param_3[4]) {
                  uVar8 = uVar4;
                }
                uVar4 = uVar4 - uVar8;
                *(uint *)(iVar5 + 0x1c) = uVar4;
                uVar8 = param_3[5];
                *(uint *)(iVar5 + 0x20) = uVar8;
                if (uVar4 < uVar8) {
                  uVar8 = uVar4;
                }
                *(uint *)(iVar5 + 0x1c) = uVar4 - uVar8;
                if (*(int *)(iVar5 + 8) != 0 || *(int *)(iVar5 + 0xc) != 0) {
                  uVar4 = FUN_0034e296(&local_1c,(int *)(iVar5 + 8));
                  piVar7 = local_c;
                  uVar8 = *(uint *)(iVar5 + 0x1c);
                  *(uint *)(iVar5 + 0x24) = uVar4;
                  if (uVar8 < uVar4) {
                    uVar4 = uVar8;
                  }
                  *(uint *)(iVar5 + 0x1c) = uVar8 - uVar4;
                  puVar1 = (uint *)(local_14 + 0xa4);
                  *puVar1 = *puVar1 + 1;
                  *pbVar2 = *pbVar2 | 2;
                  *(ushort *)(pbVar2 + 4) = (ushort)*(byte *)puVar1;
                  uVar8 = *puVar1;
                  if ((uVar8 < (uint)local_c[0x14]) &&
                     (uVar8 = *(uint *)(local_14 + 0xa0), uVar8 < (uint)local_c[0x15])) {
                    uVar12 = 4;
                  }
                  else {
                    uVar12 = CONCAT31((int3)(uVar8 >> 8),
                                      ((*(byte *)((int)param_3 + 0xf) & 8) != 0) + '\x05');
                  }
                  FUN_0034f23b(local_c,local_14,uVar12);
                  FUN_0034f4c3(piVar7);
                }
              }
            }
          }
          else {
            *pbVar2 = *pbVar2 | 2;
            if (param_4 != 0) {
              piVar7 = param_3 + 6;
              piVar9 = *(int **)(local_14 + 0x9c);
              for (uVar8 = param_4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *piVar9 = *piVar7;
                piVar7 = piVar7 + 1;
                piVar9 = piVar9 + 1;
              }
              for (uVar8 = param_4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(char *)piVar9 = (char)*piVar7;
                piVar7 = (int *)((int)piVar7 + 1);
                piVar9 = (int *)((int)piVar9 + 1);
              }
              *pbVar2 = *pbVar2 | 8;
            }
            if ((*(byte *)((int)param_3 + 0xf) & 0x10) != 0) {
              *pbVar2 = *pbVar2 | 4;
            }
            *(undefined4 *)(pbVar2 + 8) = *(undefined4 *)(local_14 + 0x9c);
            *(short *)(pbVar2 + 6) = (short)param_4;
            FUN_0034f23b(local_c,local_14,6);
          }
        }
      }
    }
  }
  return;
}
