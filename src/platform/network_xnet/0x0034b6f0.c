/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC3D24A42D94BFF5CC8099601A9C0D7C55D389E05386344F488E091757EED1FD
 * Entry: 0x0034b6f0, Ghidra index: 12947, label: FUN_0034b6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034b6f0(int *param_1,int param_2,undefined2 *param_3,uint param_4)

{
  undefined2 *puVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  short sVar6;
  int in_ECX;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 local_64;
  undefined4 uStack_60;
  ushort uStack_5c;
  undefined1 local_58 [4];
  undefined2 *local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  byte *local_40;
  uint local_3c;
  byte *local_38;
  byte *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  ushort *local_24;
  uint local_20;
  byte *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  if ((*(int *)(param_2 + 0xc) != 0) && (0xb < param_4)) {
    uVar5 = param_4 - 0xc;
    /* Original 0x0034B710: SUB DWORD PTR [EBP+0x14], 0x0c.
     * Retain the complete guest stack word here even when uVar5 is
     * reused for unrelated length arithmetic. Subsequent 0x0034BB26,
     * 0x0034BB2C, 0x0034BB57 and 0x0034BB6F writes update only its
     * low 16 bits; the high half must survive unchanged. */
    param_4 = uVar5;
    if (*(int *)(param_3 + 4) == 0) {
      if ((*(byte *)((int)param_1 + 0xb) & 3) == 0) {
        FUN_0034b3c4(param_1,*(undefined4 *)(param_2 + 0xc),*param_3,param_3 + 6,uVar5);
      }
    }
    else {
      uVar10 = param_1[2] & 0xfffffffcU | 4;
      param_1[2] = uVar10;
      if (0xb < uVar5) {
        local_1c = (byte *)0x0;
        local_44 = (uint)(*(int *)(param_2 + 0x10) == -1);
        local_48 = 0;
        local_24 = (ushort *)((*(ushort *)(param_1 + 1) - 0xc) + *param_1);
        uVar2 = *local_24;
        local_18 = (uint)uVar2;
        local_54 = param_3 + 6;
        local_10 = in_ECX;
        if (local_44 == 0) {
          local_1c = (byte *)FUN_00348472(*(uint *)(param_3 + 4) & 0xffffff00);
          if (local_1c == (byte *)0x0) {
            return;
          }
          if (local_1c[2] < 4) {
            return;
          }
          if (local_18 < *(ushort *)(local_1c + 0xc)) {
            local_18 = local_18 + 0x10000;
          }
          local_18 = local_18 + (*(uint *)(local_1c + 0xc) & 0xffff0000);
          local_48 = local_18 - *(int *)(local_1c + 0xc);
          if (0x1000 < local_48) {
            return;
          }
          if ((local_48 < 0x20) &&
             ((*(uint *)(local_1c + 0x10) & 1 << ((byte)local_48 & 0x1f)) != 0)) {
            return;
          }
          local_34 = local_1c + 0x54;
          local_40 = local_1c + 100;
          local_3c = (uint)*(ushort *)(local_1c + 0x84);
          local_38 = local_1c + 0x7c;
        }
        else {
          if ((*(uint *)(param_3 + 4) & 0xffffff00) != 0) {
            return;
          }
          local_34 = (byte *)(in_ECX + 0xa90);
          local_40 = (byte *)(in_ECX + 0xaa0);
          local_38 = (byte *)(in_ECX + 0xab8);
          local_18 = CONCAT22(uVar2,uVar2);
          local_3c = 0x18;
        }
        puVar1 = local_54;
        local_50 = local_18 >> 0x10;
        uVar2 = (ushort)(local_18 >> 0x10);
        *(ushort *)((int)param_1 + 6) = uVar2;
        local_5 = *(byte *)(param_3 + 4) & 0x1f;
        if (local_5 < 0x10) {
          local_20 = (uint)(*(byte *)(param_3 + 4) >> 5);
          local_14 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          if (local_5 == 0) {
            local_c = local_20 << 4 | 4;
            local_5 = 0;
            uVar9 = param_4 - 0x18;
          }
          else {
            local_30 = (int)(local_5 - 1) % 3;
            local_5 = local_5 - (char)local_30;
            local_c = local_20 << 4 | local_30 << 0x10;
            local_2c = local_30 * 2;
            if (local_5 == 1) {
              local_c = local_c | 5;
              local_2c = local_2c + 0xc;
            }
            local_14 = local_20;
            if (local_2c <= local_20) {
              local_14 = local_2c;
            }
            local_4c = local_2c - local_14;
            if (uVar5 < local_4c + 0xc + local_20) {
              return;
            }
            uVar7 = (local_14 - local_2c) + -0xc + uVar5;
            uVar9 = uVar7;
            if (local_5 == 4) {
              local_c = local_c | 6;
            }
            else if (6 < local_5) {
              local_c = local_c | 7;
              if (local_5 == 7) {
                uVar7 = (uint)*(byte *)((int)local_24 + -1);
                local_c = local_c | uVar7 << 8 | 0x80;
                if (uVar5 < local_4c + 0xd + uVar7 * 8) {
                  return;
                }
                uVar9 = uVar7 * 8;
                local_28 = (local_14 - local_2c) + uVar7 * -8 + -0xc + uVar5;
              }
              else if (local_5 == 10) {
                uVar9 = 0;
                local_28 = uVar7;
              }
            }
          }
          if ((((uVar9 & 7) == 0) && (local_20 <= uVar9)) &&
             (iVar3 = (local_28 - local_14) + local_2c, uVar5 == iVar3 + 0xc + uVar9)) {
            param_1[2] = uVar10 | local_c;
            local_64 = *(undefined4 *)(local_24 + 1);
            uStack_60 = *(undefined4 *)(local_24 + 3);
            uStack_5c = local_24[5];
            local_24[1] = uVar2;
            *(undefined4 *)(local_24 + 2) = *(undefined4 *)(param_3 + 4);
            local_24[4] = 0;
            local_24[5] = 0;
            iVar3 = FUN_0034c4a1(local_34,0x10,uVar9 + (int)local_54,iVar3 + 0xbU & 0xfffffffc,
                                 local_54,uVar9,&local_64,10);
            if (iVar3 != 0) {
              if (uVar9 != 0) {
                FUN_00347cda(local_38,local_18,local_58);
                FUN_00347c42(0,local_40,local_3c,local_58,puVar1,uVar9);
                if (local_14 < local_20) {
                  pcVar4 = (char *)((uVar9 - local_14) + (int)puVar1);
                  iVar3 = local_20 - local_14;
                  if (iVar3 != 0) {
                    do {
                      pcVar4 = pcVar4 + -1;
                      if (*pcVar4 != '\0') break;
                      iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                    if (iVar3 != 0) {
                      return;
                    }
                  }
                }
              }
              pbVar11 = local_1c;
              if (local_44 == 0) {
                if (local_48 < 0x20) {
                  *(uint *)(local_1c + 0x10) =
                       *(uint *)(local_1c + 0x10) | 1 << ((byte)local_48 & 0x1f);
                }
                else {
                  if (local_48 < 0x3f) {
                    *(uint *)(local_1c + 0x10) =
                         *(uint *)(local_1c + 0x10) >> ((byte)local_48 - 0x1f & 0x1f) | 0x80000000;
                  }
                  else {
                    local_1c[0x10] = 0;
                    local_1c[0x11] = 0;
                    local_1c[0x12] = 0;
                    local_1c[0x13] = 0x80;
                  }
                  *(uint *)(local_1c + 0xc) = *(int *)(local_1c + 0xc) + (local_48 - 0x1f);
                }
                if (local_1c[2] < 7) {
                  if (local_1c[2] == 5) {
                    FUN_0034a9bb(local_1c,0);
                    *(undefined4 *)(local_10 + 0xae4) = 6;
                    KeSetEvent(*(undefined4 *)(local_10 + 0xaec),1,0);
                  }
                  if ((*pbVar11 & 2) != 0) {
                    *(undefined4 *)(pbVar11 + 0xb8) = *(undefined4 *)(param_2 + 0xc);
                    *(undefined2 *)(pbVar11 + 0xbc) = *param_3;
                  }
                  pbVar11[2] = 7;
                  FUN_0034c35a(pbVar11 + 0x34,0xffffffff);
                  FUN_0034a993(pbVar11);
                }
                *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pbVar11 + 4);
                *(undefined4 *)(pbVar11 + 0x18) = *(undefined4 *)(local_10 + 0x1d8);
              }
              if (local_5 == 0) {
                FUN_0034b4a9(param_1,pbVar11,local_18,puVar1,uVar9 - local_20);
              }
              else {
                if (local_30 == 0) {
                  sVar6 = -0x17fd;
                  param_4 = (param_4 & 0xffff0000U) | 0xe803U;
                }
                else {
                  pbVar11 = (byte *)((uVar9 - local_14) + (int)puVar1);
                  if (local_30 == 1) {
                    sVar8 = CONCAT11((char)(*pbVar11 + 1000),(char)(*pbVar11 + 1000 >> 8));
                    sVar6 = CONCAT11((char)(pbVar11[1] + 1000),(char)(pbVar11[1] + 1000 >> 8));
                  }
                  else {
                    sVar8 = *(short *)pbVar11;
                    sVar6 = *(short *)(pbVar11 + 2);
                  }
                  param_4 = (param_4 & 0xffff0000U) | (uint)(ushort)sVar8;
                  if (sVar8 == 0) {
                    return;
                  }
                  if (sVar6 == 0) {
                    return;
                  }
                }
                if (((param_1[2] & 7U) == 2) || ((param_1[2] & 7U) == 5)) {
                  uVar5 = ((byte)local_24[-2] & 0xf0) >> 2;
                  if ((0x13 < uVar5) && (uVar5 <= (uVar9 - local_20) + 0x14)) {
                    FUN_00354ff6(param_1,param_2,param_4,sVar6,local_24 + -6,
                                 (uVar5 - 0x14) + (int)puVar1,(uVar9 - (uVar5 - 0x14)) - local_20);
                  }
                }
                else {
                  FUN_0035596b(param_1,param_2,param_4,sVar6,puVar1,uVar9 - local_20,
                               (local_2c - local_14) + uVar9 + (int)puVar1,
                               local_28 - (local_c >> 7 & 1));
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
