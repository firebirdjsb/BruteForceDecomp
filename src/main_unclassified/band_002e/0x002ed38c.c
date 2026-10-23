/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28EE13B858614A27971F04420DB51ED7AE61669F062338095D2DF94A24A5F4F1
 * Entry: 0x002ed38c, Ghidra index: 10689, label: FUN_002ed38c
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
extern uint32_t DAT_00387305;
extern uint32_t DAT_0038730c;
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
extern uint32_t PTR_FUN_003b7190;
extern uint32_t PTR_FUN_003b7194;
extern uint32_t PTR_FUN_003b719c;
extern uint32_t switchD_002ed401_caseD_0[];
int FUN_002ed38c(undefined4 param_1,ushort *param_2,uint *param_3)

{
  ushort uVar1;
  short *psVar2;
  uint *puVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  int extraout_ECX;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  ushort local_458 [255];
  undefined2 local_259;
  uint local_58;
  uint local_54;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ushort *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_28;
  short local_26;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  uint local_c;
  uint local_8;
  
  uVar10 = *param_2;
  local_40 = 0;
  local_14 = 0;
  local_18 = 0;
  local_30 = (ushort *)0x0;
  puVar6 = param_2;
  puVar3 = param_3;
  do {
    if ((uVar10 == 0) || (param_2 = puVar6 + 1, local_18 < 0)) {
      return local_18;
    }
    if ((uVar10 < 0x20) || (0x78 < uVar10)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)(char)(&DAT_00387288)[uVar10] & 0xf;
    }
    iVar11 = uVar5 * 8 + local_40;
    local_40 = (int)(char)(&DAT_003872a8)[iVar11] >> 4;
    param_3 = puVar3;
    switch((int)(char)(&DAT_003872a8)[iVar11] >> 4) {
    case 0:
switchD_002ed401_caseD_0:
      local_20 = 1;
      _write_char(uVar10);
      break;
    case 1:
      local_c = 0xffffffff;
      local_44 = 0;
      local_38 = 0;
      local_24 = 0;
      local_1c = 0;
      local_8 = 0;
      local_20 = 0;
      break;
    case 2:
      if (uVar10 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (uVar10 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (uVar10 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (uVar10 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (uVar10 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (uVar10 == 0x2a) {
        local_24 = *puVar3;
        param_3 = puVar3 + 1;
        if ((int)local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (uVar10 - 0x30) + local_24 * 10;
      }
      break;
    case 4:
      local_c = 0;
      break;
    case 5:
      if (uVar10 == 0x2a) {
        local_c = *puVar3;
        param_3 = puVar3 + 1;
        if ((int)local_c < 0) {
          local_c = 0xffffffff;
        }
      }
      else {
        local_c = (uVar10 - 0x30) + local_c * 10;
      }
      break;
    case 6:
      if (uVar10 == 0x49) {
        uVar1 = *param_2;
        if ((uVar1 == 0x36) && (puVar6[2] == 0x34)) {
          param_2 = puVar6 + 3;
          local_8 = local_8 | 0x8000;
        }
        else if ((uVar1 == 0x33) && (puVar6[2] == 0x32)) {
          param_2 = puVar6 + 3;
          local_8 = local_8 & 0xffff7fff;
        }
        else if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                 ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
          local_40 = 0;
          goto switchD_002ed401_caseD_0;
        }
      }
      else if (uVar10 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (uVar10 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (uVar10 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      if (uVar10 < 0x68) {
        if (uVar10 < 0x65) {
          if (uVar10 < 0x59) {
            if (uVar10 != 0x58) {
              if (uVar10 == 0x43) {
                if ((local_8 & 0x830) == 0) {
                  local_8 = local_8 | 0x20;
                }
                goto LAB_002ed6a1;
              }
              if ((uVar10 != 0x45) && (uVar10 != 0x47)) {
                if (uVar10 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x20;
                  }
                  goto LAB_002ed603;
                }
                goto LAB_002eda0e;
              }
              local_44 = 1;
              uVar10 = uVar10 + 0x20;
              goto LAB_002ed673;
            }
LAB_002ed8c0:
            local_34 = 7;
LAB_002ed8c3:
            local_14 = 0x10;
            if ((local_8 & 0x80) != 0) {
              local_28 = 0x30;
              local_26 = (short)local_34 + 0x51;
              local_1c = 2;
            }
            goto LAB_002ed700;
          }
          if (uVar10 == 0x5a) {
            param_3 = puVar3 + 1;
            psVar2 = (short *)*puVar3;
            if ((psVar2 == (short *)0x0) ||
               (local_10 = *(ushort **)(psVar2 + 2), local_10 == (ushort *)0x0)) {
              puVar6 = (ushort *)&DAT_00387304;
              local_10 = (ushort *)&DAT_00387304;
              pbVar8 = &DAT_00387305;
              do {
                uVar10 = *puVar6;
                puVar6 = (ushort *)((int)puVar6 + 1);
              } while ((byte)uVar10 != 0);
              goto LAB_002ed845;
            }
            local_14 = (int)*psVar2;
            if ((local_8 & 0x800) == 0) {
              local_20 = 0;
            }
            else {
              local_14 = local_14 / 2;
              local_20 = 1;
            }
          }
          else if (uVar10 == 99) {
LAB_002ed6a1:
            uVar10 = (ushort)*puVar3;
            local_20 = 1;
            local_48 = (uint)uVar10;
            if ((local_8 & 0x20) == 0) {
              local_458[0] = uVar10;
            }
            else {
              local_2b = 0;
              local_2c = (undefined1)uVar10;
              iVar11 = FUN_002f0cf0(local_458,&local_2c,DAT_003b6c30);
              if (iVar11 < 0) {
                local_38 = 1;
              }
            }
            local_14 = 1;
            param_3 = puVar3 + 1;
            local_10 = local_458;
          }
          else if (uVar10 == 100) goto LAB_002ed6f5;
        }
        else {
LAB_002ed673:
          local_8 = local_8 | 0x40;
          puVar6 = local_458;
          puVar4 = local_458;
          if ((int)local_c < 0) {
            local_c = 6;
          }
          else if (local_c == 0) {
            if (uVar10 == 0x67) {
              local_c = 1;
            }
          }
          else {
            if (0x200 < (int)local_c) {
              local_c = 0x200;
            }
            if ((0xa3 < (int)local_c) &&
               (local_10 = local_458, local_30 = (ushort *)thunk_FUN_00237ea0(local_c + 0x15d),
               puVar6 = local_30, puVar4 = local_30, local_30 == (ushort *)0x0)) {
              local_c = 0xa3;
              puVar6 = local_458;
              puVar4 = local_10;
            }
          }
          local_10 = puVar4;
          local_58 = *puVar3;
          param_3 = puVar3 + 2;
          local_54 = puVar3[1];
          (*(code *)PTR_FUN_003b7190)(&local_58,puVar6,(int)(char)uVar10,local_c,local_44);
          uVar5 = local_8 & 0x80;
          if ((uVar5 != 0) && (local_c == 0)) {
            (*(code *)PTR_FUN_003b719c)(puVar6);
          }
          if ((uVar10 == 0x67) && (uVar5 == 0)) {
            (*(code *)PTR_FUN_003b7194)(puVar6);
          }
          if ((byte)*puVar6 == 0x2d) {
            local_8 = local_8 | 0x100;
            puVar6 = (ushort *)((int)puVar6 + 1);
            local_10 = puVar6;
          }
          pbVar8 = (byte *)((int)puVar6 + 1);
          do {
            uVar10 = *puVar6;
            puVar6 = (ushort *)((int)puVar6 + 1);
          } while ((byte)uVar10 != 0);
LAB_002ed845:
          local_14 = (int)puVar6 - (int)pbVar8;
        }
LAB_002eda0e:
        if (local_38 == 0) {
          if ((local_8 & 0x40) != 0) {
            if ((local_8 & 0x100) == 0) {
              if ((local_8 & 1) == 0) {
                if ((local_8 & 2) == 0) goto LAB_002eda49;
                local_28 = 0x20;
              }
              else {
                local_28 = 0x2b;
              }
            }
            else {
              local_28 = 0x2d;
            }
            local_1c = 1;
          }
LAB_002eda49:
          iVar11 = (local_24 - local_1c) - local_14;
          if ((local_8 & 0xc) == 0) {
            _write_multi_char(0x20,iVar11,param_1);
          }
          _write_string(local_1c);
          if (((local_8 & 8) != 0) && ((local_8 & 4) == 0)) {
            _write_multi_char(0x30,iVar11,param_1);
          }
          if ((local_20 == 0) && (0 < local_14)) {
            local_3c = local_14;
            puVar6 = local_10;
            do {
              local_3c = local_3c + -1;
              local_4c = FUN_002f0cf0(&local_48,puVar6,DAT_003b6c30);
              if (local_4c < 1) break;
              _write_char(local_48);
              puVar6 = (ushort *)((int)puVar6 + local_4c);
            } while (0 < local_3c);
          }
          else {
            _write_string(local_14);
          }
          if ((local_8 & 4) != 0) {
            _write_multi_char(0x20,iVar11,param_1);
          }
        }
      }
      else {
        if (uVar10 == 0x69) {
LAB_002ed6f5:
          local_8 = local_8 | 0x40;
LAB_002ed6f9:
          local_14 = 10;
LAB_002ed700:
          if ((local_8 & 0x8000) == 0) {
            param_3 = puVar3 + 1;
            if ((local_8 & 0x20) == 0) {
              uVar5 = *puVar3;
              if ((local_8 & 0x40) == 0) {
                uVar9 = 0;
                goto LAB_002ed958;
              }
            }
            else if ((local_8 & 0x40) == 0) {
              uVar5 = (uint)(ushort)*puVar3;
            }
            else {
              uVar5 = (uint)(short)(ushort)*puVar3;
            }
            uVar9 = (int)uVar5 >> 0x1f;
          }
          else {
            uVar5 = *puVar3;
            uVar9 = puVar3[1];
            param_3 = puVar3 + 2;
          }
LAB_002ed958:
          if ((((local_8 & 0x40) != 0) && ((int)uVar9 < 1)) && ((int)uVar9 < 0)) {
            bVar12 = uVar5 != 0;
            uVar5 = -uVar5;
            uVar9 = -(uVar9 + bVar12);
            local_8 = local_8 | 0x100;
          }
          if ((local_8 & 0x8000) == 0) {
            uVar9 = 0;
          }
          lVar13 = CONCAT44(uVar9,uVar5);
          if ((int)local_c < 0) {
            local_c = 1;
          }
          else {
            local_8 = local_8 & 0xfffffff7;
            if (0x200 < (int)local_c) {
              local_c = 0x200;
            }
          }
          if (uVar5 == 0 && uVar9 == 0) {
            local_1c = 0;
          }
          puVar6 = &local_259;
          while( true ) {
            uVar5 = local_c;
            iVar11 = (int)lVar13;
            local_c = local_c - 1;
            if (((int)uVar5 < 1) && (lVar13 == 0)) break;
            lVar13 = __aulldvrm(lVar13,local_14,local_14 >> 0x1f);
            iVar7 = extraout_ECX + 0x30;
            local_4c = iVar11;
            if (0x39 < iVar7) {
              iVar7 = iVar7 + local_34;
            }
            *(byte *)puVar6 = (byte)iVar7;
            puVar6 = (ushort *)((int)puVar6 + -1);
          }
          local_14 = (int)&local_259 + -(int)puVar6;
          local_10 = (ushort *)((int)puVar6 + 1);
          if (((local_8 & 0x200) != 0) && ((*(byte *)((int)puVar6 + 1) != 0x30 || (local_14 == 0))))
          {
            *(byte *)puVar6 = 0x30;
            local_14 = (int)&local_259 + -(int)puVar6 + 1;
            local_10 = puVar6;
          }
          goto LAB_002eda0e;
        }
        if (uVar10 != 0x6e) {
          if (uVar10 == 0x6f) {
            local_14 = 8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_002ed700;
          }
          if (uVar10 == 0x70) {
            local_c = 8;
            goto LAB_002ed8c0;
          }
          if (uVar10 == 0x73) {
LAB_002ed603:
            uVar5 = local_c;
            if (local_c == 0xffffffff) {
              uVar5 = 0x7fffffff;
            }
            param_3 = puVar3 + 1;
            local_10 = (ushort *)*puVar3;
            if ((local_8 & 0x20) == 0) {
              if (local_10 == (ushort *)0x0) {
                local_10 = &DAT_0038730c;
              }
              local_20 = 1;
              for (puVar6 = local_10; (uVar5 != 0 && (uVar5 = uVar5 - 1, *puVar6 != 0));
                  puVar6 = puVar6 + 1) {
              }
              local_14 = (int)puVar6 - (int)local_10 >> 1;
            }
            else {
              if (local_10 == (ushort *)0x0) {
                local_10 = (ushort *)&DAT_00387304;
              }
              local_14 = 0;
              puVar6 = local_10;
              if (0 < (int)uVar5) {
                do {
                  if ((byte)*puVar6 == 0) break;
                  if ((PTR_DAT_003b6c3c[(uint)(byte)*puVar6 * 2 + 1] & 0x80) != 0) {
                    puVar6 = (ushort *)((int)puVar6 + 1);
                  }
                  puVar6 = (ushort *)((int)puVar6 + 1);
                  local_14 = local_14 + 1;
                } while (local_14 < (int)uVar5);
              }
            }
            goto LAB_002eda0e;
          }
          if (uVar10 != 0x75) {
            if (uVar10 != 0x78) goto LAB_002eda0e;
            local_34 = 0x27;
            goto LAB_002ed8c3;
          }
          goto LAB_002ed6f9;
        }
        param_3 = puVar3 + 1;
        if ((local_8 & 0x20) == 0) {
          *(int *)*puVar3 = local_18;
        }
        else {
          *(undefined2 *)*puVar3 = (undefined2)local_18;
        }
        local_38 = 1;
      }
      if (local_30 != (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_30);
      }
    }
    uVar10 = *param_2;
    puVar6 = param_2;
    puVar3 = param_3;
  } while( true );
}
