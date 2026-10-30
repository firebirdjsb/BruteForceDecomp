/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 037862F9F3CE34FC80B05E6BC6D999E886037C8FD8046043E34F74D751BD1FC5
 * Entry: 0x0034f6f1, Ghidra index: 13037, label: FUN_0034f6f1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034f6f1(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  bool bVar14;
  bool bVar15;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  local_8 = in_ECX;
  FUN_0034e276(&local_24);
  if ((0x26 < *(ushort *)(param_4 + 2)) &&
     (local_c = *(int **)(in_ECX + 0xa8c), local_c != (int *)0x0)) {
    do {
      iVar7 = 2;
      bVar14 = true;
      piVar12 = (int *)(param_4 + 6);
      piVar9 = local_c;
      do {
        piVar9 = piVar9 + 1;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar14 = *piVar9 == *piVar12;
        piVar12 = piVar12 + 1;
      } while (bVar14);
    } while ((!bVar14) && (local_c = (int *)*local_c, local_c != (int *)0x0));
    if ((local_c != (int *)0x0) && ((uint)*(ushort *)(param_4 + 0xe) < (uint)local_c[0x12])) {
      iVar7 = (uint)*(ushort *)(param_4 + 0xe) * 0xac + local_c[0x13];
      if (((*(char *)(iVar7 + 0xc) != '\0') && (*(char *)(iVar7 + 0xc) != '\x06')) &&
         (*(int *)(iVar7 + 0x14) == 0)) {
        bVar3 = *(byte *)(param_4 + 0x11);
        local_14 = bVar3 & 4;
        if (((local_c[0x15] != 0) || ((bVar3 & 4) != 0)) &&
           (uVar5 = (uint)*(byte *)(param_4 + 0x1a), uVar5 <= (-(uint)((bVar3 & 4) != 0) & 7))) {
          uVar8 = *(ushort *)(param_4 + 2) - 0x27;
          uVar10 = uVar8 - uVar5;
          if ((bVar3 & 4) == 0) {
            bVar14 = false;
            bVar15 = uVar8 == 0;
          }
          else {
            if (uVar8 < uVar5) {
              return;
            }
            if ((uVar8 & 7) != 0) {
              return;
            }
            uVar5 = (uint)*(byte *)(local_8 + 0xf) * 4;
            bVar14 = uVar10 < uVar5;
            bVar15 = uVar10 == uVar5;
          }
          if (bVar14 || bVar15) {
            local_10 = (undefined4 *)(param_4 + 0x27);
            local_1c = uVar10;
            local_18 = iVar7;
            iVar6 = FUN_0034c4a1(iVar7 + 0x20,0x10,param_4,0x1b,local_10,uVar8,param_4 + 0x1b,0xc);
            if (iVar6 != 0) {
              if (uVar8 != 0) {
                FUN_00347c42(0,iVar7 + 0x30,0x18,param_4 + 6,local_10,uVar8);
              }
              pbVar2 = (byte *)(local_c + (uint)*(ushort *)(param_4 + 0xe) * 6 + 0x1a);
              if (local_14 == 0) {
                uVar5 = local_c[0x15];
                if (*(uint *)(iVar7 + 0xa0) <= (uint)local_c[0x15]) {
                  uVar5 = *(uint *)(iVar7 + 0xa0);
                }
                if (*(byte *)(param_4 + 0x10) < uVar5) {
                  iVar6 = *(int *)(iVar7 + 0xa8) + (uint)*(byte *)(param_4 + 0x10) * 0x28;
                  if ((*(byte *)(param_4 + 0x11) & 1) == 0) {
                    if ((*(int *)(iVar6 + 8) == 0 && *(int *)(iVar6 + 0xc) == 0) &&
                       (*(int *)(iVar6 + 0x10) == 0 && *(int *)(iVar6 + 0x14) == 0)) {
                      *(undefined4 *)(iVar6 + 8) = local_24;
                      *(undefined4 *)(iVar6 + 0xc) = local_20;
                      uVar10 = FUN_0034e296(&local_24,iVar6);
                      *(uint *)(iVar6 + 0x18) = uVar10;
                      uVar5 = *(uint *)(param_4 + 0x12);
                      if (uVar10 < *(uint *)(param_4 + 0x12)) {
                        uVar5 = uVar10;
                      }
                      *(uint *)(iVar6 + 0x18) = uVar10 - uVar5;
                    }
                  }
                  else if (*(int *)(iVar6 + 0x10) == 0 && *(int *)(iVar6 + 0x14) == 0) {
                    *(undefined4 *)(iVar6 + 0x10) = local_24;
                    *(undefined4 *)(iVar6 + 0x14) = local_20;
                    uVar10 = FUN_0034e296(&local_24,iVar6);
                    *(uint *)(iVar6 + 0x1c) = uVar10;
                    uVar5 = *(uint *)(param_4 + 0x12);
                    if (uVar10 < *(uint *)(param_4 + 0x12)) {
                      uVar5 = uVar10;
                    }
                    uVar10 = uVar10 - uVar5;
                    *(uint *)(iVar6 + 0x1c) = uVar10;
                    uVar5 = *(uint *)(param_4 + 0x16);
                    *(uint *)(iVar6 + 0x20) = uVar5;
                    if (uVar10 < uVar5) {
                      uVar5 = uVar10;
                    }
                    *(uint *)(iVar6 + 0x1c) = uVar10 - uVar5;
                    if (*(int *)(iVar6 + 8) != 0 || *(int *)(iVar6 + 0xc) != 0) {
                      uVar10 = FUN_0034e296(&local_24,(int *)(iVar6 + 8));
                      piVar9 = local_c;
                      uVar5 = *(uint *)(iVar6 + 0x1c);
                      *(uint *)(iVar6 + 0x24) = uVar10;
                      if (uVar5 < uVar10) {
                        uVar10 = uVar5;
                      }
                      *(uint *)(iVar6 + 0x1c) = uVar5 - uVar10;
                      *(undefined4 *)(iVar7 + 0x10) = param_2;
                      *(undefined2 *)(iVar7 + 0xe) = param_3;
                      puVar1 = (uint *)(iVar7 + 0xa4);
                      *puVar1 = *puVar1 + 1;
                      *pbVar2 = *pbVar2 | 2;
                      *(ushort *)(pbVar2 + 4) = (ushort)*(byte *)puVar1;
                      if ((*puVar1 < (uint)local_c[0x14]) &&
                         (*(uint *)(iVar7 + 0xa0) < (uint)local_c[0x15])) {
                        cVar4 = '\x04';
                      }
                      else {
                        cVar4 = ((*(byte *)(param_4 + 0x11) & 8) != 0) + '\x05';
                      }
                      FUN_0034f23b(local_c,iVar7,cVar4);
                      FUN_0034f4c3(piVar9);
                    }
                  }
                }
              }
              else {
                *pbVar2 = *pbVar2 | 2;
                if ((*(byte *)(param_4 + 0x11) & 0x10) != 0) {
                  *pbVar2 = *pbVar2 | 4;
                }
                if (uVar10 != 0) {
                  puVar11 = local_10;
                  puVar13 = *(undefined4 **)(iVar7 + 0x9c);
                  for (uVar5 = uVar10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar13 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar13 = puVar13 + 1;
                  }
                  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                    *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                    puVar13 = (undefined4 *)((int)puVar13 + 1);
                  }
                  *pbVar2 = *pbVar2 | 8;
                  uVar10 = local_1c;
                  iVar7 = local_18;
                }
                *(undefined4 *)(pbVar2 + 8) = *(undefined4 *)(iVar7 + 0x9c);
                *(short *)(pbVar2 + 6) = (short)uVar10;
                FUN_0034f23b(local_c,iVar7,6);
              }
            }
          }
        }
      }
    }
  }
  return;
}
