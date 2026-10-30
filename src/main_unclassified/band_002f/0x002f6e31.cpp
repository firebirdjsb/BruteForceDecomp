/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9861EFCB87080A0B1527268857E7B5C68F46064C15E6872117BDB0C0D497DB5B
 * Entry: 0x002f6e31, Ghidra index: 10919, label: FUN_002f6e31
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

ushort * FUN_002f6e31(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  ushort uVar8;
  int *piVar9;
  ushort *puVar10;
  ushort *puVar11;
  int unaff_FS_OFFSET;
  bool bVar12;
  ushort *local_198;
  uint local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_17c;
  uint local_178;
  undefined4 *local_13c;
  int local_138;
  int *local_134;
  int local_130;
  ushort *local_12c;
  int local_128;
  int *local_124;
  undefined4 *local_120;
  ushort *local_11c;
  undefined4 *local_118;
  undefined4 *local_114;
  int *local_110;
  int *local_10c;
  byte *local_108;
  int local_104;
  uint local_100;
  int *local_fc;
  byte *local_f8;
  int local_f4;
  uint local_f0;
  int *local_ec;
  int *local_e8;
  int *local_e4;
  undefined4 *local_e0;
  ushort *local_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  int *local_d0;
  int *local_cc;
  byte *local_c8;
  int local_c4;
  uint local_c0;
  int *local_bc;
  ushort *local_b8;
  int *local_b4;
  undefined4 *local_b0;
  ushort *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  int *local_a0;
  int *local_9c;
  byte *local_98;
  int local_94;
  uint local_90;
  int *local_8c;
  ushort *local_88;
  uint local_84;
  int *local_80;
  int local_7c;
  int *local_78;
  int local_74;
  int *local_70;
  int local_6c;
  uint local_68;
  int *local_64;
  int *local_60;
  uint local_5c;
  uint *local_58;
  uint local_54;
  ushort *local_50;
  byte *local_4c;
  int local_48;
  uint local_44;
  int *local_40;
  int *local_3c;
  byte local_35;
  ushort *local_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  char local_21;
  int local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x2f6e40;
  local_20 = param_1;
  local_21 = 0;
  param_2 = param_2 | *(uint *)(param_1 + 0x18);
  uVar4 = param_3;
  if (param_3 == 0) {
    uVar4 = 1;
  }
  local_28 = uVar4 + 0x1f & 0xfffffff0;
  uVar4 = uVar4 + 0x1f >> 4;
  local_8 = 0;
  bVar12 = (param_2 & 1) == 0;
  local_2c = uVar4;
  if (bVar12) {
    RtlEnterCriticalSection(*(undefined4 *)(param_1 + 0x580));
  }
  local_21 = bVar12;
  if (0x7f < uVar4) {
    if (*(uint *)(param_1 + 0x1c) < uVar4) {
      if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
        local_130 = -0x3fffffdd;
      }
      else {
        local_134 = (int *)0x0;
        local_28 = local_28 + 0x20;
        local_130 = NtAllocateVirtualMemory
                              (&local_134,0,&local_28,~(param_2 << 0x14) & 0x800000 | 0x1000,4);
        if (-1 < local_130) {
          piVar9 = local_134;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar9 = 0;
            piVar9 = piVar9 + 1;
          }
          *(short *)(local_134 + 8) = (short)local_28 - (short)param_3;
          *(undefined1 *)((int)local_134 + 0x25) = 0xb;
          local_134[6] = local_28;
          local_134[7] = local_28;
          local_138 = param_1 + 0x58;
          local_13c = *(undefined4 **)(param_1 + 0x5c);
          *local_134 = local_138;
          local_134[1] = (int)local_13c;
          *local_13c = local_134;
          *(int **)(param_1 + 0x5c) = local_134;
          puVar10 = (ushort *)(local_134 + 0xc);
          local_12c = puVar10;
          goto LAB_002f7583;
        }
      }
    }
    else {
LAB_002f7008:
      local_30 = (int *)(param_1 + 0x180);
      local_70 = *(int **)(param_1 + 0x184);
      if ((local_30 != local_70) && (local_34 = (ushort *)(local_70 + -2), local_2c <= *local_34)) {
        for (local_70 = (int *)*local_30; local_30 != local_70; local_70 = (int *)*local_70) {
          local_34 = (ushort *)(local_70 + -2);
          if (local_2c <= *local_34) {
            iVar7 = *local_70;
            piVar9 = (int *)local_70[1];
            local_78 = piVar9;
            local_74 = iVar7;
            goto LAB_002f7072;
          }
        }
      }
      local_34 = (ushort *)FUN_002f65dc(param_1,local_28);
      if (local_34 != (ushort *)0x0) {
        iVar7 = *(int *)(local_34 + 4);
        piVar9 = *(int **)(local_34 + 6);
        local_80 = piVar9;
        local_7c = iVar7;
LAB_002f7072:
        *piVar9 = iVar7;
        *(int **)(iVar7 + 4) = piVar9;
        goto LAB_002f7077;
      }
      local_130 = -0x3fffffe9;
    }
    if ((param_2 & 4) != 0) {
      local_18c = 0xc0000017;
      local_184 = 0;
      local_17c = 1;
      local_188 = 0;
      local_178 = local_28;
      RtlRaiseException(&local_18c);
    }
    puVar10 = (ushort *)0x0;
    local_12c = puVar10;
    goto LAB_002f7583;
  }
  local_30 = (int *)(param_1 + 0x180 + uVar4 * 8);
  if ((int *)*local_30 == local_30) {
    local_54 = local_2c >> 5;
    puVar1 = (uint *)(param_1 + 0x160 + local_54 * 4);
    local_5c = ~((1 << ((byte)local_2c & 0x1f)) - 1U) & *puVar1;
    local_58 = puVar1 + 1;
    if (local_54 == 0) {
      if (local_5c == 0) {
        local_5c = *local_58;
        local_58 = puVar1 + 2;
        goto LAB_002f6f6b;
      }
      iVar7 = param_1 + 0x180;
    }
    else if (local_54 == 1) {
LAB_002f6f6b:
      if (local_5c == 0) {
        local_5c = *local_58;
        local_58 = local_58 + 1;
        goto LAB_002f6f82;
      }
      iVar7 = param_1 + 0x280;
    }
    else {
      if (local_54 == 2) {
LAB_002f6f82:
        if (local_5c != 0) {
          iVar7 = param_1 + 0x380;
          goto LAB_002f6fa3;
        }
        local_5c = *local_58;
        local_58 = local_58 + 1;
      }
      else if (local_54 != 3) goto LAB_002f7008;
      if (local_5c == 0) goto LAB_002f7008;
      iVar7 = param_1 + 0x480;
    }
LAB_002f6fa3:
    local_30 = (int *)iVar7;
    cVar3 = FUN_002f8bb0();
    local_30 = (int *)(iVar7 + cVar3 * 8);
    puVar5 = (undefined4 *)local_30[1];
    local_34 = (ushort *)(puVar5 + -2);
    local_60 = (int *)*puVar5;
    local_64 = (int *)puVar5[1];
    *local_64 = (int)local_60;
    local_60[1] = (int)local_64;
    if (local_60 == local_64) {
      local_68 = (uint)(*local_34 >> 3);
      local_6c = 1 << ((byte)*local_34 & 7);
      pbVar2 = (byte *)(local_68 + 0x160 + param_1);
      *pbVar2 = *pbVar2 ^ (byte)local_6c;
    }
LAB_002f7077:
    local_35 = *(byte *)((int)local_34 + 5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*local_34;
    *(undefined1 *)((int)local_34 + 5) = 1;
    local_84 = *local_34 - local_2c;
    *local_34 = (ushort)local_2c;
    *(char *)(local_34 + 3) = (char)local_28 - (char)param_3;
    *(undefined1 *)((int)local_34 + 7) = 0;
    local_50 = local_34;
    if (local_84 != 0) {
      if (local_84 == 1) {
        *local_34 = *local_34 + 1;
        *(char *)(local_34 + 3) = (char)local_34[3] + '\x10';
      }
      else {
        puVar10 = local_34 + local_2c * 8;
        *(byte *)((int)puVar10 + 5) = local_35;
        puVar10[1] = (ushort)local_2c;
        *(char *)(puVar10 + 2) = (char)local_34[2];
        uVar8 = (ushort)local_84;
        *puVar10 = uVar8;
        local_88 = puVar10;
        if ((local_35 & 0x10) == 0) {
          local_b8 = puVar10 + local_84 * 8;
          if ((*(byte *)((int)local_b8 + 5) & 1) != 0) {
            local_b8[1] = uVar8;
            *(byte *)((int)puVar10 + 5) = *(byte *)((int)puVar10 + 5) & 0x10;
            if (uVar8 < 0x80) {
              piVar9 = (int *)(param_1 + 0x180 + (local_84 & 0xffff) * 8);
              if ((int *)*piVar9 == piVar9) {
                local_c0 = (uint)(*puVar10 >> 3);
                local_c4 = 1 << ((byte)*puVar10 & 7);
                local_c8 = (byte *)(local_c0 + 0x160 + param_1);
                *local_c8 = *local_c8 | (byte)local_c4;
              }
              piVar6 = (int *)piVar9[1];
              local_d0 = piVar6;
              local_cc = piVar9;
              local_bc = piVar9;
              goto LAB_002f7390;
            }
            local_d4 = (undefined4 *)(param_1 + 0x180);
            for (puVar5 = (undefined4 *)*local_d4;
                (local_d4 != puVar5 && (local_dc = (ushort *)(puVar5 + -2), *local_dc < uVar8));
                puVar5 = (undefined4 *)*puVar5) {
            }
            piVar9 = (int *)puVar5[1];
            local_e4 = piVar9;
            local_e0 = puVar5;
            local_d8 = puVar5;
LAB_002f71a8:
            puVar11 = puVar10 + 4;
            *(undefined4 **)puVar11 = puVar5;
            *(int **)(puVar10 + 6) = piVar9;
            *piVar9 = (int)puVar11;
            puVar5[1] = puVar11;
            goto LAB_002f71b5;
          }
          *(byte *)((int)puVar10 + 5) = *(byte *)((int)local_b8 + 5);
          local_e8 = *(int **)(local_b8 + 4);
          local_ec = *(int **)(local_b8 + 6);
          *local_ec = (int)local_e8;
          local_e8[1] = (int)local_ec;
          if ((local_e8 == local_ec) && (uVar8 = *local_b8, uVar8 < 0x80)) {
            local_f0 = (uint)(uVar8 >> 3);
            local_f4 = 1 << ((byte)uVar8 & 7);
            local_f8 = (byte *)(local_f0 + 0x160 + param_1);
            *local_f8 = *local_f8 ^ (byte)local_f4;
          }
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*local_b8;
          local_84 = local_84 + *local_b8;
          if (local_84 < 0xff01) {
            uVar8 = (ushort)local_84;
            *puVar10 = uVar8;
            if ((*(byte *)((int)puVar10 + 5) & 0x10) == 0) {
              puVar10[local_84 * 8 + 1] = uVar8;
            }
            *(byte *)((int)puVar10 + 5) = *(byte *)((int)puVar10 + 5) & 0x10;
            if (uVar8 < 0x80) {
              piVar9 = (int *)(param_1 + 0x180 + (local_84 & 0xffff) * 8);
              if ((int *)*piVar9 == piVar9) {
                local_100 = (uint)(*puVar10 >> 3);
                local_104 = 1 << ((byte)*puVar10 & 7);
                local_108 = (byte *)(local_100 + 0x160 + param_1);
                *local_108 = *local_108 | (byte)local_104;
              }
              piVar6 = (int *)piVar9[1];
              local_110 = piVar6;
              local_10c = piVar9;
              local_fc = piVar9;
              goto LAB_002f7390;
            }
            local_114 = (undefined4 *)(param_1 + 0x180);
            for (puVar5 = (undefined4 *)*local_114;
                (local_114 != puVar5 && (local_11c = (ushort *)(puVar5 + -2), *local_11c < uVar8));
                puVar5 = (undefined4 *)*puVar5) {
            }
            piVar9 = (int *)puVar5[1];
            local_124 = piVar9;
            local_120 = puVar5;
            local_118 = puVar5;
            goto LAB_002f71a8;
          }
          FUN_002f6395(param_1,puVar10,local_84);
        }
        else {
          *(byte *)((int)puVar10 + 5) = *(byte *)((int)puVar10 + 5) & 0x10;
          if (0x7f < uVar8) {
            local_a4 = (undefined4 *)(param_1 + 0x180);
            for (puVar5 = (undefined4 *)*local_a4;
                (local_a4 != puVar5 && (local_ac = (ushort *)(puVar5 + -2), *local_ac < uVar8));
                puVar5 = (undefined4 *)*puVar5) {
            }
            piVar9 = (int *)puVar5[1];
            local_b4 = piVar9;
            local_b0 = puVar5;
            local_a8 = puVar5;
            goto LAB_002f71a8;
          }
          piVar9 = (int *)(param_1 + 0x180 + (local_84 & 0xffff) * 8);
          if ((int *)*piVar9 == piVar9) {
            local_90 = (uint)(*puVar10 >> 3);
            local_94 = 1 << ((byte)*puVar10 & 7);
            local_98 = (byte *)(local_90 + 0x160 + param_1);
            *local_98 = *local_98 | (byte)local_94;
          }
          piVar6 = (int *)piVar9[1];
          local_a0 = piVar6;
          local_9c = piVar9;
          local_8c = piVar9;
LAB_002f7390:
          puVar11 = puVar10 + 4;
          *(int **)puVar11 = piVar9;
          *(int **)(puVar10 + 6) = piVar6;
          *piVar6 = (int)puVar11;
          piVar9[1] = (int)puVar11;
LAB_002f71b5:
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_84;
        }
        local_35 = 0;
        if ((*(byte *)((int)puVar10 + 5) & 0x10) != 0) {
          local_128 = *(int *)(param_1 + 0x60 + (uint)(byte)puVar10[2] * 4);
          *(ushort **)(local_128 + 0x40) = puVar10;
        }
      }
    }
    if ((local_35 & 0x10) != 0) {
      *(byte *)((int)local_50 + 5) = *(byte *)((int)local_50 + 5) | 0x10;
    }
  }
  else {
    puVar5 = (undefined4 *)local_30[1];
    local_50 = (ushort *)(puVar5 + -2);
    local_35 = *(byte *)((int)puVar5 + -3);
    local_3c = (int *)*puVar5;
    local_40 = (int *)puVar5[1];
    *local_40 = (int)local_3c;
    local_3c[1] = (int)local_40;
    if (local_3c == local_40) {
      local_44 = (uint)(*local_50 >> 3);
      local_48 = 1 << ((byte)*local_50 & 7);
      local_4c = (byte *)(local_44 + 0x160 + param_1);
      *local_4c = *local_4c ^ (byte)local_48;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - local_2c;
    *(byte *)((int)puVar5 + -3) = local_35 & 0x10 | 1;
    *(char *)((int)puVar5 + -2) = (char)local_28 - (char)param_3;
    *(undefined1 *)((int)puVar5 + -1) = 0;
    local_34 = local_50;
  }
  puVar10 = local_50 + 8;
  local_12c = puVar10;
  if (local_21 != '\0') {
    RtlLeaveCriticalSection(*(undefined4 *)(param_1 + 0x580));
    local_21 = '\0';
  }
  if ((param_2 & 8) != 0) {
    puVar11 = puVar10;
    for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 2;
    }
    for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (ushort *)((int)puVar11 + 1);
    }
  }
LAB_002f7583:
  local_8 = 0xffffffff;
  FUN_002f75d5();
  if (puVar10 != (ushort *)0x0) {
    local_194 = param_3;
    local_190 = 0;
    iVar7 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x20) + 0x250);
    if (iVar7 != 0) {
      local_198 = puVar10;
      (**(code **)(iVar7 + 0x14))(10,&local_198);
    }
  }
  return puVar10;
}
