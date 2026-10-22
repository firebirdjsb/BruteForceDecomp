/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2526D13E2C418C595A0CBC5EE9C90B552B27EA77432711179DF0D19E45311AD5
 * Entry: 0x002ee515, Ghidra index: 10702, label: FUN_002ee515
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387320;
extern uint32_t DAT_003b6c30;
extern uint32_t DAT_003b6c34;
extern uint32_t *PTR_DAT_003b6c3c;
extern uint32_t PTR_FUN_003b7198;
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int FUN_002ee515(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  longlong lVar16;
  undefined2 local_1d8 [2];
  byte local_1d4;
  undefined1 local_1d3;
  uint local_1d0;
  byte *local_1cc;
  char local_1c8;
  char local_1c7 [351];
  uint local_68;
  byte *local_64;
  undefined4 *local_60;
  undefined8 local_5c;
  int local_54;
  char local_4f;
  char local_4e;
  char local_4d;
  char local_4c;
  char local_4b;
  char local_4a;
  byte local_49;
  int local_48;
  int local_44;
  int local_40;
  byte local_39;
  int local_38;
  int local_34;
  int local_30;
  char local_29;
  uint local_28;
  int local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00387320;
  uStack_c = 0x2ee524;
  local_20 = (undefined4 *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_29 = '\0';
  local_30 = 0;
  local_34 = 0;
LAB_002ee53b:
  do {
    bVar7 = *param_2;
    lVar16 = local_5c;
    if (bVar7 == 0) {
LAB_002ef07f:
      if (local_24 == 1) {
        local_5c = lVar16;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_20);
      }
      if (((local_28 == 0xffffffff) && (local_34 == 0)) && (local_29 == '\0')) {
        local_34 = -1;
      }
      return local_34;
    }
    if (DAT_003b6c30 < 2) {
      uVar2 = (byte)PTR_DAT_003b6c3c[(uint)bVar7 * 2] & 8;
    }
    else {
      uVar2 = FUN_002eba73((uint)bVar7,8);
    }
    iVar10 = 0;
    if (uVar2 == 0) {
      if (*param_2 == 0x25) {
        local_38 = 0;
        local_39 = 0;
        local_40 = 0;
        local_44 = 0;
        local_48 = 0;
        local_49 = 0;
        local_4a = '\0';
        local_4b = '\0';
        local_4c = '\0';
        local_4d = '\0';
        local_4e = '\0';
        local_4f = '\x01';
        local_54 = 0;
        pbVar9 = param_2;
        do {
          pbVar13 = pbVar9 + 1;
          uVar2 = (uint)*pbVar13;
          if (DAT_003b6c30 < 2) {
            uVar4 = (byte)PTR_DAT_003b6c3c[uVar2 * 2] & 4;
          }
          else {
            uVar4 = FUN_002eba73(uVar2,4);
          }
          param_2 = pbVar13;
          if (uVar4 == 0) {
            if (uVar2 < 0x4f) {
              if (uVar2 != 0x4e) {
                if (uVar2 == 0x2a) {
                  local_4b = local_4b + '\x01';
                }
                else if (uVar2 != 0x46) {
                  if (uVar2 == 0x49) {
                    bVar7 = pbVar9[2];
                    if ((bVar7 == 0x36) && (pbVar9[3] == 0x34)) {
                      local_54 = local_54 + 1;
                      local_5c = 0;
                      param_2 = pbVar9 + 3;
                    }
                    else if (((bVar7 != 0x33) || (param_2 = pbVar9 + 3, *param_2 != 0x32)) &&
                            ((((param_2 = pbVar13, bVar7 != 100 && (bVar7 != 0x69)) &&
                              (bVar7 != 0x6f)) && ((bVar7 != 0x78 && (bVar7 != 0x58))))))
                    goto LAB_002ee6b0;
                  }
                  else if (uVar2 == 0x4c) {
                    local_4f = local_4f + '\x01';
                  }
                  else {
LAB_002ee6b0:
                    local_4c = local_4c + '\x01';
                    param_2 = pbVar13;
                  }
                }
              }
            }
            else if (uVar2 == 0x68) {
              local_4f = local_4f + -1;
              local_4e = local_4e + -1;
            }
            else {
              if (uVar2 == 0x6c) {
                local_4f = local_4f + '\x01';
              }
              else if (uVar2 != 0x77) goto LAB_002ee6b0;
              local_4e = local_4e + '\x01';
            }
          }
          else {
            local_44 = local_44 + 1;
            iVar10 = (uVar2 - 0x30) + iVar10 * 10;
          }
          pbVar9 = param_2;
        } while (local_4c == '\0');
        if (local_4b == '\0') {
          local_60 = param_3;
          local_64 = (byte *)*param_3;
          param_3 = param_3 + 1;
        }
        pbVar9 = local_64;
        local_4c = '\0';
        if (local_4e == '\0') {
          if ((*param_2 == 0x53) || (*param_2 == 0x43)) {
            local_4e = '\x01';
          }
          else {
            local_4e = -1;
          }
        }
        local_68 = *param_2 | 0x20;
        local_48 = iVar10;
        uVar2 = local_28;
        lVar16 = local_5c;
        if (local_68 != 0x6e) {
          if ((local_68 == 99) || (local_68 == 0x7b)) {
            local_30 = local_30 + 1;
            uVar2 = __inc();
            lVar16 = local_5c;
          }
          else {
            do {
              local_30 = local_30 + 1;
              uVar2 = __inc();
              iVar10 = _isspace(uVar2);
              lVar16 = local_5c;
            } while (iVar10 != 0);
          }
        }
        local_28 = uVar2;
        uVar2 = local_28;
        if ((local_44 != 0) && (local_48 == 0)) {
LAB_002ef04f:
          if (uVar2 != 0xffffffff) {
            local_5c = lVar16;
            FID_conflict__ungetc(local_28,param_1);
            lVar16 = local_5c;
          }
          goto LAB_002ef07f;
        }
        local_5c = lVar16;
        if ((int)local_68 < 0x70) {
          if (local_68 == 0x6f) {
LAB_002eed58:
            if (local_28 == 0x2d) {
              local_4a = '\x01';
            }
            else if (local_28 != 0x2b) goto LAB_002eed89;
            local_48 = local_48 + -1;
            if ((local_48 == 0) && (local_44 != 0)) {
              local_4c = '\x01';
            }
            else {
              local_30 = local_30 + 1;
              local_28 = __inc();
            }
            goto LAB_002eed89;
          }
          if (local_68 != 99) {
            if (local_68 == 100) goto LAB_002eed58;
            if ((int)local_68 < 0x65) {
LAB_002eeaf6:
              if (*param_2 != local_28) goto LAB_002ef04f;
              local_29 = local_29 + -1;
              if (local_4b == '\0') {
                param_3 = local_60;
              }
              goto LAB_002eefef;
            }
            if (0x67 < (int)local_68) {
              if (local_68 == 0x69) {
                local_68 = 100;
                goto LAB_002ee7c3;
              }
              if (local_68 != 0x6e) goto LAB_002eeaf6;
              iVar10 = local_30;
              if (local_4b != '\0') goto LAB_002eefef;
              goto LAB_002eefcf;
            }
            pcVar11 = &local_1c8;
            if (local_28 == 0x2d) {
              local_1c8 = '-';
              pcVar11 = local_1c7;
LAB_002ee7f9:
              local_48 = local_48 + -1;
              local_30 = local_30 + 1;
              local_28 = __inc();
              lVar16 = local_5c;
            }
            else if (local_28 == 0x2b) goto LAB_002ee7f9;
            local_5c = lVar16;
            if ((local_44 == 0) || (0x15d < local_48)) {
              local_48 = 0x15d;
            }
            while( true ) {
              uVar2 = local_28;
              if (DAT_003b6c30 < 2) {
                uVar4 = (byte)PTR_DAT_003b6c3c[local_28 * 2] & 4;
              }
              else {
                uVar4 = FUN_002eba73(local_28,4);
              }
              if ((uVar4 == 0) ||
                 (iVar10 = local_48 + -1, bVar15 = local_48 == 0, local_48 = iVar10, bVar15)) break;
              local_40 = local_40 + 1;
              *pcVar11 = (char)uVar2;
              pcVar11 = pcVar11 + 1;
              local_30 = local_30 + 1;
              local_28 = __inc();
            }
            if ((DAT_003b6c34 == (char)uVar2) &&
               (iVar10 = local_48 + -1, bVar15 = local_48 != 0, local_48 = iVar10, bVar15)) {
              local_30 = local_30 + 1;
              uVar2 = __inc();
              *pcVar11 = DAT_003b6c34;
              while( true ) {
                pcVar11 = pcVar11 + 1;
                local_28 = uVar2;
                if (DAT_003b6c30 < 2) {
                  uVar4 = (byte)PTR_DAT_003b6c3c[uVar2 * 2] & 4;
                }
                else {
                  uVar4 = FUN_002eba73(uVar2,4);
                }
                if ((uVar4 == 0) ||
                   (iVar10 = local_48 + -1, bVar15 = local_48 == 0, local_48 = iVar10, bVar15))
                break;
                local_40 = local_40 + 1;
                *pcVar11 = (char)uVar2;
                local_30 = local_30 + 1;
                uVar2 = __inc();
              }
            }
            pcVar12 = pcVar11;
            if ((local_40 != 0) &&
               (((uVar2 == 0x65 || (uVar2 == 0x45)) &&
                (iVar10 = local_48 + -1, bVar15 = local_48 != 0, local_48 = iVar10, bVar15)))) {
              *pcVar11 = 'e';
              pcVar12 = pcVar11 + 1;
              local_30 = local_30 + 1;
              uVar2 = __inc();
              local_28 = uVar2;
              if (uVar2 == 0x2d) {
                *pcVar12 = '-';
                pcVar12 = pcVar11 + 2;
LAB_002ee91f:
                bVar15 = local_48 != 0;
                local_48 = local_48 + -1;
                if (bVar15) goto LAB_002ee92e;
                local_48 = 0;
              }
              else if (uVar2 == 0x2b) goto LAB_002ee91f;
              while( true ) {
                if (DAT_003b6c30 < 2) {
                  uVar4 = (byte)PTR_DAT_003b6c3c[uVar2 * 2] & 4;
                }
                else {
                  uVar4 = FUN_002eba73(uVar2,4);
                }
                if ((uVar4 == 0) ||
                   (iVar10 = local_48 + -1, bVar15 = local_48 == 0, local_48 = iVar10, bVar15))
                break;
                local_40 = local_40 + 1;
                *pcVar12 = (char)uVar2;
                pcVar12 = pcVar12 + 1;
LAB_002ee92e:
                local_30 = local_30 + 1;
                uVar2 = __inc();
                local_28 = uVar2;
              }
            }
            local_30 = local_30 + -1;
            lVar16 = local_5c;
            if (uVar2 != 0xffffffff) {
              FID_conflict__ungetc(uVar2,param_1);
              lVar16 = local_5c;
            }
            if (local_40 != 0) {
              if (local_4b == '\0') {
                local_34 = local_34 + 1;
                local_5c = lVar16;
                *pcVar12 = '\0';
                (*(code *)PTR_FUN_003b7198)(local_4f + -1,local_64,&local_1c8);
                lVar16 = local_5c;
              }
              goto LAB_002eefef;
            }
            goto LAB_002ef07f;
          }
          if (local_44 == 0) {
            local_44 = 1;
            local_48 = local_48 + 1;
          }
LAB_002ee9cb:
          if ('\0' < local_4e) {
            local_4d = '\x01';
          }
LAB_002ee9d5:
          pbVar9 = local_64;
          local_30 = local_30 + -1;
          pbVar13 = pbVar9;
          local_5c = lVar16;
          if (local_28 != 0xffffffff) {
            FID_conflict__ungetc(local_28,param_1);
          }
          while( true ) {
            if ((local_44 != 0) &&
               (iVar10 = local_48 + -1, bVar15 = local_48 == 0, local_48 = iVar10, lVar16 = local_5c
               , bVar15)) goto LAB_002eed1b;
            local_30 = local_30 + 1;
            local_28 = __inc();
            if ((local_28 == 0xffffffff) ||
               ((bVar7 = (byte)local_28, local_68 != 99 &&
                (((local_68 != 0x73 ||
                  (((8 < (int)local_28 && ((int)local_28 < 0xe)) || (local_28 == 0x20)))) &&
                 ((local_68 != 0x7b ||
                  (((int)(char)(*(byte *)(((int)local_28 >> 3) + (int)local_20) ^ local_49) &
                   1 << (bVar7 & 7)) == 0)))))))) break;
            if (local_4b == '\0') {
              if (local_4d == '\0') {
                *pbVar13 = bVar7;
                pbVar13 = pbVar13 + 1;
                local_64 = pbVar13;
              }
              else {
                local_1d4 = bVar7;
                if ((PTR_DAT_003b6c3c[(local_28 & 0xff) * 2 + 1] & 0x80) != 0) {
                  local_30 = local_30 + 1;
                  local_1d3 = __inc();
                }
                FUN_002f0cf0(local_1d8,&local_1d4,DAT_003b6c30);
                *(undefined2 *)pbVar13 = local_1d8[0];
                pbVar13 = pbVar13 + 2;
                local_64 = pbVar13;
              }
            }
            else {
              pbVar9 = pbVar9 + 1;
            }
          }
          local_30 = local_30 + -1;
          lVar16 = local_5c;
          if (local_28 != 0xffffffff) {
            FID_conflict__ungetc(local_28,param_1);
            lVar16 = local_5c;
          }
LAB_002eed1b:
          if (pbVar9 == pbVar13) goto LAB_002ef07f;
          if ((local_4b == '\0') && (local_34 = local_34 + 1, local_68 != 99)) {
            if (local_4d == '\0') {
              *local_64 = 0;
            }
            else {
              local_64[0] = 0;
              local_64[1] = 0;
            }
          }
        }
        else {
          if (local_68 == 0x70) {
            local_4f = '\x01';
            goto LAB_002eed58;
          }
          if (local_68 == 0x73) goto LAB_002ee9cb;
          if (local_68 == 0x75) goto LAB_002eed58;
          if (local_68 != 0x78) {
            if (local_68 != 0x7b) goto LAB_002eeaf6;
            if ('\0' < local_4e) {
              local_4d = '\x01';
            }
            pbVar13 = param_2 + 1;
            pbVar9 = pbVar13;
            if (*pbVar13 == 0x5e) {
              pbVar9 = param_2 + 2;
              local_49 = 0xff;
            }
            local_1cc = pbVar9;
            if (local_20 == (undefined4 *)0x0) {
              local_8 = (undefined *)0x0;
              FUN_002ebea0();
              local_8 = (undefined *)0xffffffff;
              local_20 = (undefined4 *)&stack0xfffffe1c;
              local_1c = &stack0xfffffe1c;
            }
            puVar8 = local_20;
            puVar14 = local_20;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = 0;
              puVar14 = puVar14 + 1;
            }
            bVar7 = local_39;
            lVar16 = local_5c;
            if ((local_68 == 0x7b) && (*pbVar9 == 0x5d)) {
              *(undefined1 *)((int)local_20 + 0xb) = 0x20;
              pbVar9 = pbVar9 + 1;
              bVar7 = 0x5d;
              lVar16 = local_5c;
            }
            while (bVar6 = *pbVar9, bVar6 != 0x5d) {
              if (((bVar6 == 0x2d) && (bVar7 != 0)) && (bVar1 = pbVar9[1], bVar1 != 0x5d)) {
                bVar6 = bVar1;
                if (bVar7 < bVar1) {
                  bVar6 = bVar7;
                  bVar7 = bVar1;
                }
                if (bVar6 <= bVar7) {
                  uVar2 = (uint)bVar6;
                  local_1d0 = (uint)(byte)((bVar7 - bVar6) + 1);
                  do {
                    pbVar5 = (byte *)((uVar2 >> 3) + (int)puVar8);
                    *pbVar5 = *pbVar5 | '\x01' << ((byte)uVar2 & 7);
                    uVar2 = uVar2 + 1;
                    local_1d0 = local_1d0 - 1;
                  } while (local_1d0 != 0);
                }
                pbVar9 = pbVar9 + 2;
                bVar7 = 0;
              }
              else {
                pbVar5 = (byte *)((uint)(bVar6 >> 3) + (int)puVar8);
                *pbVar5 = *pbVar5 | '\x01' << (bVar6 & 7);
                puVar8 = local_20;
                pbVar9 = pbVar9 + 1;
                bVar7 = bVar6;
              }
            }
            param_2 = pbVar13;
            if (local_68 == 0x7b) {
              param_2 = pbVar9;
            }
            goto LAB_002ee9d5;
          }
LAB_002ee7c3:
          if (local_28 == 0x2d) {
            local_4a = '\x01';
LAB_002eec49:
            local_48 = local_48 + -1;
            if ((local_48 == 0) && (local_44 != 0)) {
              local_4c = '\x01';
            }
            else {
              local_30 = local_30 + 1;
              local_28 = __inc();
              lVar16 = local_5c;
            }
          }
          else if (local_28 == 0x2b) goto LAB_002eec49;
          local_5c = lVar16;
          if (local_28 == 0x30) {
            local_30 = local_30 + 1;
            local_28 = __inc();
            if (((char)local_28 == 'x') || ((char)local_28 == 'X')) {
              local_30 = local_30 + 1;
              local_28 = __inc();
              if ((local_44 != 0) && (local_48 = local_48 + -2, local_48 < 1)) {
                local_4c = local_4c + '\x01';
              }
              local_68 = 0x78;
            }
            else {
              local_40 = 1;
              if (local_68 == 0x78) {
                local_30 = local_30 + -1;
                if (local_28 != 0xffffffff) {
                  FID_conflict__ungetc(local_28,param_1);
                }
                local_28 = 0x30;
              }
              else {
                if ((local_44 != 0) && (local_48 = local_48 + -1, local_48 == 0)) {
                  local_4c = local_4c + '\x01';
                }
                local_68 = 0x6f;
              }
            }
          }
LAB_002eed89:
          uVar2 = local_28;
          lVar16 = local_5c;
          if (local_54 == 0) {
            while (local_4c == '\0') {
              local_5c = lVar16;
              if ((local_68 == 0x78) || (local_68 == 0x70)) {
                if (DAT_003b6c30 < 2) {
                  uVar4 = (byte)PTR_DAT_003b6c3c[uVar2 * 2] & 0x80;
                }
                else {
                  uVar4 = FUN_002eba73(uVar2,0x80);
                  lVar16 = local_5c;
                }
                if (uVar4 != 0) {
                  local_38 = local_38 << 4;
                  local_5c = lVar16;
                  uVar2 = __hextodec();
                  goto LAB_002eef53;
                }
LAB_002eef50:
                local_4c = local_4c + '\x01';
                local_5c = lVar16;
              }
              else {
                if (DAT_003b6c30 < 2) {
                  uVar4 = (byte)PTR_DAT_003b6c3c[uVar2 * 2] & 4;
                }
                else {
                  uVar4 = FUN_002eba73(uVar2,4);
                  lVar16 = local_5c;
                }
                if (uVar4 == 0) goto LAB_002eef50;
                local_5c = lVar16;
                if (local_68 == 0x6f) {
                  if (0x37 < (int)uVar2) goto LAB_002eef50;
                  local_38 = local_38 << 3;
                }
                else {
                  local_38 = local_38 * 10;
                }
              }
LAB_002eef53:
              lVar16 = local_5c;
              if (local_4c == '\0') {
                local_40 = local_40 + 1;
                local_38 = local_38 + -0x30 + uVar2;
                if ((local_44 == 0) || (local_48 = local_48 + -1, local_48 != 0)) {
                  local_30 = local_30 + 1;
                  uVar2 = __inc();
                  lVar16 = local_5c;
                }
                else {
                  local_4c = '\x01';
                }
              }
              else {
                local_30 = local_30 + -1;
                if (uVar2 != 0xffffffff) {
                  FID_conflict__ungetc(uVar2,param_1);
                  lVar16 = local_5c;
                }
              }
            }
            local_28 = uVar2;
            if (local_4a != '\0') {
              local_38 = -local_38;
            }
          }
          else {
            while (local_4c == '\0') {
              local_5c = lVar16;
              if ((local_68 == 0x78) || (local_68 == 0x70)) {
                if (DAT_003b6c30 < 2) {
                  uVar4 = (byte)PTR_DAT_003b6c3c[uVar2 * 2] & 0x80;
                }
                else {
                  uVar4 = FUN_002eba73(uVar2,0x80);
                  lVar16 = local_5c;
                }
                if (uVar4 != 0) {
                  local_5c = lVar16 << 4;
                  uVar2 = __hextodec();
                  goto LAB_002eee4e;
                }
LAB_002eee4b:
                local_4c = local_4c + '\x01';
                local_5c = lVar16;
              }
              else {
                if (DAT_003b6c30 < 2) {
                  uVar4 = (byte)PTR_DAT_003b6c3c[uVar2 * 2] & 4;
                }
                else {
                  uVar4 = FUN_002eba73(uVar2,4);
                  lVar16 = local_5c;
                }
                if (uVar4 == 0) goto LAB_002eee4b;
                if (local_68 == 0x6f) {
                  if (0x37 < (int)uVar2) goto LAB_002eee4b;
                  local_5c = lVar16 << 3;
                }
                else {
                  local_5c = lVar16;
                  lVar16 = __allmul(lVar16,10,0);
                  local_5c = lVar16;
                }
              }
LAB_002eee4e:
              if (local_4c == '\0') {
                local_40 = local_40 + 1;
                if ((local_44 == 0) || (local_48 = local_48 + -1, local_48 != 0)) {
                  local_30 = local_30 + 1;
                  local_5c = local_5c + (int)(uVar2 - 0x30);
                  uVar2 = __inc();
                  lVar16 = local_5c;
                }
                else {
                  local_4c = '\x01';
                  lVar16 = local_5c + (int)(uVar2 - 0x30);
                }
              }
              else {
                local_30 = local_30 + -1;
                lVar16 = local_5c;
                if (uVar2 != 0xffffffff) {
                  FID_conflict__ungetc(uVar2,param_1);
                  lVar16 = local_5c;
                }
              }
            }
            local_5c._4_4_ = (int)((ulonglong)lVar16 >> 0x20);
            local_5c._0_4_ = (int)lVar16;
            local_28 = uVar2;
            if (local_4a != '\0') {
              lVar16 = CONCAT44(-(local_5c._4_4_ + (uint)((int)local_5c != 0)),-(int)local_5c);
            }
          }
          if (local_68 == 0x46) {
            local_40 = 0;
          }
          if (local_40 == 0) goto LAB_002ef07f;
          if (local_4b == '\0') {
            local_34 = local_34 + 1;
            iVar10 = local_38;
            pbVar9 = local_64;
LAB_002eefcf:
            if (local_54 == 0) {
              if (local_4f == '\0') {
                *(short *)pbVar9 = (short)iVar10;
              }
              else {
                *(int *)pbVar9 = iVar10;
              }
            }
            else {
              *(longlong *)pbVar9 = lVar16;
            }
          }
        }
LAB_002eefef:
        local_29 = local_29 + '\x01';
        pbVar9 = param_2 + 1;
        local_5c = lVar16;
      }
      else {
        local_30 = local_30 + 1;
        uVar2 = __inc();
        local_28 = uVar2;
        lVar16 = local_5c;
        if (*param_2 != uVar2) goto LAB_002ef04f;
        pbVar9 = param_2 + 1;
        if ((PTR_DAT_003b6c3c[(uVar2 & 0xff) * 2 + 1] & 0x80) != 0) {
          local_30 = local_30 + 1;
          uVar4 = __inc();
          if (param_2[1] != uVar4) {
            lVar16 = local_5c;
            if (uVar4 != 0xffffffff) {
              FID_conflict__ungetc(uVar4,param_1);
              lVar16 = local_5c;
            }
            goto LAB_002ef04f;
          }
          local_30 = local_30 + -1;
          pbVar9 = param_2 + 2;
        }
      }
      param_2 = pbVar9;
      if ((local_28 == 0xffffffff) &&
         ((lVar16 = local_5c, *param_2 != 0x25 || (param_2[1] != 0x6e)))) goto LAB_002ef07f;
      goto LAB_002ee53b;
    }
    local_30 = local_30 + -1;
    do {
      local_30 = local_30 + 1;
      iVar10 = __inc();
      iVar3 = _isspace(iVar10);
    } while (iVar3 != 0);
    if (iVar10 != -1) {
      FID_conflict__ungetc(iVar10,param_1);
    }
    do {
      param_2 = param_2 + 1;
      iVar10 = _isspace((uint)*param_2);
    } while (iVar10 != 0);
  } while( true );
}
