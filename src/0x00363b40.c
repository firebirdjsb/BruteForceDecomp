/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE647C38A0440CA6B4679FFA3B9366D395A4F86F24F4892D28CF5AAF2545E552
 * Entry: 0x00363b40, Ghidra index: 13236, label: FUN_00363b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_00363cc6_default[];
void FUN_00363b40(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  bool bVar14;
  char local_f1;
  int local_f0;
  char local_e9;
  byte *local_e8;
  int local_e4;
  byte *local_e0;
  byte *local_dc;
  byte abStack_c4 [132];
  byte local_40 [64];
  
  puVar11 = (uint *)*param_2;
  iVar1 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  local_f0 = 0;
  puVar12 = param_1;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  bVar3 = (byte)uVar8;
  if (uVar9 < 3) {
    uVar8 = *puVar11 >> (3 - (byte)uVar9 & 0x1f);
    bVar3 = (char)*puVar11 << ((byte)uVar9 & 0x1f) | bVar3;
    iVar7 = uVar9 + 0x1d;
    puVar11 = puVar11 + 1;
  }
  else {
    uVar8 = uVar8 >> 3;
    iVar7 = uVar9 - 3;
  }
  local_e8 = local_40;
  local_e9 = (bVar3 & 7) + 1;
  local_dc = local_40 + 4;
  local_40[0] = 0x10;
  local_40[1] = 0x60;
  local_40[2] = 0xb0;
  local_40[3] = 2;
  local_f1 = '\x01' << (bVar3 & 7);
  local_e4 = 0;
  if (local_e9 != '\0') {
    iVar13 = 0;
    do {
      iVar10 = 0;
      if (0 < iVar13) {
        do {
          if (iVar7 == 0) {
            uVar9 = *puVar11;
            puVar11 = puVar11 + 1;
            iVar7 = 0x1f;
          }
          else {
            iVar7 = iVar7 + -1;
            uVar9 = uVar8;
          }
          uVar8 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            cVar6 = *(char *)((uint)abStack_c4[iVar10] + (int)param_1);
            cVar5 = local_f1;
            if (cVar6 < '\0') {
              cVar5 = -local_f1;
            }
            *(char *)((uint)abStack_c4[iVar10] + (int)param_1) = cVar6 + cVar5;
            bVar14 = local_f0 == param_3;
            iVar13 = local_e4;
            local_f0 = local_f0 + 1;
            if (bVar14) goto LAB_00364006;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar13);
      }
      local_e0 = local_e8;
      if (local_e8 < local_dc) {
        do {
          bVar3 = *local_e0;
          if (bVar3 == 0) goto switchD_00363cc6_default;
          if (iVar7 == 0) {
            uVar9 = *puVar11;
            puVar11 = puVar11 + 1;
            iVar7 = 0x1f;
          }
          else {
            iVar7 = iVar7 + -1;
            uVar9 = uVar8;
          }
          uVar8 = uVar9 >> 1;
          if ((uVar9 & 1) == 0) goto switchD_00363cc6_default;
          switch(bVar3 & 3) {
          case 0:
            *local_e0 = (bVar3 & 0xfc) + 0x11;
            break;
          case 1:
            bVar3 = bVar3 & 0xfc;
            *local_e0 = bVar3 + 2;
            *local_dc = bVar3 + 0x12;
            local_dc[1] = bVar3 + 0x22;
            local_dc[2] = bVar3 + 0x32;
            local_dc = local_dc + 3;
            goto LAB_00363fe2;
          case 2:
            *local_e0 = 0;
            local_e0 = local_e0 + 1;
            break;
          case 3:
            abStack_c4[iVar13] = bVar3 >> 2;
            iVar13 = iVar13 + 1;
            if (iVar7 == 0) {
              uVar9 = *puVar11;
              puVar11 = puVar11 + 1;
              iVar7 = 0x1f;
              uVar2 = uVar9 >> 1;
            }
            else {
              iVar7 = iVar7 + -1;
              uVar2 = uVar9 >> 2;
              uVar9 = uVar8;
            }
            uVar8 = uVar2;
            cVar6 = local_f1;
            if ((uVar9 & 1) != 0) {
              cVar6 = -local_f1;
            }
            *(char *)((uint)(bVar3 >> 2) + (int)param_1) = cVar6;
            if (local_f0 != param_3) {
              *local_e0 = 0;
              local_f0 = local_f0 + 1;
              local_e4 = iVar13;
              goto switchD_00363cc6_default;
            }
            goto LAB_00364006;
          default:
switchD_00363cc6_default:
            local_e0 = local_e0 + 1;
            goto LAB_00363fe2;
          }
          bVar3 = bVar3 >> 2;
          if (iVar7 == 0) {
            uVar9 = *puVar11;
            puVar11 = puVar11 + 1;
            iVar7 = 0x1f;
            uVar2 = uVar9 >> 1;
          }
          else {
            iVar7 = iVar7 + -1;
            uVar2 = uVar9 >> 2;
            uVar9 = uVar8;
          }
          uVar8 = uVar2;
          if ((uVar9 & 1) == 0) {
            abStack_c4[iVar13] = bVar3;
            iVar13 = iVar13 + 1;
            if (iVar7 == 0) {
              uVar9 = *puVar11;
              puVar11 = puVar11 + 1;
              iVar7 = 0x1f;
            }
            else {
              iVar7 = iVar7 + -1;
              uVar9 = uVar8;
            }
            uVar8 = uVar9 >> 1;
            cVar6 = local_f1;
            if ((uVar9 & 1) != 0) {
              cVar6 = -local_f1;
            }
            *(char *)((uint)bVar3 + (int)param_1) = cVar6;
            bVar14 = local_f0 == param_3;
            local_f0 = local_f0 + 1;
            local_e4 = iVar13;
            if (bVar14) goto LAB_00364006;
          }
          else {
            local_e8 = local_e8 + -1;
            *local_e8 = bVar3 * '\x04' + 3;
          }
          bVar4 = bVar3 + 1;
          if (iVar7 == 0) {
            uVar8 = *puVar11;
            puVar11 = puVar11 + 1;
            iVar7 = 0x1f;
          }
          else {
            iVar7 = iVar7 + -1;
          }
          uVar9 = uVar8 >> 1;
          if ((uVar8 & 1) == 0) {
            abStack_c4[iVar13] = bVar4;
            iVar13 = iVar13 + 1;
            if (iVar7 == 0) {
              uVar9 = *puVar11;
              puVar11 = puVar11 + 1;
              uVar8 = uVar9 >> 1;
              iVar7 = 0x1f;
            }
            else {
              uVar8 = uVar8 >> 2;
              iVar7 = iVar7 + -1;
            }
            cVar6 = local_f1;
            if ((uVar9 & 1) != 0) {
              cVar6 = -local_f1;
            }
            *(char *)((uint)bVar4 + (int)param_1) = cVar6;
            bVar14 = local_f0 == param_3;
            local_f0 = local_f0 + 1;
            local_e4 = iVar13;
            if (bVar14) goto LAB_00364006;
          }
          else {
            local_e8 = local_e8 + -1;
            *local_e8 = bVar4 * '\x04' + 3;
            uVar8 = uVar9;
          }
          bVar4 = bVar3 + 2;
          if (iVar7 == 0) {
            uVar8 = *puVar11;
            puVar11 = puVar11 + 1;
            iVar7 = 0x1f;
          }
          else {
            iVar7 = iVar7 + -1;
          }
          uVar9 = uVar8 >> 1;
          if ((uVar8 & 1) == 0) {
            abStack_c4[iVar13] = bVar4;
            iVar13 = iVar13 + 1;
            if (iVar7 == 0) {
              uVar9 = *puVar11;
              puVar11 = puVar11 + 1;
              uVar8 = uVar9 >> 1;
              iVar7 = 0x1f;
            }
            else {
              uVar8 = uVar8 >> 2;
              iVar7 = iVar7 + -1;
            }
            cVar6 = local_f1;
            if ((uVar9 & 1) != 0) {
              cVar6 = -local_f1;
            }
            *(char *)((uint)bVar4 + (int)param_1) = cVar6;
            bVar14 = local_f0 == param_3;
            local_f0 = local_f0 + 1;
            local_e4 = iVar13;
            if (bVar14) goto LAB_00364006;
          }
          else {
            local_e8 = local_e8 + -1;
            *local_e8 = bVar4 * '\x04' + 3;
            uVar8 = uVar9;
          }
          bVar3 = bVar3 + 3;
          if (iVar7 == 0) {
            uVar8 = *puVar11;
            puVar11 = puVar11 + 1;
            iVar7 = 0x1f;
          }
          else {
            iVar7 = iVar7 + -1;
          }
          uVar9 = uVar8 >> 1;
          if ((uVar8 & 1) == 0) {
            abStack_c4[iVar13] = bVar3;
            iVar13 = iVar13 + 1;
            if (iVar7 == 0) {
              uVar9 = *puVar11;
              puVar11 = puVar11 + 1;
              uVar8 = uVar9 >> 1;
              iVar7 = 0x1f;
            }
            else {
              uVar8 = uVar8 >> 2;
              iVar7 = iVar7 + -1;
            }
            cVar6 = local_f1;
            if ((uVar9 & 1) != 0) {
              cVar6 = -local_f1;
            }
            *(char *)((uint)bVar3 + (int)param_1) = cVar6;
            bVar14 = local_f0 == param_3;
            local_f0 = local_f0 + 1;
            local_e4 = iVar13;
            if (bVar14) goto LAB_00364006;
          }
          else {
            local_e8 = local_e8 + -1;
            *local_e8 = bVar3 * '\x04' + 3;
            uVar8 = uVar9;
          }
LAB_00363fe2:
        } while (local_e0 < local_dc);
      }
      local_f1 = local_f1 >> 1;
      local_e9 = local_e9 + -1;
    } while (local_e9 != '\0');
  }
LAB_00364006:
  *param_2 = (int)puVar11;
  param_2[1] = iVar1;
  param_2[2] = uVar8;
  param_2[3] = iVar7;
  return;
}
