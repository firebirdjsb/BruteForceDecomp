/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F490F66FDD15F2B4474E4EB742058A4A61F9BE9EA383E418DC0DF9C66B97E988
 * Entry: 0x00373130, Ghidra index: 13405, label: FUN_00373130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037df30;
extern uint32_t DAT_0037df34;
extern uint32_t DAT_0037df38;
extern uint32_t DAT_0037ec88;
extern uint32_t UNK_00140038;
extern uint32_t _DAT_0037b258;
extern uint32_t _DAT_0037b25c;
extern uint32_t _DAT_0037b260;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00373130(undefined4 *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  undefined4 extraout_EDX;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  uint local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = 0;
  if ((DAT_0037df34 == 0) && ((*(byte *)(param_1 + 2) & 0x40) == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
  }
  if ((((*(byte *)(param_1[0xdf] + 4) & 0x12) == 0) && (DAT_0037df30 != 0)) &&
     ((param_1[0x536] & 0xffffffef) != 1)) {
    puVar2 = (undefined4 *)*param_1;
    if ((undefined4 *)param_1[1] <= puVar2) {
      puVar2 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    uVar7 = 1;
    if (iVar8 != 0) {
      if ((DAT_0037df38 != 0) && (param_1[0xe5] != 0)) {
        uVar7 = 0x10001;
      }
      puVar2 = (undefined4 *)FUN_00373010();
    }
    *puVar2 = 0x40294;
    puVar2[1] = uVar7;
    puVar2[2] = 0x40314;
    puVar2[3] = 1;
    uVar7 = D3D8__D3DRS_TwoSidedLighting;
    puVar2[4] = 0x417c4;
    puVar2[5] = uVar7;
    puVar2[6] = 0x403b8;
    puVar2[7] = 1;
    uVar10 = FUN_00372cf0();
    iVar8 = (int)((ulonglong)uVar10 >> 0x20);
    *(undefined4 *)(iVar8 + 0x20) = 0x40298;
    *(int *)(iVar8 + 0x24) = (int)uVar10;
    piVar3 = (int *)FUN_00372e80();
    piVar9 = (int *)param_1[0xe5];
    local_2c = 0;
    if (piVar9 != (int *)0x0) {
      iVar8 = 0x41024;
      do {
        *param_1 = piVar3;
        if ((int *)param_1[1] <= piVar3) {
          D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        }
        piVar4 = (int *)FUN_00372d90(iVar6);
        if (*piVar9 == 3) {
          local_2c = local_2c | 1 << ((char)iVar6 * '\x02' & 0x1fU);
          FUN_003759c0(&local_24,piVar9 + 0x1b,0,param_1 + 0x204);
          FUN_00375980();
          local_18 = _DAT_0037b258 + local_24;
          local_14 = _DAT_0037b25c + local_20;
          local_10 = _DAT_0037b260 + local_1c;
          FUN_00375980();
          *piVar4 = iVar8;
          piVar4[1] = 0x7149f2ca;
          piVar4[2] = iVar8 + 0x140004;
          piVar4[3] = (int)local_18;
          piVar4[4] = (int)local_14;
          piVar4[5] = (int)local_10;
          piVar4[6] = (int)local_24;
          piVar4[7] = (int)local_20;
          piVar4[8] = (int)local_1c;
          piVar3 = piVar4 + 9;
        }
        else {
          piVar4[1] = piVar9[0x13];
          *piVar4 = iVar8;
          FUN_003759c0(&local_c,piVar9 + 0xd,0x3f800000,param_1 + 0x204);
          piVar4[2] = (int)(&UNK_00140038 + iVar8);
          piVar4[3] = local_c;
          piVar4[4] = local_8;
          piVar4[5] = local_4;
          piVar4[6] = piVar9[0x15];
          piVar4[7] = piVar9[0x16];
          piVar4[8] = piVar9[0x17];
          piVar3 = piVar4 + 9;
          bVar5 = (char)iVar6 * '\x02';
          if (*piVar9 == 1) {
            local_2c = local_2c | 2 << (bVar5 & 0x1f);
          }
          else {
            local_2c = local_2c | 3 << (bVar5 & 0x1f);
            FUN_003759c0(&local_24,piVar9 + 0x1b,0,extraout_EDX);
            FUN_00375980();
            fVar1 = (float)piVar9[0x21];
            local_24 = local_24 * fVar1;
            piVar3 = piVar4 + 0x11;
            local_20 = local_20 * fVar1;
            local_1c = fVar1 * local_1c;
            piVar4[9] = iVar8 + 0x18001c;
            piVar4[10] = piVar9[0x1e];
            piVar4[0xb] = piVar9[0x1f];
            piVar4[0xc] = piVar9[0x20];
            piVar4[0xd] = (int)local_24;
            piVar4[0xe] = (int)local_20;
            piVar4[0xf] = (int)local_1c;
            piVar4[0x10] = piVar9[0x22];
          }
        }
        iVar8 = iVar8 + 0x80;
        iVar6 = iVar6 + 1;
      } while ((iVar8 != 0x41424) && (piVar9 = (int *)piVar9[0x23], piVar9 != (int *)0x0));
    }
    *piVar3 = 0x403bc;
    piVar3[1] = local_2c;
    *param_1 = piVar3 + 2;
    return;
  }
  puVar2 = (undefined4 *)*param_1;
  if ((undefined4 *)param_1[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x40314;
  puVar2[1] = 0;
  puVar2[2] = 0x403b8;
  puVar2[3] = iVar8;
  puVar2[4] = 0x40294;
  puVar2[5] = 0x20001;
  uVar7 = D3D8__D3DRS_TwoSidedLighting;
  puVar2[6] = 0x417c4;
  puVar2[7] = uVar7;
  *param_1 = puVar2 + 8;
  return;
}
