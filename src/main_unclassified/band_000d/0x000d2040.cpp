/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC9169662DD8E30CB996C5CF6BAE6FCE2EA673A59C5C7FE30E2C9D370E7F1D36
 * Entry: 0x000d2040, Ghidra index: 2611, label: FUN_000d2040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0xd205c multiplies by the f32 stored at [0x0040d630]. */
extern float _DAT_0040d630;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2040(int *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  iVar7 = param_1[1];
  fVar3 = *(float *)(param_1[10] + 0xc58) * _DAT_0040d630;
  if (iVar7 == -1) {
    iVar7 = 0;
  }
  else {
    iVar1 = param_1[2];
    if (iVar1 < iVar7) {
      iVar7 = (iVar1 - iVar7) + 1 + *param_1;
    }
    else {
      iVar7 = (iVar1 - iVar7) + 1;
    }
  }
  while (iVar7 = iVar7 + -1, -1 < iVar7) {
    iVar1 = param_1[1];
    if (iVar1 == -1) {
      iVar8 = 0;
    }
    else {
      iVar8 = param_1[2];
      if (iVar8 < iVar1) {
        iVar8 = (iVar8 - iVar1) + 1 + *param_1;
      }
      else {
        iVar8 = (iVar8 - iVar1) + 1;
      }
    }
    if ((((iVar7 < iVar8) && (-1 < iVar7)) && (-1 < iVar1)) &&
       (uVar9 = iVar1 + iVar7 & *param_1 - 1U, uVar9 != 0xffffffff)) {
      piVar10 = (int *)(param_1[4] + uVar9 * 0x18);
    }
    else {
      piVar10 = (int *)0x0;
    }
    fVar2 = (float)piVar10[2] - (fVar3 * 0.9 + 1.0) * param_2;
    piVar10[2] = (int)fVar2;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      local_5c = 0;
      iVar1 = *(int *)(piVar10[1] + 0x14);
      FUN_002b3590(piVar10[1],&local_88,*(undefined4 *)(iVar1 + 0x108),
                   *(undefined4 *)(iVar1 + 0x10c));
      uVar6 = local_60;
      uVar5 = local_64;
      uVar4 = local_68;
      local_74 = local_88;
      local_78 = local_7c;
      local_70 = local_84;
      local_6c = local_80;
      FUN_002333b0(&local_78);
      local_58 = local_28;
      uStack_54 = uStack_24;
      uStack_50 = uStack_20;
      uStack_4c = uStack_1c;
      local_38 = local_8;
      local_48 = local_18;
      uStack_44 = uStack_14;
      uStack_40 = uStack_10;
      uStack_3c = uStack_c;
      local_30 = uVar5;
      local_34 = uVar4;
      local_2c = uVar6;
      FUN_0003d730(*piVar10 + 0x14,&local_58);
    }
    else {
      FUN_000d2890(iVar7);
    }
  }
  return;
}
