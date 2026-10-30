/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34D3E2872742D499CFC1BE42DD9539746CF6302B38BAB7E512381C8764920E05
 * Entry: 0x00230860, Ghidra index: 7749, label: FUN_00230860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_00469940;
extern uint32_t PTR_FUN_003a4f64;
undefined1
FUN_00230860(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,float *param_5)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  float10 fVar13;
  undefined1 local_e9;
  float local_e8;
  int local_e4;
  char local_de;
  char local_dd;
  int local_dc;
  float fStack_d8;
  int local_d4;
  float fStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  int local_b0;
  undefined1 local_ac [4];
  int *local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  float fStack_98;
  float local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float *local_80;
  float *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 auStack_48 [4];
  undefined **ppuStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int iStack_24;
  
  local_b8 = param_3[2];
  local_bc = param_3[1];
  local_c0 = *param_3;
  local_dc = param_4[1];
  local_e4 = param_4[2];
  local_cc = *param_4;
  local_a8 = (int *)0x0;
  local_a4 = 0;
  local_a0 = 0;
  iVar9 = *(int *)(param_1 + 0x228);
  local_90 = *(int *)(iVar9 + 0x68);
  local_9c = *(int *)(iVar9 + 100);
  local_e9 = 1;
  iVar10 = 1;
  if (*(char *)(iVar9 + 0x6c) != '\0') {
    iVar10 = local_9c + local_90;
  }
  local_c8 = local_dc;
  local_c4 = local_e4;
  FUN_0014c470(0);
  local_d4 = 0;
  if (0 < iVar10) {
    do {
      iVar9 = local_d4;
      puVar6 = (undefined4 *)FUN_002ea01d(0x60);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[0x11] = 0;
        puVar11 = puVar6;
        for (iVar9 = 0x18; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar6[0x13] = 0;
        iVar9 = local_d4;
      }
      local_a8[iVar9] = (int)puVar6;
      local_d4 = iVar9 + 1;
    } while (local_d4 < iVar10);
  }
  if ((*(byte *)(param_1 + 0x225) & 2) != 0) {
    local_b8 = *(undefined4 *)(param_1 + 0x2e4);
    local_bc = *(undefined4 *)(param_1 + 0x2e0);
    local_c0 = *(undefined4 *)(param_1 + 0x2dc);
    local_e4 = *(undefined4 *)(param_1 + 0x2f0);
    local_dc = *(undefined4 *)(param_1 + 0x2ec);
    local_cc = *(undefined4 *)(param_1 + 0x2e8);
    local_c8 = local_dc;
    local_c4 = local_e4;
  }
  local_e8 = *param_5;
  local_94 = *param_5;
  if (iVar10 < 2) {
    local_e4 = FUN_00230040(param_1,param_2,&local_c0,&local_cc,*local_a8,&local_e8);
  }
  else {
    local_e4 = FUN_00230400(param_1,param_2,&local_c0,&local_cc,local_ac,&local_e8,iVar10);
  }
  iVar10 = *(int *)(param_1 + 0x1b0);
  local_b4 = 200.0;
  local_80 = (float *)0x0;
  local_7c = (float *)0x0;
  local_78 = 0;
  local_dd = '\0';
  local_b0 = 0;
  if (iVar10 != 0) {
    if (*(int *)(iVar10 + 8) == 0) {
      if ((*(int *)(iVar10 + 0x10) == 0) ||
         (local_b0 = *(int *)(*(int *)(iVar10 + 0x10) + 0xb0),
         *(int *)(*(int *)(local_b0 + 0xc) + 4) != 3)) {
        local_b0 = 0;
      }
    }
    else {
      local_b0 = *(int *)(*(int *)(iVar10 + 8) + 0x1d4);
    }
  }
  local_de = '\x01';
  local_dc = 0;
  local_d4 = 0;
  if (0 < local_e4) {
    do {
      iVar10 = local_a8[local_d4];
      if (0 < *(int *)(param_1 + 0x28c)) {
        *(byte *)(iVar10 + 0x58) = *(byte *)(iVar10 + 0x58) | 1;
      }
      bVar1 = *(byte *)(iVar10 + 0x58);
      iVar9 = *(int *)(iVar10 + 0x44);
      *(byte *)(iVar10 + 0x58) = bVar1 & 0xfd;
      if (iVar9 != 0) {
        if (*(int *)(*(int *)(iVar9 + 0xc) + 4) == 0x16) {
          *(byte *)(iVar10 + 0x58) = bVar1 & 0xf9 | 1;
          local_88 = *(undefined4 *)(iVar10 + 0xc);
          local_8c = *(undefined4 *)(iVar10 + 8);
          local_74 = *(undefined4 *)(iVar10 + 4);
          local_dd = '\x01';
          local_dc = iVar9;
          local_70 = local_8c;
          local_6c = local_88;
        }
        if ((iVar9 != 0) && (iVar9 = *(int *)(param_1 + 0x1b0), iVar9 != 0)) {
          if (*(int *)(iVar9 + 8) == 0) {
            if ((*(int *)(iVar9 + 0x10) == 0) ||
               (iVar7 = *(int *)(*(int *)(iVar9 + 0x10) + 0xb0),
               *(int *)(*(int *)(iVar7 + 0xc) + 4) != 3)) goto LAB_00230be1;
          }
          else {
            iVar7 = *(int *)(*(int *)(iVar9 + 8) + 0x1d4);
          }
          if (iVar7 != 0) {
            if (*(int *)(iVar9 + 8) == 0) {
              if ((*(int *)(iVar9 + 0x10) == 0) ||
                 (iVar9 = *(int *)(*(int *)(iVar9 + 0x10) + 0xb0),
                 *(int *)(*(int *)(iVar9 + 0xc) + 4) != 3)) {
                iVar9 = 0;
              }
            }
            else {
              iVar9 = *(int *)(*(int *)(iVar9 + 8) + 0x1d4);
            }
            iVar9 = (**(code **)(**(int **)(*(int *)(iVar9 + 8) + 0xbec) + 0xc))(iVar9);
            if (((iVar9 == 0) || (*(int *)(iVar9 + 0x24) == 0)) ||
               ((*(byte *)(*(int *)(iVar9 + 0x24) + 0x14) & 2) == 0)) {
              iVar9 = *(int *)(*(int *)(param_1 + 0x1b0) + 8);
              if (iVar9 == 0) {
                iVar9 = *(int *)(*(int *)(param_1 + 0x1b0) + 0x10);
                if ((iVar9 == 0) ||
                   (iVar9 = *(int *)(iVar9 + 0xb0), *(int *)(*(int *)(iVar9 + 0xc) + 4) != 3)) {
                  iVar9 = 0;
                }
              }
              else {
                iVar9 = *(int *)(iVar9 + 0x1d4);
              }
              if (((*(int *)(*(int *)(*(int *)(iVar10 + 0x44) + 0xc) + 4) == 3) &&
                  (*(int *)(*(int *)(iVar9 + 0xc) + 4) == 3)) &&
                 ((*(int *)(*(int *)(iVar10 + 0x44) + 0x59c) != 0 &&
                  ((*(int *)(iVar9 + 0x59c) != 0 && (cVar5 = FUN_0005beb0(), cVar5 != '\0')))))) {
                local_e9 = 0;
                FUN_00012320(0x22);
                iVar10 = *(int *)(*(int *)(param_1 + 0x1b0) + 8);
                if (iVar10 == 0) {
                  iVar10 = *(int *)(*(int *)(param_1 + 0x1b0) + 0x10);
                  if ((iVar10 != 0) &&
                     (iStack_64 = *(int *)(iVar10 + 0xb0),
                     *(int *)(*(int *)(iStack_64 + 0xc) + 4) == 3)) goto LAB_00230d84;
LAB_00230d88:
                  iStack_64 = 0;
                }
                else {
                  iStack_64 = *(int *)(iVar10 + 0x1d4);
LAB_00230d84:
                  if (iStack_64 == 0) goto LAB_00230d88;
                  iStack_64 = *(int *)(*(int *)(iStack_64 + 0x4c) + 4) + 0x50 + iStack_64;
                }
                iVar10 = *(int *)(*(int *)(param_1 + 8) + 0xbf4);
                iStack_68 = *(int *)(*(int *)(param_1 + 0x4c) + 4) + 0x4c + param_1;
                uStack_60 = *(undefined4 *)(iVar10 + 0x50);
                uStack_54 = uStack_40;
                puStack_4c = auStack_48;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_5c = uStack_60;
                FUN_000e4190(iVar10,&iStack_68);
                ppuStack_44 = &PTR_FUN_003a4f64;
                if (iStack_24 != 0) {
                  FUN_0008f6e0();
                }
                if (iStack_38 != 0) {
                  FUN_0008f6e0();
                }
                goto LAB_00230ee5;
              }
            }
          }
        }
      }
LAB_00230be1:
      fVar2 = *(float *)(iVar10 + 0x44);
      if ((fVar2 == 0.0) || (pfVar4 = local_80, *(int *)(*(int *)((int)fVar2 + 0xc) + 4) != 3)) {
        local_9c = local_9c + -1;
      }
      else {
        for (; pfVar4 != local_7c; pfVar4 = pfVar4 + 1) {
          if (*pfVar4 == fVar2) {
            if (pfVar4 != local_7c) goto LAB_00230d22;
            break;
          }
        }
        fStack_d8 = fVar2;
        FUN_001611d0();
        iVar9 = local_b0;
        if ((((local_b0 != 0) && (local_b0 != *(int *)(iVar10 + 0x44))) &&
            ((*(byte *)(*(int *)(iVar10 + 0x44) + 0x70) & 1) == 0)) &&
           (iVar7 = (**(code **)(**(int **)(*(int *)(local_b0 + 8) + 0xbec) + 0xc))(local_b0),
           iVar7 != 0)) {
          fVar2 = 0.0;
          iVar7 = *(int *)(iVar7 + 0x2c);
          iVar9 = *(int *)(*(int *)(iVar9 + 0xc) + 0x120);
          if (iVar7 != -4) {
            fVar2 = (float)*(int *)(iVar7 + 0x14);
          }
          if (iVar7 != -4) {
            *(int *)(iVar7 + 0x14) = (int)(fVar2 + 1.0);
            fStack_d8 = fVar2 + 1.0;
          }
          if ((iVar9 != 0) && (iVar9 = FUN_0008e590(iVar7), iVar9 != 0)) {
            fStack_d8 = (float)*(int *)(iVar9 + 0x10) + 1.0;
            *(int *)(iVar9 + 0x10) = (int)fStack_d8;
          }
        }
        local_90 = local_90 + -1;
      }
      fVar13 = (float10)FUN_0017e5e0(DAT_00469940,iVar10 + 4);
      fStack_d8 = (float)fVar13;
      fStack_98 = local_b4;
      fStack_d0 = local_b4;
      if (fStack_d8 <= local_b4) {
        fStack_d0 = fStack_d8;
      }
      local_b4 = fStack_d0;
      FUN_002318e0(param_1,param_2);
      local_e8 = *(float *)(iVar10 + 0x50);
      if ((local_90 < 0) || (local_9c < 0)) {
        local_de = '\0';
        break;
      }
LAB_00230d22:
      local_d4 = local_d4 + 1;
    } while (local_d4 < local_e4);
    if (local_b4 < 200.0) {
      if (local_e4 < 1) {
        iVar10 = *(int *)(*(int *)(param_1 + 8) + 0xbd8) + 0xc;
      }
      else {
        iVar10 = *(int *)(*(int *)(param_1 + 8) + 0xbd8) + 0xc + *(int *)(*local_a8 + 0x54) * 0x14;
      }
      fVar2 = *(float *)(*(int *)(iVar10 + 0xc) + 0x28 +
                        *(int *)(*(int *)(param_1 + 0x228) + 0xec) * 0x18);
      if (((fVar2 != 0.0) && (fStack_d0 = fVar2, iVar10 = FUN_0017beb0(&fStack_d0), iVar10 != 0)) &&
         (*(float *)(iVar10 + 8) + *(float *)(iVar10 + 8) < local_b4)) {
        FUN_00230ff0(param_1,&local_c0,&local_cc,local_e8);
      }
    }
  }
LAB_00230ee5:
  for (uVar12 = 0; (local_a8 != (int *)0x0 && (uVar12 < (uint)(local_a4 - (int)local_a8 >> 2)));
      uVar12 = uVar12 + 1) {
    iVar10 = local_a8[uVar12];
    if (iVar10 != 0) {
      uVar12 = *(uint *)(iVar10 + 0x44);
      if ((uVar12 != 0) && ((uVar12 & 1) == 0)) {
        *(undefined4 *)(iVar10 + 0x44) = 0;
        piVar8 = (int *)(&DAT_00414da0 + (uVar12 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        if (*(int *)(&DAT_00414da0 + (uVar12 * 0x19660d + 0x3c6ef35f >> 0x15) * 4) != 0) {
          while (piVar3 = (int *)*piVar8, piVar3 != (int *)(iVar10 + 0x40)) {
            piVar8 = piVar3;
            if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(iVar10);
            }
          }
          *piVar8 = *(int *)*piVar8;
        }
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar10);
    }
  }
  if (local_dd != '\0') {
    FUN_0022feb0(param_1,&local_cc);
  }
  if (local_de != '\0') {
    local_e8 = *param_5;
  }
  fStack_d0 = local_e8;
  fStack_98 = local_94;
  if (local_e8 <= local_94) {
    fStack_98 = local_e8;
  }
  *param_5 = fStack_98;
  if (local_80 == (float *)0x0) {
    if (local_a8 == (int *)0x0) {
      return local_e9;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_a8);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_80);
}
