/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BD2823083555F13A4352C0C350842ECA58A7F73A79CF5C63E00A3A138C53963
 * Entry: 0x0034af15, Ghidra index: 12942, label: FUN_0034af15
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034af15(void)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 local_28 [20];
  undefined4 *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((0x3f < *(ushort *)(in_stack_00000010 + 2)) &&
       (pbVar2 = (byte *)FUN_00348472(*(undefined4 *)(in_stack_00000010 + 8)), pbVar2 != (byte *)0x0
       )) && ((*pbVar2 & 4) != 0)) && (pbVar2[2] == 3)) {
    iVar5 = 2;
    bVar10 = true;
    pbVar7 = pbVar2 + 0x44;
    piVar8 = (int *)(in_stack_00000010 + 0x10);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar10 = *(int *)pbVar7 == *piVar8;
      pbVar7 = pbVar7 + 4;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if (((bVar10) && ((*(uint *)(in_stack_00000010 + 0xc) & 0xffffff00) != 0)) &&
       (((char)*(uint *)(in_stack_00000010 + 0xc) == '\0' &&
        ((local_10 = FUN_0034c50e(in_stack_00000010,in_stack_00000014,0x5880), local_10 != 0 &&
         (*(short *)(local_10 + 2) == 100)))))) {
      local_10 = local_10 + 4;
      iVar5 = FUN_0034c538(local_10);
      if ((iVar5 == 0) &&
         ((iVar5 = FUN_0034c50e(in_stack_00000010,in_stack_00000014,0x5883), iVar5 != 0 &&
          (((uint)*(ushort *)(iVar5 + 2) - in_stack_00000010) + iVar5 == in_stack_00000014)))) {
        if (*(int *)(local_8 + 0xae0) == 0) {
          local_c = 0;
        }
        else {
          local_c = thunk_FUN_0033378c(*(undefined4 *)(pbVar2 + 0xc0));
        }
        if (local_c != 0) {
          uVar6 = *(uint *)(pbVar2 + 0xe0);
          if (7 < uVar6) {
            uVar6 = 8;
          }
          iVar3 = FUN_003338a1(*(undefined4 *)(pbVar2 + 0xc0),pbVar2 + 0xe8,uVar6,local_28,0x14,
                               iVar5 + 4,*(ushort *)(iVar5 + 2) - 4);
          if (iVar3 != 0) {
            local_14 = (undefined4 *)(local_c + 0xc0);
            iVar5 = FUN_0034c4a1(local_14,0x10,in_stack_00000010,iVar5 - in_stack_00000010,0,0,
                                 local_28,0x14);
            if (iVar5 != 0) {
              if ((*(ushort *)(in_stack_00000010 + 6) & 1) == 0) {
                if ((*(ushort *)(in_stack_00000010 + 6) & 2) == 0) {
                  return;
                }
                pbVar2[0xb6] = 0x18;
                pbVar2[0xb7] = 0;
                pbVar2[0x84] = 0x18;
                pbVar2[0x85] = 0;
              }
              else {
                pbVar2[0xb6] = 8;
                pbVar2[0xb7] = 0;
                pbVar2[0x84] = 8;
                pbVar2[0x85] = 0;
              }
              *(undefined4 *)(pbVar2 + 0x4c) = *(undefined4 *)(in_stack_00000010 + 0x18);
              *(undefined4 *)(pbVar2 + 0x50) = *(undefined4 *)(in_stack_00000010 + 0x1c);
              FUN_003484e1(pbVar2,0,local_14,0x10,local_c,local_c + 0x60,local_10,1);
              local_14 = (undefined4 *)(in_stack_00000010 + 0x20);
              FUN_00347c42(0,pbVar2 + 100,0x18,pbVar2 + 0x4c,local_14,0x20);
              iVar5 = local_8;
              if (*(short *)(in_stack_00000010 + 0x3e) == 0) {
                *(undefined4 *)(pbVar2 + 8) = *(undefined4 *)(in_stack_00000010 + 0xc);
                *(uint *)(pbVar2 + 0x24) = (uint)*(ushort *)(in_stack_00000010 + 0x3c) * 5;
                *(uint *)(pbVar2 + 0x28) = (uint)*(ushort *)(in_stack_00000010 + 0x3a) * 5;
                puVar4 = local_14;
                pbVar7 = pbVar2 + 0xc4;
                for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(undefined4 *)pbVar7 = *puVar4;
                  puVar4 = puVar4 + 1;
                  pbVar7 = pbVar7 + 4;
                }
                *(undefined4 *)(pbVar2 + 0xd8) = *(undefined4 *)(in_stack_00000010 + 0x34);
                *(undefined2 *)(pbVar2 + 0xdc) = *(undefined2 *)(in_stack_00000010 + 0x38);
                FUN_0034c35a(pbVar2 + 0x34,0xffffffff);
                if (pbVar2 == *(byte **)(iVar5 + 0xae8)) {
                  puVar4 = (undefined4 *)FUN_0034c50e(in_stack_00000010,in_stack_00000014,0x5887);
                  if ((((puVar4 == (undefined4 *)0x0) ||
                       (uVar1 = *(ushort *)((int)puVar4 + 2), uVar1 < 0x11c)) || (0x91c < uVar1)) ||
                     ((uVar1 - 4 & 7) != 0)) {
                    *(undefined4 *)(iVar5 + 0xae4) = 6;
                  }
                  else {
                    FUN_00347c42(0,pbVar2 + 100,0x18,pbVar2 + 0x4c,puVar4 + 1,uVar1 - 4);
                    uVar1 = *(ushort *)((int)puVar4 + 2);
                    puVar9 = *(undefined4 **)(iVar5 + 0xbcc);
                    for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
                      *puVar9 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar9 = puVar9 + 1;
                    }
                    for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar9 = (undefined4 *)((int)puVar9 + 1);
                    }
                    puVar4 = (undefined4 *)(*(int *)(local_8 + 0xbcc) + 0x91c);
                    for (iVar5 = 0x4b; iVar5 != 0; iVar5 = iVar5 + -1) {
                      *puVar4 = 0;
                      puVar4 = puVar4 + 1;
                    }
                    *(undefined4 *)(local_8 + 0xae4) = 3;
                    pbVar2[2] = 5;
                    iVar5 = local_8;
                  }
                  KeSetEvent(*(undefined4 *)(iVar5 + 0xaec),1,0);
                }
                if (pbVar2[2] != 5) {
                  FUN_0034a9bb(pbVar2,1);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
