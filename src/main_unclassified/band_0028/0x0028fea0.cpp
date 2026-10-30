/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BFC58AAD3B0BB030FDA924B5BB93A399E961DC6476FF67790EE928517871450
 * Entry: 0x0028fea0, Ghidra index: 9224, label: FUN_0028fea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b97a0;
extern char s_invalid_distance_code_00404960[];
extern char s_invalid_literal_length_code_00404978[];
extern uint32_t switchD_0028fee5_caseD_1[];
extern uint32_t switchD_0028fee5_caseD_7[];
extern uint32_t switchD_0028fee5_caseD_8[];
extern uint32_t switchD_0028fee5_default[];
void FUN_0028fea0(void)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int *unaff_ESI;
  uint uVar9;
  uint local_1c;
  uint local_14;
  undefined1 *local_10;
  byte *local_c;
  undefined1 *local_8;
  
  local_14 = unaff_ESI[1];
  local_1c = *(uint *)(in_EAX + 0x20);
  piVar2 = *(int **)(in_EAX + 4);
  pbVar8 = (byte *)*unaff_ESI;
  puVar7 = *(undefined1 **)(in_EAX + 0x34);
  uVar9 = *(uint *)(in_EAX + 0x1c);
  if (puVar7 < *(undefined1 **)(in_EAX + 0x30)) {
    local_10 = *(undefined1 **)(in_EAX + 0x30) + (-1 - (int)puVar7);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar7);
  }
  iVar5 = *piVar2;
  do {
    puVar6 = puVar7;
    switch(iVar5) {
    case 0:
      if ((local_10 < (undefined1 *)0x102) || (local_14 < 10)) {
LAB_0028ff94:
        piVar2[3] = (uint)*(byte *)(piVar2 + 4);
        piVar2[2] = piVar2[5];
        *piVar2 = 1;
        goto switchD_0028fee5_caseD_1;
      }
      *(uint *)(in_EAX + 0x20) = local_1c;
      *(uint *)(in_EAX + 0x1c) = uVar9;
      unaff_ESI[1] = local_14;
      unaff_ESI[2] = (int)(pbVar8 + (unaff_ESI[2] - *unaff_ESI));
      *unaff_ESI = (int)pbVar8;
      *(undefined1 **)(in_EAX + 0x34) = puVar7;
      iVar5 = FUN_0029cc90((char)piVar2[4],*(undefined1 *)((int)piVar2 + 0x11),piVar2[5],piVar2[6]);
      local_14 = unaff_ESI[1];
      local_1c = *(uint *)(in_EAX + 0x20);
      pbVar8 = (byte *)*unaff_ESI;
      uVar9 = *(uint *)(in_EAX + 0x1c);
      puVar7 = *(undefined1 **)(in_EAX + 0x34);
      if (puVar7 < *(undefined1 **)(in_EAX + 0x30)) {
        local_10 = *(undefined1 **)(in_EAX + 0x30) + (-1 - (int)puVar7);
      }
      else {
        local_10 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar7);
      }
      if (iVar5 == 0) goto LAB_0028ff94;
      *piVar2 = (uint)(iVar5 != 1) * 2 + 7;
      goto LAB_00290419;
    case 1:
switchD_0028fee5_caseD_1:
      for (; uVar9 < (uint)piVar2[3]; uVar9 = uVar9 + 8) {
        if (local_14 == 0) {
LAB_00290484:
          *(uint *)(in_EAX + 0x20) = local_1c;
          *(uint *)(in_EAX + 0x1c) = uVar9;
          unaff_ESI[1] = 0;
          unaff_ESI[2] = (int)(pbVar8 + (unaff_ESI[2] - *unaff_ESI));
          *unaff_ESI = (int)pbVar8;
          *(undefined1 **)(in_EAX + 0x34) = puVar7;
          FUN_0028fd20();
          return;
        }
        local_14 = local_14 - 1;
        local_1c = local_1c | (uint)*pbVar8 << ((byte)uVar9 & 0x1f);
        pbVar8 = pbVar8 + 1;
      }
      local_c = (byte *)(piVar2[2] + (*(uint *)(&DAT_003b97a0 + piVar2[3] * 4) & local_1c) * 8);
      local_1c = local_1c >> (local_c[1] & 0x1f);
      uVar9 = uVar9 - local_c[1];
      bVar1 = *local_c;
      uVar4 = (uint)bVar1;
      if (uVar4 == 0) {
        piVar2[2] = *(int *)(local_c + 4);
        *piVar2 = 6;
        goto LAB_00290419;
      }
      if ((bVar1 & 0x10) != 0) {
        piVar2[2] = uVar4 & 0xf;
        piVar2[1] = *(int *)(local_c + 4);
        *piVar2 = 2;
        goto LAB_00290419;
      }
      if ((bVar1 & 0x40) == 0) goto LAB_002901b4;
      if ((bVar1 & 0x20) != 0) {
        *piVar2 = 7;
        goto LAB_00290419;
      }
      *piVar2 = 9;
      unaff_ESI[6] = (int)s_invalid_literal_length_code_00404978;
      goto switchD_0028fee5_default;
    case 2:
      uVar4 = piVar2[2];
      for (; uVar9 < uVar4; uVar9 = uVar9 + 8) {
        if (local_14 == 0) goto LAB_00290484;
        local_14 = local_14 - 1;
        local_1c = local_1c | (uint)*pbVar8 << ((byte)uVar9 & 0x1f);
        pbVar8 = pbVar8 + 1;
      }
      piVar2[1] = piVar2[1] + (*(uint *)(&DAT_003b97a0 + uVar4 * 4) & local_1c);
      local_1c = local_1c >> ((byte)uVar4 & 0x1f);
      uVar9 = uVar9 - uVar4;
      piVar2[3] = (uint)*(byte *)((int)piVar2 + 0x11);
      piVar2[2] = piVar2[6];
      *piVar2 = 3;
      break;
    case 3:
      break;
    case 4:
      uVar4 = piVar2[2];
      for (; uVar9 < uVar4; uVar9 = uVar9 + 8) {
        if (local_14 == 0) goto LAB_00290484;
        local_14 = local_14 - 1;
        local_1c = local_1c | (uint)*pbVar8 << ((byte)uVar9 & 0x1f);
        pbVar8 = pbVar8 + 1;
      }
      piVar2[3] = piVar2[3] + (*(uint *)(&DAT_003b97a0 + uVar4 * 4) & local_1c);
      local_1c = local_1c >> ((byte)uVar4 & 0x1f);
      uVar9 = uVar9 - uVar4;
      *piVar2 = 5;
    case 5:
      if ((uint)((int)puVar7 - *(int *)(in_EAX + 0x28)) < (uint)piVar2[3]) {
        iVar5 = (*(int *)(in_EAX + 0x2c) - *(int *)(in_EAX + 0x28)) - piVar2[3];
      }
      else {
        iVar5 = -piVar2[3];
      }
      local_8 = puVar7 + iVar5;
      iVar5 = piVar2[1];
      while (iVar5 != 0) {
        puVar6 = puVar7;
        if (local_10 == (undefined1 *)0x0) {
          if (puVar7 == *(undefined1 **)(in_EAX + 0x2c)) {
            local_10 = *(undefined1 **)(in_EAX + 0x30);
            puVar6 = *(undefined1 **)(in_EAX + 0x28);
            if (local_10 != puVar6) {
              if (puVar6 < local_10) {
                local_10 = local_10 + (-1 - (int)puVar6);
              }
              else {
                local_10 = *(undefined1 **)(in_EAX + 0x2c) + -(int)puVar6;
              }
              puVar7 = puVar6;
              if (local_10 != (undefined1 *)0x0) goto LAB_0029031f;
            }
          }
          *(undefined1 **)(in_EAX + 0x34) = puVar7;
          FUN_0028fd20();
          puVar6 = *(undefined1 **)(in_EAX + 0x34);
          puVar7 = *(undefined1 **)(in_EAX + 0x30);
          if (puVar6 < puVar7) {
            local_10 = puVar7 + (-1 - (int)puVar6);
          }
          else {
            local_10 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar6);
          }
          if ((puVar6 == *(undefined1 **)(in_EAX + 0x2c)) &&
             (puVar3 = *(undefined1 **)(in_EAX + 0x28), puVar7 != puVar3)) {
            puVar6 = puVar3;
            if (puVar3 < puVar7) {
              local_10 = puVar7 + (-1 - (int)puVar3);
            }
            else {
              local_10 = *(undefined1 **)(in_EAX + 0x2c) + -(int)puVar3;
            }
          }
          if (local_10 == (undefined1 *)0x0) goto LAB_002904bd;
        }
LAB_0029031f:
        *puVar6 = *local_8;
        puVar7 = puVar6 + 1;
        local_8 = local_8 + 1;
        local_10 = local_10 + -1;
        if (local_8 == *(undefined1 **)(in_EAX + 0x2c)) {
          local_8 = *(undefined1 **)(in_EAX + 0x28);
        }
        piVar2[1] = piVar2[1] + -1;
        iVar5 = piVar2[1];
      }
LAB_00290413:
      *piVar2 = 0;
      goto LAB_00290419;
    case 6:
      if (local_10 == (undefined1 *)0x0) {
        if (puVar7 == *(undefined1 **)(in_EAX + 0x2c)) {
          local_10 = *(undefined1 **)(in_EAX + 0x30);
          puVar6 = *(undefined1 **)(in_EAX + 0x28);
          if (local_10 != puVar6) {
            if (puVar6 < local_10) {
              local_10 = local_10 + (-1 - (int)puVar6);
            }
            else {
              local_10 = *(undefined1 **)(in_EAX + 0x2c) + -(int)puVar6;
            }
            puVar7 = puVar6;
            if (local_10 != (undefined1 *)0x0) goto LAB_002903f8;
          }
        }
        *(undefined1 **)(in_EAX + 0x34) = puVar7;
        FUN_0028fd20();
        puVar6 = *(undefined1 **)(in_EAX + 0x34);
        puVar7 = *(undefined1 **)(in_EAX + 0x30);
        if (puVar6 < puVar7) {
          local_10 = puVar7 + (-1 - (int)puVar6);
        }
        else {
          local_10 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar6);
        }
        if ((puVar6 == *(undefined1 **)(in_EAX + 0x2c)) &&
           (puVar3 = *(undefined1 **)(in_EAX + 0x28), puVar7 != puVar3)) {
          puVar6 = puVar3;
          if (puVar3 < puVar7) {
            local_10 = puVar7 + (-1 - (int)puVar3);
          }
          else {
            local_10 = *(undefined1 **)(in_EAX + 0x2c) + -(int)puVar3;
          }
        }
        if (local_10 == (undefined1 *)0x0) {
LAB_002904bd:
          *(uint *)(in_EAX + 0x20) = local_1c;
          *(uint *)(in_EAX + 0x1c) = uVar9;
          unaff_ESI[1] = local_14;
          unaff_ESI[2] = (int)(pbVar8 + (unaff_ESI[2] - *unaff_ESI));
          goto LAB_00290449;
        }
      }
LAB_002903f8:
      *puVar6 = (char)piVar2[2];
      puVar7 = puVar6 + 1;
      local_10 = local_10 + -1;
      goto LAB_00290413;
    case 7:
      goto switchD_0028fee5_caseD_7;
    case 8:
      goto switchD_0028fee5_caseD_8;
    case 9:
      *(uint *)(in_EAX + 0x20) = local_1c;
      *(uint *)(in_EAX + 0x1c) = uVar9;
      unaff_ESI[1] = local_14;
      unaff_ESI[2] = (int)(pbVar8 + (unaff_ESI[2] - *unaff_ESI));
      goto LAB_00290449;
    default:
      goto switchD_0028fee5_default;
    }
    for (; uVar9 < (uint)piVar2[3]; uVar9 = uVar9 + 8) {
      if (local_14 == 0) goto LAB_00290484;
      local_14 = local_14 - 1;
      local_1c = local_1c | (uint)*pbVar8 << ((byte)uVar9 & 0x1f);
      pbVar8 = pbVar8 + 1;
    }
    local_c = (byte *)(piVar2[2] + (*(uint *)(&DAT_003b97a0 + piVar2[3] * 4) & local_1c) * 8);
    local_1c = local_1c >> (local_c[1] & 0x1f);
    bVar1 = *local_c;
    uVar4 = (uint)bVar1;
    uVar9 = uVar9 - local_c[1];
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 0x40) != 0) {
        *piVar2 = 9;
        unaff_ESI[6] = (int)s_invalid_distance_code_00404960;
        break;
      }
LAB_002901b4:
      piVar2[3] = uVar4;
      piVar2[2] = (int)(local_c + *(int *)(local_c + 4) * 8);
    }
    else {
      piVar2[2] = uVar4 & 0xf;
      piVar2[3] = *(int *)(local_c + 4);
      *piVar2 = 4;
    }
LAB_00290419:
    iVar5 = *piVar2;
  } while( true );
switchD_0028fee5_default:
  *(uint *)(in_EAX + 0x20) = local_1c;
  *(uint *)(in_EAX + 0x1c) = uVar9;
  unaff_ESI[1] = local_14;
  unaff_ESI[2] = (int)(pbVar8 + (unaff_ESI[2] - *unaff_ESI));
  puVar6 = puVar7;
  goto LAB_00290449;
switchD_0028fee5_caseD_7:
  if (7 < uVar9) {
    uVar9 = uVar9 - 8;
    local_14 = local_14 + 1;
    pbVar8 = pbVar8 + -1;
  }
  *(undefined1 **)(in_EAX + 0x34) = puVar7;
  FUN_0028fd20();
  puVar7 = *(undefined1 **)(in_EAX + 0x34);
  if (*(undefined1 **)(in_EAX + 0x30) == puVar7) {
    *piVar2 = 8;
switchD_0028fee5_caseD_8:
    goto switchD_0028fee5_default;
  }
  *(uint *)(in_EAX + 0x20) = local_1c;
  *(uint *)(in_EAX + 0x1c) = uVar9;
  unaff_ESI[1] = local_14;
  unaff_ESI[2] = (int)(pbVar8 + (unaff_ESI[2] - *unaff_ESI));
  puVar6 = puVar7;
LAB_00290449:
  *unaff_ESI = (int)pbVar8;
  *(undefined1 **)(in_EAX + 0x34) = puVar6;
  FUN_0028fd20();
  return;
}
