/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BD6776090A0D4EDDA252CDDC8E78355FC2D2A5B06AFC0164662BBF682462E47
 * Entry: 0x0028f610, Ghidra index: 9219, label: FUN_0028f610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0028f610(uint param_1,uint param_2,int param_3,int param_4,uint *param_5,int param_6,
            uint *param_7,uint *param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *in_EAX;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *in_ECX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint local_fc;
  uint local_f8;
  int local_f4;
  uint *local_ec;
  uint *local_e8;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  uint local_bc [47];
  
  uVar15 = 0;
  local_bc[0] = 0;
  local_bc[1] = 0;
  local_bc[2] = 0;
  local_bc[3] = 0;
  local_bc[4] = 0;
  local_bc[5] = 0;
  local_bc[6] = 0;
  local_bc[7] = 0;
  local_bc[8] = 0;
  local_bc[9] = 0;
  local_bc[10] = 0;
  local_bc[0xb] = 0;
  local_bc[0xc] = 0;
  local_bc[0xd] = 0;
  local_bc[0xe] = 0;
  local_bc[0xf] = 0;
  piVar3 = in_ECX;
  uVar12 = param_1;
  do {
    local_bc[*piVar3] = local_bc[*piVar3] + 1;
    piVar3 = piVar3 + 1;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (local_bc[0] == param_1) {
    *param_5 = 0;
    *in_EAX = 0;
  }
  else {
    local_f8 = 1;
    do {
      if (local_bc[local_f8] != 0) break;
      if (local_bc[local_f8 + 1] != 0) {
        local_f8 = local_f8 + 1;
        break;
      }
      if (local_bc[local_f8 + 2] != 0) {
        local_f8 = local_f8 + 2;
        break;
      }
      if (local_bc[local_f8 + 3] != 0) {
        local_f8 = local_f8 + 3;
        break;
      }
      if (local_bc[local_f8 + 4] != 0) {
        local_f8 = local_f8 + 4;
        break;
      }
      local_f8 = local_f8 + 5;
    } while (local_f8 < 0x10);
    local_fc = *in_EAX;
    if (*in_EAX < local_f8) {
      local_fc = local_f8;
    }
    uVar12 = 0xf;
    do {
      if (local_bc[uVar12] != 0) break;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (uVar12 < local_fc) {
      local_fc = uVar12;
    }
    iVar13 = 1 << ((byte)local_f8 & 0x1f);
    *in_EAX = local_fc;
    for (uVar7 = local_f8; uVar7 < uVar12; uVar7 = uVar7 + 1) {
      if ((int)(iVar13 - local_bc[uVar7]) < 0) {
        return 0xfffffffd;
      }
      iVar13 = (iVar13 - local_bc[uVar7]) * 2;
    }
    uVar7 = local_bc[uVar12];
    iVar13 = iVar13 - uVar7;
    if (iVar13 < 0) {
      return 0xfffffffd;
    }
    local_bc[uVar12] = uVar7 + iVar13;
    iVar8 = 0;
    iVar17 = uVar12 - 1;
    local_bc[0x11] = 0;
    if (iVar17 != 0) {
      iVar16 = 0;
      do {
        iVar8 = iVar8 + *(int *)((int)local_bc + iVar16 + 4);
        iVar17 = iVar17 + -1;
        *(int *)((int)local_bc + iVar16 + 0x48) = iVar8;
        iVar16 = iVar16 + 4;
      } while (iVar17 != 0);
    }
    uVar7 = 0;
    do {
      iVar8 = *in_ECX;
      in_ECX = in_ECX + 1;
      if (iVar8 != 0) {
        uVar18 = local_bc[iVar8 + 0x10];
        param_8[uVar18] = uVar7;
        local_bc[iVar8 + 0x10] = uVar18 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_1);
    uVar7 = local_bc[uVar12 + 0x10];
    local_ec = param_8;
    uVar18 = 0;
    iVar8 = -local_fc;
    local_e0 = 0;
    local_bc[0x10] = 0;
    local_f4 = -1;
    local_bc[0x20] = 0;
    local_dc = 0;
    if ((int)local_f8 <= (int)uVar12) {
      local_cc = local_f8 - 1;
      local_e8 = local_bc + local_f8;
      do {
        uVar6 = *local_e8;
        uVar2 = local_d8;
        while (local_d8 = uVar2, uVar6 != 0) {
          /* The high guest WORD comes from the identical DWORD just loaded. */
          local_d8 = (local_d8 & UINT32_C(0x0000ffff)) | (uVar2 & UINT32_C(0xffff0000));
          uVar9 = uVar6 - 1;
          local_d0 = iVar8 + local_fc;
          if (local_d0 < (int)local_f8) {
            iVar17 = iVar8 - local_fc;
            do {
              iVar16 = local_f4 + 1;
              iVar8 = iVar8 + local_fc;
              iVar17 = iVar17 + local_fc;
              local_d0 = local_d0 + local_fc;
              uVar15 = uVar12 - iVar8;
              if (local_fc < uVar12 - iVar8) {
                uVar15 = local_fc;
              }
              uVar10 = local_f8 - iVar8;
              uVar18 = 1 << ((byte)uVar10 & 0x1f);
              if ((uVar6 < uVar18) &&
                 (iVar4 = uVar18 + (-1 - uVar9), puVar1 = local_e8, uVar10 < uVar15)) {
                while (uVar10 = uVar10 + 1, uVar10 < uVar15) {
                  uVar18 = puVar1[1];
                  uVar5 = iVar4 * 2;
                  if (uVar5 < uVar18 || uVar5 - uVar18 == 0) break;
                  iVar4 = uVar5 - uVar18;
                  puVar1 = puVar1 + 1;
                }
              }
              uVar18 = 1 << ((byte)uVar10 & 0x1f);
              uVar15 = *param_7 + uVar18;
              if (0x5a0 < uVar15) {
                return 0xfffffffc;
              }
              local_dc = param_6 + *param_7 * 8;
              local_bc[local_f4 + 0x21] = local_dc;
              *param_7 = uVar15;
              if (iVar16 == 0) {
                *param_5 = local_dc;
              }
              else {
                local_bc[local_f4 + 0x11] = local_e0;
                uVar5 = local_e0 >> ((byte)iVar17 & 0x1f);
                uVar15 = local_bc[local_f4 + 0x20];
                /* 0x0028F935/0x0028F94C: independently write guest bytes 0/1. */
                local_d8 = (local_d8 & UINT32_C(0xffff0000)) |
                           ((uint32_t)(uint8_t)local_fc << 8) | (uint8_t)uVar10;
                local_d4 = ((int)(local_dc - uVar15) >> 3) - uVar5;
                *(undefined4 *)(uVar15 + uVar5 * 8) = local_d8;
                *(uint *)(uVar15 + 4 + uVar5 * 8) = local_d4;
              }
              uVar15 = local_e0;
              local_f4 = iVar16;
            } while (local_d0 < (int)local_f8);
          }
          bVar14 = (byte)iVar8;
          if (local_ec < param_8 + uVar7) {
            local_d4 = *local_ec;
            if (local_d4 < param_2) {
              local_d8 = (local_d8 & UINT32_C(0xffffff00)) |
                         (((uint32_t)(local_d4 < 0x100) - 1U) & UINT32_C(0x60));
            }
            else {
              iVar17 = (local_d4 - param_2) * 4;
              local_d8 = (local_d8 & UINT32_C(0xffffff00)) |
                         (uint8_t)(*(char *)(iVar17 + param_4) + 0x50);
              local_d4 = *(uint *)(iVar17 + param_3);
            }
            local_ec = local_ec + 1;
          }
          else {
            local_d8 = (local_d8 & UINT32_C(0xffffff00)) | UINT32_C(0xc0);
          }
          /* 0x0028F98C writes only byte 1; preserve bytes 0, 2, and 3. */
          local_d8 = (local_d8 & UINT32_C(0xffff00ff)) |
                     ((uint32_t)(uint8_t)(local_f8 - bVar14) << 8);
          iVar17 = 1 << ((char)local_f8 - bVar14 & 0x1f);
          uVar6 = uVar15 >> (bVar14 & 0x1f);
          if (uVar6 < uVar18) {
            puVar11 = (undefined4 *)(local_dc + uVar6 * 8);
            do {
              *puVar11 = local_d8;
              puVar11[1] = local_d4;
              uVar6 = uVar6 + iVar17;
              puVar11 = puVar11 + iVar17 * 2;
              uVar15 = local_e0;
            } while (uVar6 < uVar18);
          }
          uVar10 = 1 << ((byte)local_cc & 0x1f);
          uVar6 = uVar15 & uVar10;
          while (uVar6 != 0) {
            uVar15 = uVar15 ^ uVar10;
            uVar10 = uVar10 >> 1;
            uVar6 = uVar15 & uVar10;
          }
          uVar15 = uVar15 ^ uVar10;
          uVar6 = uVar9;
          local_e0 = uVar15;
          uVar2 = local_d8;
          if (((1 << (bVar14 & 0x1f)) - 1U & uVar15) != local_bc[local_f4 + 0x10]) {
            do {
              iVar8 = iVar8 - local_fc;
              iVar17 = local_f4 + 0xf;
              local_f4 = local_f4 + -1;
            } while (((1 << ((byte)iVar8 & 0x1f)) - 1U & uVar15) != local_bc[iVar17]);
          }
        }
        local_e8 = local_e8 + 1;
        local_f8 = local_f8 + 1;
        local_cc = local_cc + 1;
      } while ((int)local_f8 <= (int)uVar12);
    }
    if ((iVar13 != 0) && (uVar12 != 1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}
