/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30B05659EF7350898ABCBD1EF93DAF671EFDAEA1016CDD86AA7E48997F4F4681
 * Entry: 0x002edbde, Ghidra index: 10693, label: FUN_002edbde
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387288;
extern uint32_t DAT_003872a8;
extern uint32_t DAT_00387304;
extern uint32_t DAT_0038730c;
extern uint32_t *PTR_DAT_003b6c3c;
extern uint32_t PTR_FUN_003b7190;
extern uint32_t PTR_FUN_003b7194;
extern uint32_t PTR_FUN_003b719c;
extern uint32_t switchD_002edc4b_caseD_0[];
int FUN_002edbde(undefined4 param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  short sVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  char *pcVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  short *psVar12;
  bool bVar13;
  longlong lVar14;
  short local_254 [255];
  undefined2 local_55;
  uint local_4c;
  uint local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  short *local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined1 local_1c;
  char local_1b;
  int local_18;
  int local_14;
  short *local_10;
  uint local_c;
  uint local_8;
  
  local_38 = 0;
  bVar10 = *param_2;
  local_14 = 0;
  local_18 = 0;
  local_2c = (short *)0x0;
  pbVar2 = param_2;
  puVar3 = param_3;
  do {
    if ((bVar10 == 0) || (param_2 = pbVar2 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar10 < ' ') || ('x' < (char)bVar10)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (int)(char)(&DAT_00387288)[(char)bVar10] & 0xf;
    }
    iVar11 = uVar6 * 8 + local_38;
    local_38 = (int)(char)(&DAT_003872a8)[iVar11] >> 4;
    param_3 = puVar3;
    switch((int)(char)(&DAT_003872a8)[iVar11] >> 4) {
    case 0:
switchD_002edc4b_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_003b6c3c[(uint)bVar10 * 2 + 1] & 0x80) != 0) {
        _write_char();
        param_2 = pbVar2 + 2;
      }
      _write_char();
      break;
    case 1:
      local_c = 0xffffffff;
      local_3c = 0;
      local_34 = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar10 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar10 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar10 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar10 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar10 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar10 == 0x2a) {
        local_24 = *puVar3;
        param_3 = puVar3 + 1;
        if ((int)local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar10 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_c = 0;
      break;
    case 5:
      if (bVar10 == 0x2a) {
        local_c = *puVar3;
        param_3 = puVar3 + 1;
        if ((int)local_c < 0) {
          local_c = 0xffffffff;
        }
      }
      else {
        local_c = (char)bVar10 + -0x30 + local_c * 10;
      }
      break;
    case 6:
      if (bVar10 == 0x49) {
        bVar1 = *param_2;
        if ((bVar1 == 0x36) && (pbVar2[2] == 0x34)) {
          param_2 = pbVar2 + 3;
          local_8 = local_8 | 0x8000;
        }
        else if ((bVar1 == 0x33) && (pbVar2[2] == 0x32)) {
          param_2 = pbVar2 + 3;
          local_8 = local_8 & 0xffff7fff;
        }
        else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                 ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
          local_38 = 0;
          goto switchD_002edc4b_caseD_0;
        }
      }
      else if (bVar10 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar10 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar10 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      if ((char)bVar10 < 'h') {
        if ((char)bVar10 < 'e') {
          if ((char)bVar10 < 'Y') {
            if (bVar10 != 0x58) {
              if (bVar10 == 0x43) {
                if ((local_8 & 0x830) == 0) {
                  local_8 = local_8 | 0x800;
                }
                goto LAB_002edec8;
              }
              if ((bVar10 != 0x45) && (bVar10 != 0x47)) {
                if (bVar10 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_002ede4f;
                }
                goto LAB_002ee22e;
              }
              local_3c = 1;
              bVar10 = bVar10 + 0x20;
              goto LAB_002ede99;
            }
LAB_002ee0e6:
            local_30 = 7;
LAB_002ee0e9:
            local_14 = 0x10;
            if ((local_8 & 0x80) != 0) {
              local_1c = 0x30;
              local_1b = (char)local_30 + 'Q';
              local_20 = 2;
            }
            goto LAB_002edf16;
          }
          if (bVar10 == 0x5a) {
            param_3 = puVar3 + 1;
            psVar12 = (short *)*puVar3;
            if ((psVar12 == (short *)0x0) ||
               (local_10 = *(short **)(psVar12 + 2), local_10 == (short *)0x0)) {
              psVar12 = (short *)&DAT_00387304;
              local_10 = (short *)&DAT_00387304;
              pcVar8 = "null)";
              do {
                sVar4 = *psVar12;
                psVar12 = (short *)((int)psVar12 + 1);
              } while ((char)sVar4 != '\0');
              goto LAB_002ee05f;
            }
            local_14 = (int)*psVar12;
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
            }
            else {
              local_14 = local_14 / 2;
              local_28 = 1;
            }
          }
          else if (bVar10 == 99) {
LAB_002edec8:
            if ((local_8 & 0x810) == 0) {
              ((uint8_t *)&local_254[0])[0] = (uint8_t)*puVar3;
              local_14 = 1;
            }
            else {
              local_14 = FUN_002f0dc5(local_254,(int)(short)(ushort)*puVar3);
              if (local_14 < 0) {
                local_34 = 1;
              }
            }
            param_3 = puVar3 + 1;
            local_10 = local_254;
          }
          else if (bVar10 == 100) goto LAB_002edf0b;
        }
        else {
LAB_002ede99:
          local_8 = local_8 | 0x40;
          psVar12 = local_254;
          psVar5 = local_254;
          if ((int)local_c < 0) {
            local_c = 6;
          }
          else if (local_c == 0) {
            if (bVar10 == 0x67) {
              local_c = 1;
            }
          }
          else {
            if (0x200 < (int)local_c) {
              local_c = 0x200;
            }
            if ((0xa3 < (int)local_c) &&
               (local_10 = local_254, local_2c = (short *)thunk_FUN_00237ea0(local_c + 0x15d),
               psVar12 = local_2c, psVar5 = local_2c, local_2c == (short *)0x0)) {
              local_c = 0xa3;
              psVar12 = local_254;
              psVar5 = local_10;
            }
          }
          local_10 = psVar5;
          local_4c = *puVar3;
          param_3 = puVar3 + 2;
          local_48 = puVar3[1];
          (*(code *)PTR_FUN_003b7190)(&local_4c,psVar12,(int)(char)bVar10,local_c,local_3c);
          uVar6 = local_8 & 0x80;
          if ((uVar6 != 0) && (local_c == 0)) {
            (*(code *)PTR_FUN_003b719c)(psVar12);
          }
          if ((bVar10 == 0x67) && (uVar6 == 0)) {
            (*(code *)PTR_FUN_003b7194)(psVar12);
          }
          if ((char)*psVar12 == '-') {
            local_8 = local_8 | 0x100;
            psVar12 = (short *)((int)psVar12 + 1);
            local_10 = psVar12;
          }
          pcVar8 = (char *)((int)psVar12 + 1);
          do {
            sVar4 = *psVar12;
            psVar12 = (short *)((int)psVar12 + 1);
          } while ((char)sVar4 != '\0');
LAB_002ee05f:
          local_14 = (int)psVar12 - (int)pcVar8;
        }
LAB_002ee22e:
        uVar6 = local_8;
        if (local_34 == 0) {
          if ((local_8 & 0x40) != 0) {
            if ((local_8 & 0x100) == 0) {
              if ((local_8 & 1) == 0) {
                if ((local_8 & 2) == 0) goto LAB_002ee266;
                local_1c = 0x20;
              }
              else {
                local_1c = 0x2b;
              }
            }
            else {
              local_1c = 0x2d;
            }
            local_20 = 1;
          }
LAB_002ee266:
          iVar11 = (local_24 - local_20) - local_14;
          if ((local_8 & 0xc) == 0) {
            _write_multi_char(0x20,iVar11,param_1);
          }
          _write_string(local_20);
          if (((uVar6 & 8) != 0) && ((uVar6 & 4) == 0)) {
            _write_multi_char(0x30,iVar11,param_1);
          }
          if ((local_28 == 0) || (local_14 < 1)) {
            _write_string(local_14);
          }
          else {
            local_40 = local_14;
            psVar12 = local_10;
            do {
              local_40 = local_40 + -1;
              iVar7 = FUN_002f0dc5((int)&local_55 + 1,*psVar12);
              psVar12 = psVar12 + 1;
              if (iVar7 < 1) break;
              _write_string(iVar7);
            } while (local_40 != 0);
          }
          if ((local_8 & 4) != 0) {
            _write_multi_char(0x20,iVar11,param_1);
          }
        }
      }
      else {
        if (bVar10 == 0x69) {
LAB_002edf0b:
          local_8 = local_8 | 0x40;
LAB_002edf0f:
          local_14 = 10;
LAB_002edf16:
          if ((local_8 & 0x8000) == 0) {
            param_3 = puVar3 + 1;
            if ((local_8 & 0x20) == 0) {
              uVar6 = *puVar3;
              if ((local_8 & 0x40) == 0) {
                uVar9 = 0;
                goto LAB_002ee17e;
              }
            }
            else if ((local_8 & 0x40) == 0) {
              uVar6 = (uint)(ushort)*puVar3;
            }
            else {
              uVar6 = (uint)(short)(ushort)*puVar3;
            }
            uVar9 = (int)uVar6 >> 0x1f;
          }
          else {
            uVar6 = *puVar3;
            uVar9 = puVar3[1];
            param_3 = puVar3 + 2;
          }
LAB_002ee17e:
          if ((((local_8 & 0x40) != 0) && ((int)uVar9 < 1)) && ((int)uVar9 < 0)) {
            bVar13 = uVar6 != 0;
            uVar6 = -uVar6;
            uVar9 = -(uVar9 + bVar13);
            local_8 = local_8 | 0x100;
          }
          if ((local_8 & 0x8000) == 0) {
            uVar9 = 0;
          }
          lVar14 = CONCAT44(uVar9,uVar6);
          if ((int)local_c < 0) {
            local_c = 1;
          }
          else {
            local_8 = local_8 & 0xfffffff7;
            if (0x200 < (int)local_c) {
              local_c = 0x200;
            }
          }
          if (uVar6 == 0 && uVar9 == 0) {
            local_20 = 0;
          }
          psVar12 = &local_55;
          while( true ) {
            uVar6 = local_c;
            iVar11 = (int)lVar14;
            local_c = local_c - 1;
            if (((int)uVar6 < 1) && (lVar14 == 0)) break;
            lVar14 = __aulldvrm(lVar14,local_14,local_14 >> 0x1f);
            iVar7 = extraout_ECX + 0x30;
            local_40 = iVar11;
            if (0x39 < iVar7) {
              iVar7 = iVar7 + local_30;
            }
            *(char *)psVar12 = (char)iVar7;
            psVar12 = (short *)((int)psVar12 + -1);
          }
          local_14 = (int)&local_55 + -(int)psVar12;
          local_10 = (short *)((int)psVar12 + 1);
          if (((local_8 & 0x200) != 0) && ((*(char *)((int)psVar12 + 1) != '0' || (local_14 == 0))))
          {
            *(char *)psVar12 = '0';
            local_14 = (int)&local_55 + -(int)psVar12 + 1;
            local_10 = psVar12;
          }
          goto LAB_002ee22e;
        }
        if (bVar10 != 0x6e) {
          if (bVar10 == 0x6f) {
            local_14 = 8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_002edf16;
          }
          if (bVar10 == 0x70) {
            local_c = 8;
            goto LAB_002ee0e6;
          }
          if (bVar10 == 0x73) {
LAB_002ede4f:
            uVar6 = local_c;
            if (local_c == 0xffffffff) {
              uVar6 = 0x7fffffff;
            }
            param_3 = puVar3 + 1;
            local_10 = (short *)*puVar3;
            if ((local_8 & 0x810) == 0) {
              psVar12 = local_10;
              if (local_10 == (short *)0x0) {
                local_10 = (short *)&DAT_00387304;
                psVar12 = local_10;
              }
              for (; (uVar6 != 0 && (uVar6 = uVar6 - 1, (char)*psVar12 != '\0'));
                  psVar12 = (short *)((int)psVar12 + 1)) {
              }
              local_14 = (int)psVar12 - (int)local_10;
            }
            else {
              if (local_10 == (short *)0x0) {
                local_10 = &DAT_0038730c;
              }
              local_28 = 1;
              for (psVar12 = local_10; (uVar6 != 0 && (uVar6 = uVar6 - 1, *psVar12 != 0));
                  psVar12 = psVar12 + 1) {
              }
              local_14 = (int)psVar12 - (int)local_10 >> 1;
            }
            goto LAB_002ee22e;
          }
          if (bVar10 != 0x75) {
            if (bVar10 != 0x78) goto LAB_002ee22e;
            local_30 = 0x27;
            goto LAB_002ee0e9;
          }
          goto LAB_002edf0f;
        }
        param_3 = puVar3 + 1;
        if ((local_8 & 0x20) == 0) {
          *(int *)*puVar3 = local_18;
        }
        else {
          *(undefined2 *)*puVar3 = (undefined2)local_18;
        }
        local_34 = 1;
      }
      if (local_2c != (short *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_2c);
      }
    }
    bVar10 = *param_2;
    pbVar2 = param_2;
    puVar3 = param_3;
  } while( true );
}
