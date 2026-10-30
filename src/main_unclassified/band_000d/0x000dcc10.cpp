/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA1A9FCC7832C52E719AFE83F3E064586BBD00378DE8BA3C7E7F865A72ED9A50
 * Entry: 0x000dcc10, Ghidra index: 2705, label: FUN_000dcc10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0009e9c0(int param_1,float *param_2);

extern uint32_t DAT_0040d5b8;
extern uint32_t DAT_0041b3a8;
extern uint32_t DAT_0041b428;
extern uint32_t DAT_0041b438;
extern uint32_t DAT_0041b43c;
extern uint32_t DAT_0041b440;
extern uint32_t DAT_0041b478;
extern uint32_t DAT_0041b47c;
extern uint32_t DAT_0041b480;
extern uint32_t DAT_00469abb;
extern uint32_t DAT_00469abc;
extern uint32_t _DAT_0041b458;
extern uint32_t _DAT_0041b45c;
extern uint32_t _DAT_0041b460;
extern uint32_t _DAT_0041b498;
extern uint32_t _DAT_0041b49c;
extern uint32_t _DAT_0041b4a0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dcc10(char param_1,char param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_d0 [42];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  if ((*(byte *)(unaff_EBX + 0xc50) & 8) == 0) {
    if ((param_1 != DAT_00469abb) || (param_2 != DAT_00469abc)) {
      DAT_00469abb = param_1;
      DAT_00469abc = param_2;
      if (param_1 != '\0') {
        if (param_2 != '\0') {
          D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
          return;
        }
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
        return;
      }
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    }
    return;
  }
  local_8 = (int *)0x0;
  if (*(undefined4 **)(unaff_EBX + 0x22c) != (undefined4 *)0x0) {
    local_8 = (int *)**(undefined4 **)(unaff_EBX + 0x22c);
  }
  piVar5 = (int *)0x0;
  piVar7 = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  if (local_8 != *(int **)(unaff_EBX + 0x22c)) {
    do {
      if ((((local_10 != (int *)0x0) && (piVar5 != (int *)0x0)) && (local_1c != (int *)0x0)) &&
         (piVar7 != (int *)0x0)) break;
      piVar2 = (int *)local_8[2];
      bVar1 = *(byte *)(piVar2 + 0x25);
      local_8 = (int *)*local_8;
      if ((((bVar1 & 0x40) != 0) && ((bVar1 & 8) == 0)) && ((bVar1 & 0x10) != 0)) {
        if ((bVar1 & 2) != 0) {
          if ((*(byte *)(piVar2[3] + 0x50) & 8) == 0) {
            if (piVar5 != (int *)0x0) {
              if (local_10 != (int *)0x0) goto LAB_000dccc1;
              local_10 = piVar5;
            }
LAB_000dccbc:
            local_14 = piVar2;
            piVar5 = piVar2;
          }
          else if (local_10 == (int *)0x0) {
            local_10 = piVar2;
          }
          else if (piVar5 == (int *)0x0) goto LAB_000dccbc;
        }
LAB_000dccc1:
        if ((bVar1 & 4) != 0) {
          if ((*(byte *)(piVar2[3] + 0x50) & 8) == 0) {
            if (piVar7 != (int *)0x0) {
              if (local_1c != (int *)0x0) goto LAB_000dccf4;
              local_1c = piVar7;
            }
LAB_000dccef:
            local_18 = piVar2;
            piVar7 = piVar2;
          }
          else if (local_1c == (int *)0x0) {
            local_1c = piVar2;
          }
          else if (piVar7 == (int *)0x0) goto LAB_000dccef;
        }
      }
LAB_000dccf4:
    } while (local_8 != (int *)*(int *)(unaff_EBX + 0x22c));
    if (local_10 != (int *)0x0) {
      iVar3 = (**(code **)(*local_10 + 0x40))();
      local_c = *(undefined4 *)(iVar3 + 0x20);
      local_8 = *(int **)(iVar3 + 0x14);
      local_d0[0x26] = *(undefined4 *)(iVar3 + 8);
      local_d0[0x27] = local_8;
      local_d0[0x28] = local_c;
      goto LAB_000dcd52;
    }
  }
  local_c = 0x3f800000;
  local_8 = (int *)0x3f800000;
  local_d0[0x26] = 0;
  local_d0[0x27] = (int *)0x3f800000;
  local_d0[0x28] = 0x3f800000;
LAB_000dcd52:
  local_d0[0x27] = local_8;
  local_d0[0x28] = local_c;
  if (piVar5 == (int *)0x0) {
    local_c = 0;
    local_8 = (int *)0x0;
    local_d0[0x20] = 0;
    local_d0[0x21] = 0;
    local_d0[0x22] = (int *)0x0;
  }
  else {
    iVar3 = (**(code **)(*piVar5 + 0x40))();
    local_8 = *(int **)(iVar3 + 0x20);
    local_c = *(undefined4 *)(iVar3 + 0x14);
    local_d0[0x20] = *(undefined4 *)(iVar3 + 8);
    local_d0[0x21] = local_c;
    local_d0[0x22] = local_8;
  }
  local_d0[0x22] = local_8;
  local_d0[0x21] = local_c;
  if (local_1c == (int *)0x0) {
    local_c = 0;
    local_8 = (int *)0x0;
    local_d0[0x23] = 0;
    local_d0[0x24] = 0;
    local_d0[0x25] = (int *)0x0;
  }
  else {
    iVar3 = (**(code **)(*local_1c + 0x40))();
    local_8 = *(int **)(iVar3 + 0x20);
    local_c = *(undefined4 *)(iVar3 + 0x14);
    local_d0[0x23] = *(undefined4 *)(iVar3 + 8);
    local_d0[0x24] = local_c;
    local_d0[0x25] = local_8;
  }
  local_d0[0x24] = local_c;
  local_d0[0x25] = local_8;
  if (piVar7 == (int *)0x0) {
    local_d0[0x18] = 0;
    local_24 = 0;
    local_20 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar7 + 0x40))();
    local_d0[0x18] = *(undefined4 *)(iVar3 + 8);
    local_24 = *(undefined4 *)(iVar3 + 0x14);
    local_20 = *(undefined4 *)(iVar3 + 0x20);
  }
  piVar5 = local_10;
  *(undefined4 *)(unaff_EBX + 0xb94) = local_d0[0x26];
  *(int **)(unaff_EBX + 0xb98) = local_d0[0x27];
  *(undefined4 *)(unaff_EBX + 0xb9c) = local_d0[0x28];
  local_8 = local_d0[0x25];
  local_c = local_d0[0x24];
  *(undefined4 *)(unaff_EBX + 0xbb0) = local_d0[0x23];
  *(undefined4 *)(unaff_EBX + 0xbb4) = local_d0[0x24];
  *(int **)(unaff_EBX + 3000) = local_d0[0x25];
  local_d0[0] = local_d0[0x26];
  local_d0[1] = local_d0[0x27];
  local_d0[2] = local_d0[0x28];
  local_d0[8] = local_d0[0x20];
  local_d0[9] = local_d0[0x21];
  local_d0[10] = local_d0[0x22];
  local_d0[0x10] = local_d0[0x23];
  local_d0[0x11] = local_d0[0x24];
  local_d0[0x12] = local_d0[0x25];
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0x3f800000;
  local_d0[0xb] = 0x3f000000;
  local_d0[0xc] = 0;
  local_d0[0xd] = 0;
  local_d0[0xe] = 0;
  local_d0[0xf] = 0x40000000;
  local_d0[0x13] = 0;
  local_d0[0x14] = 0;
  local_d0[0x15] = 0;
  local_d0[0x16] = 0;
  local_d0[0x17] = 0x3f800000;
  local_d0[0x19] = local_24;
  local_d0[0x1a] = local_20;
  local_d0[0x1b] = 0x3f000000;
  local_d0[0x1c] = 0;
  local_d0[0x1d] = 0;
  local_d0[0x1e] = 0;
  local_d0[0x1f] = 0x40000000;
  puVar6 = local_d0;
  puVar8 = &DAT_0041b428;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  if (local_10 == (int *)0x0) {
    local_10 = (int *)0x0;
    local_c = 0;
    uVar4 = 0;
    local_8 = (int *)0x0;
  }
  else {
    FUN_0009e9c0(local_10,local_d0 + 0x29);
    DAT_0041b438 = local_d0[0x29];
    DAT_0041b43c = local_28;
    DAT_0041b440 = local_24;
    iVar3 = piVar5[3];
    uVar4 = *(undefined4 *)(iVar3 + 0x54);
    local_8 = (int *)*(undefined4 *)(iVar3 + 0x5c);
    local_c = *(undefined4 *)(iVar3 + 0x58);
  }
  *(undefined4 *)(unaff_EBX + 0xbc8) = uVar4;
  *(undefined4 *)(unaff_EBX + 0xbcc) = local_c;
  *(int **)(unaff_EBX + 0xbd0) = local_8;
  if (local_14 != (int *)0x0) {
    FUN_0009e9c0(local_14,local_d0 + 0x29);
    _DAT_0041b458 = local_d0[0x29];
    _DAT_0041b45c = local_28;
    _DAT_0041b460 = local_24;
  }
  if (local_1c != (int *)0x0) {
    FUN_0009e9c0(local_1c,local_d0 + 0x29);
    DAT_0041b478 = local_d0[0x29];
    DAT_0041b47c = local_28;
    DAT_0041b480 = local_24;
  }
  if (local_18 != (int *)0x0) {
    FUN_0009e9c0(local_18,local_d0 + 0x29);
    _DAT_0041b498 = local_d0[0x29];
    _DAT_0041b49c = local_28;
    _DAT_0041b4a0 = local_24;
  }
  *(undefined4 *)(unaff_EBX + 0xb84) = DAT_0041b438;
  *(undefined4 *)(unaff_EBX + 0xb88) = DAT_0041b43c;
  *(undefined4 *)(unaff_EBX + 0xb8c) = DAT_0041b440;
  *(undefined4 *)(unaff_EBX + 0xba0) = DAT_0041b478;
  local_d0[5] = DAT_0040d5b8;
  *(undefined4 *)(unaff_EBX + 0xba4) = DAT_0041b47c;
  *(undefined4 *)(unaff_EBX + 0xba8) = DAT_0041b480;
  local_d0[0xc] = local_d0[5];
  local_d0[0xe] = local_d0[5];
  local_d0[0x15] = local_d0[5];
  local_d0[0x1c] = local_d0[5];
  local_d0[0x1e] = local_d0[5];
  local_d0[0] = 0;
  local_d0[1] = 0x3f800000;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_d0[4] = local_d0[5];
  local_d0[6] = local_d0[5];
  local_d0[7] = 0x3f800000;
  local_d0[8] = 0;
  local_d0[9] = 0xbf800000;
  local_d0[10] = 0;
  local_d0[0xb] = 0x3f000000;
  local_d0[0xd] = local_d0[5];
  local_d0[0xf] = 0x40000000;
  local_d0[0x10] = 0;
  local_d0[0x11] = 0x3f800000;
  local_d0[0x12] = 0;
  local_d0[0x13] = 0;
  local_d0[0x14] = local_d0[5];
  local_d0[0x16] = local_d0[5];
  local_d0[0x17] = 0x3f800000;
  local_d0[0x18] = 0;
  local_d0[0x19] = 0xbf800000;
  local_d0[0x1a] = 0;
  local_d0[0x1b] = 0x3f000000;
  local_d0[0x1d] = local_d0[5];
  local_d0[0x1f] = 0x40000000;
  puVar6 = local_d0;
  puVar8 = &DAT_0041b3a8;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  DAT_00469abb = param_1;
  DAT_00469abc = param_2;
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  *(byte *)(unaff_EBX + 0xc50) = *(byte *)(unaff_EBX + 0xc50) & 0xf7;
  return;
}
