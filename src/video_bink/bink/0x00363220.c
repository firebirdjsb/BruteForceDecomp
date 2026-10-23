/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1750AA508AA940297720A9FF2C4E27170293B9D5A4CB7B7CDA401A45CE218513
 * Entry: 0x00363220, Ghidra index: 13235, label: FUN_00363220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_0036335b_default[];
extern uint32_t switchD_0036379d_default[];
void FUN_00363220(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  ushort uVar11;
  undefined4 *puVar12;
  byte *local_134;
  byte *local_124;
  byte *local_120;
  uint local_11c;
  uint local_118;
  ushort auStack_114 [2];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_90;
  byte local_40 [6];
  byte local_3a [58];
  
  puVar9 = (uint *)*param_2;
  local_90 = param_2[1];
  uVar5 = param_2[2];
  uVar10 = param_2[3];
  auStack_114[1] = 0;
  puVar12 = &local_110;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  bVar7 = (byte)uVar5;
  if (uVar10 < 4) {
    uVar5 = *puVar9 >> (4 - (byte)uVar10 & 0x1f);
    bVar7 = (char)*puVar9 << ((byte)uVar10 & 0x1f) | bVar7;
    uVar10 = uVar10 + 0x1c;
    puVar9 = puVar9 + 1;
  }
  else {
    uVar5 = uVar5 >> 4;
    uVar10 = uVar10 - 4;
  }
  bVar7 = bVar7 & 0xf;
  local_124 = local_3a;
  local_134 = local_40;
  local_11c = 1 << (bVar7 - 1 & 0x1f);
  if (1 < bVar7) {
    local_118 = (uint)(byte)(bVar7 - 1);
    uVar2 = (uint)bVar7;
    do {
      uVar2 = uVar2 - 1;
      local_120 = local_134;
      if (local_134 < local_124) {
        do {
          bVar3 = *local_120;
          if (bVar3 == 0) goto switchD_0036335b_default;
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
            uVar6 = uVar5;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) goto switchD_0036335b_default;
          bVar1 = (byte)uVar2;
          switch(bVar3 & 3) {
          case 0:
            *local_120 = (bVar3 & 0xfc) + 0x11;
            break;
          case 1:
            bVar3 = bVar3 & 0xfc;
            *local_120 = bVar3 + 2;
            *local_124 = bVar3 + 0x12;
            local_124[1] = bVar3 + 0x22;
            local_124[2] = bVar3 + 0x32;
            local_124 = local_124 + 3;
            goto LAB_00363715;
          case 2:
            *local_120 = 0;
            local_120 = local_120 + 1;
            break;
          case 3:
            if (uVar10 < uVar2) {
              uVar5 = *puVar9 << ((byte)uVar10 & 0x1f) | uVar5;
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - uVar2;
              puVar9 = puVar9 + 1;
            }
            else {
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -uVar2;
            }
            uVar11 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5 |
                     (ushort)local_11c;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar11 = -uVar11;
            }
            auStack_114[bVar3 >> 2] = uVar11;
            *local_120 = 0;
          default:
switchD_0036335b_default:
            local_120 = local_120 + 1;
            goto LAB_00363715;
          }
          bVar3 = bVar3 >> 2;
          if (uVar10 == 0) {
            uVar5 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar6 = uVar5 >> 1;
            uVar10 = 0x1f;
          }
          else {
            uVar6 = uVar6 >> 2;
            uVar10 = uVar10 - 1;
          }
          if ((uVar5 & 1) == 0) {
            if (uVar10 < uVar2) {
              uVar6 = *puVar9 << ((byte)uVar10 & 0x1f) | uVar6;
              uVar5 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - uVar2;
              puVar9 = puVar9 + 1;
            }
            else {
              uVar5 = uVar6 >> (bVar1 & 0x1f);
              iVar4 = -uVar2;
            }
            uVar11 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar6 |
                     (ushort)local_11c;
            if (uVar10 + iVar4 == 0) {
              uVar5 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar6 = uVar5 >> 1;
            if ((uVar5 & 1) != 0) {
              uVar11 = -uVar11;
            }
            auStack_114[bVar3] = uVar11;
          }
          else {
            local_134 = local_134 + -1;
            *local_134 = bVar3 * '\x04' + 3;
          }
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) {
            if (uVar10 < uVar2) {
              uVar5 = *puVar9 << ((byte)uVar10 & 0x1f) | uVar5;
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - uVar2;
              puVar9 = puVar9 + 1;
            }
            else {
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -uVar2;
            }
            uVar11 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5 |
                     (ushort)local_11c;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar11 = -uVar11;
            }
            auStack_114[(byte)(bVar3 + 1)] = uVar11;
          }
          else {
            local_134 = local_134 + -1;
            *local_134 = (bVar3 + 1) * '\x04' + 3;
          }
          if (uVar10 == 0) {
            uVar5 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar6 = uVar5 >> 1;
          if ((uVar5 & 1) == 0) {
            if (uVar10 < uVar2) {
              uVar6 = *puVar9 << ((byte)uVar10 & 0x1f) | uVar6;
              uVar5 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - uVar2;
              puVar9 = puVar9 + 1;
            }
            else {
              uVar5 = uVar6 >> (bVar1 & 0x1f);
              iVar4 = -uVar2;
            }
            uVar11 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar6 |
                     (ushort)local_11c;
            if (uVar10 + iVar4 == 0) {
              uVar5 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar6 = uVar5 >> 1;
            if ((uVar5 & 1) != 0) {
              uVar11 = -uVar11;
            }
            auStack_114[(byte)(bVar3 + 2)] = uVar11;
          }
          else {
            local_134 = local_134 + -1;
            *local_134 = (bVar3 + 2) * '\x04' + 3;
          }
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) {
            if (uVar10 < uVar2) {
              uVar5 = *puVar9 << ((byte)uVar10 & 0x1f) | uVar5;
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - uVar2;
              puVar9 = puVar9 + 1;
            }
            else {
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -uVar2;
            }
            uVar11 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5 |
                     (ushort)local_11c;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar11 = -uVar11;
            }
            auStack_114[(byte)(bVar3 + 3)] = uVar11;
          }
          else {
            local_134 = local_134 + -1;
            *local_134 = (bVar3 + 3) * '\x04' + 3;
          }
LAB_00363715:
        } while (local_120 < local_124);
      }
      local_11c = (uint)(ushort)((short)(ushort)local_11c >> 1);
      local_118 = local_118 - 1;
    } while (local_118 != 0);
  }
  if ((bVar7 != 0) && (local_120 = local_134, pbVar8 = local_134, local_134 < local_124)) {
    do {
      bVar7 = *pbVar8;
      uVar2 = uVar5;
      if (bVar7 == 0) goto switchD_0036379d_default;
      if (uVar10 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar10 = 0x1f;
      }
      else {
        uVar10 = uVar10 - 1;
      }
      uVar6 = uVar5 >> 1;
      uVar2 = uVar6;
      if ((uVar5 & 1) == 0) goto switchD_0036379d_default;
      switch(bVar7 & 3) {
      case 0:
        *pbVar8 = (bVar7 & 0xfc) + 0x11;
        break;
      case 1:
        bVar7 = bVar7 & 0xfc;
        *pbVar8 = bVar7 + 2;
        *local_124 = bVar7 + 0x12;
        local_124[1] = bVar7 + 0x22;
        local_124[2] = bVar7 + 0x32;
        local_124 = local_124 + 3;
        uVar5 = uVar6;
        goto LAB_003639e4;
      case 2:
        *pbVar8 = 0;
        pbVar8 = pbVar8 + 1;
        local_120 = pbVar8;
        break;
      case 3:
        if (uVar10 == 0) {
          uVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar2 = uVar6 >> 1;
          uVar10 = 0x1f;
        }
        else {
          uVar2 = uVar5 >> 2;
          uVar10 = uVar10 - 1;
        }
        auStack_114[bVar7 >> 2] = (-(ushort)((uVar6 & 1) != 0) & 0xfffe) + 1;
        *pbVar8 = 0;
      default:
switchD_0036379d_default:
        pbVar8 = pbVar8 + 1;
        uVar5 = uVar2;
        local_120 = pbVar8;
        goto LAB_003639e4;
      }
      bVar7 = bVar7 >> 2;
      if (uVar10 == 0) {
        uVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar5 = uVar6 >> 1;
        iVar4 = 0x1f;
      }
      else {
        uVar5 = uVar5 >> 2;
        iVar4 = uVar10 - 1;
      }
      if ((uVar6 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar4 = 0x1f;
        }
        else {
          iVar4 = iVar4 + -1;
          uVar10 = uVar5;
        }
        uVar5 = uVar10 >> 1;
        auStack_114[bVar7] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_134 = local_134 + -1;
        *local_134 = bVar7 * '\x04' + 3;
      }
      if (iVar4 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        iVar4 = 0x1f;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      uVar10 = uVar5 >> 1;
      if ((uVar5 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar10 >> 1;
          iVar4 = 0x1f;
        }
        else {
          uVar5 = uVar5 >> 2;
          iVar4 = iVar4 + -1;
        }
        auStack_114[(byte)(bVar7 + 1)] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
        pbVar8 = local_120;
      }
      else {
        local_134 = local_134 + -1;
        *local_134 = (bVar7 + 1) * '\x04' + 3;
        uVar5 = uVar10;
      }
      if (iVar4 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        iVar4 = 0x1f;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      uVar10 = uVar5 >> 1;
      if ((uVar5 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar10 >> 1;
          iVar4 = 0x1f;
        }
        else {
          uVar5 = uVar5 >> 2;
          iVar4 = iVar4 + -1;
        }
        auStack_114[(byte)(bVar7 + 2)] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
        pbVar8 = local_120;
      }
      else {
        local_134 = local_134 + -1;
        *local_134 = (bVar7 + 2) * '\x04' + 3;
        uVar5 = uVar10;
      }
      if (iVar4 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar10 = 0x1f;
      }
      else {
        uVar10 = iVar4 - 1;
      }
      uVar2 = uVar5 >> 1;
      if ((uVar5 & 1) == 0) {
        if (uVar10 == 0) {
          uVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar2 >> 1;
          uVar10 = 0x1f;
        }
        else {
          uVar5 = uVar5 >> 2;
          uVar10 = uVar10 - 1;
        }
        auStack_114[(byte)(bVar7 + 3)] = (-(ushort)((uVar2 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_134 = local_134 + -1;
        *local_134 = (bVar7 + 3) * '\x04' + 3;
        uVar5 = uVar2;
      }
LAB_003639e4:
    } while (pbVar8 < local_124);
  }
  *param_2 = (int)puVar9;
  param_2[1] = local_90;
  param_2[2] = uVar5;
  param_2[3] = uVar10;
  *(ushort *)(param_1 + 2) = auStack_114[1];
  *(undefined4 *)(param_1 + 4) = local_10c;
  *(undefined4 *)(param_1 + 8) = local_104;
  *(undefined4 *)(param_1 + 0xc) = local_fc;
  *(undefined4 *)(param_1 + 0x10) = local_110;
  *(undefined4 *)(param_1 + 0x14) = local_108;
  *(undefined4 *)(param_1 + 0x18) = local_100;
  *(undefined4 *)(param_1 + 0x1c) = local_f8;
  *(undefined4 *)(param_1 + 0x20) = local_e4;
  *(undefined4 *)(param_1 + 0x24) = local_bc;
  *(undefined4 *)(param_1 + 0x28) = local_f4;
  *(undefined4 *)(param_1 + 0x2c) = local_ec;
  *(undefined4 *)(param_1 + 0x30) = local_e0;
  *(undefined4 *)(param_1 + 0x34) = local_b8;
  *(undefined4 *)(param_1 + 0x38) = local_f0;
  *(undefined4 *)(param_1 + 0x3c) = local_e8;
  *(undefined4 *)(param_1 + 0x40) = local_dc;
  *(undefined4 *)(param_1 + 0x44) = local_d4;
  *(undefined4 *)(param_1 + 0x48) = local_b4;
  *(undefined4 *)(param_1 + 0x4c) = local_ac;
  *(undefined4 *)(param_1 + 0x50) = local_d8;
  *(undefined4 *)(param_1 + 0x54) = local_d0;
  *(undefined4 *)(param_1 + 0x58) = local_b0;
  *(undefined4 *)(param_1 + 0x5c) = local_a8;
  *(undefined4 *)(param_1 + 0x60) = local_cc;
  *(undefined4 *)(param_1 + 100) = local_c4;
  *(undefined4 *)(param_1 + 0x68) = local_a4;
  *(undefined4 *)(param_1 + 0x6c) = local_9c;
  *(undefined4 *)(param_1 + 0x70) = local_c8;
  *(undefined4 *)(param_1 + 0x74) = local_c0;
  *(undefined4 *)(param_1 + 0x78) = local_a0;
  *(undefined4 *)(param_1 + 0x7c) = local_98;
  return;
}
