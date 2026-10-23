/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C41FE2FA640E68D9B56E7F4885B7E7D3153FB5FC79FDEF77CC1F0967713DB9DB
 * Entry: 0x002c2a20, Ghidra index: 10043, label: FUN_002c2a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float10 FUN_002c2a20(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int *extraout_EDX;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float local_74;
  float fStack_70;
  undefined4 local_6c;
  float fStack_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  float fStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  float local_48;
  int *local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float local_10;
  float local_c;
  int local_8 [2];
  
  FUN_002d4e50(local_8);
  iVar1 = *(int *)(param_1 + 0x40);
  local_44 = local_8;
  iVar4 = 0;
  puVar3 = (undefined4 *)register0x00000010;
  do {
    puVar3 = puVar3 + -1;
    if (*(int *)(*local_44 + 8) != 0) {
      local_24 = 0;
      iVar2 = *(int *)(*(int *)(iVar4 + 0x10 + param_1) + 0x94);
      local_30 = *(undefined4 *)(iVar2 + 0xfc);
      local_2c = *(undefined4 *)(iVar2 + 0x10c);
      local_28 = *(undefined4 *)(iVar2 + 0x11c);
      local_6c = 0;
      FUN_002b6640(&local_78,&local_30,iVar1);
      local_10 = local_74 * local_74 + fStack_70 * fStack_70 + local_78 * local_78;
      local_48 = SQRT(local_10);
      local_c = local_10;
      fVar5 = (float10)(**(code **)(*extraout_EDX + 4))();
      fVar6 = (float10)(*(code *)**(undefined4 **)*puVar3)();
      if (*(float *)(param_1 + 0x44) < 1e-10) {
        return (float10)0.0;
      }
      iVar2 = *(int *)(param_1 + 0x40);
      fVar9 = (float)((((float10)*(float *)(param_1 + 0x44) -
                       ((float10)*(float *)(param_1 + 0x44) - fVar6 * (float10)(float)fVar5) *
                       (float10)local_48) / (float10)*(float *)(param_1 + 0x44)) * (float10)0.005);
      fVar11 = *(float *)(param_1 + 0x38);
      fVar10 = *(float *)(param_1 + 0x3c);
      fVar7 = fVar11 * *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x80) * fVar10;
      fVar8 = fVar11 * *(float *)(iVar2 + 0x74) + (float)*(undefined8 *)(iVar2 + 0x84) * fVar10;
      fVar10 = fVar11 * *(float *)(iVar2 + 0x78) +
               (float)((ulonglong)*(undefined8 *)(iVar2 + 0x84) >> 0x20) * fVar10;
      FUN_002b65a0(&local_78);
      fVar11 = local_74 * fVar8 + fStack_70 * fVar10 + local_78 * fVar7;
      if (fVar9 < ABS(fVar11)) {
        uStack_14 = 0;
        fStack_20 = fVar7;
        fStack_1c = fVar8;
        fStack_18 = fVar10;
        FUN_002b8d10(&fStack_20,&local_78,-fVar11);
        fStack_40 = local_78 * fVar9;
        uStack_34 = 0;
        fStack_3c = local_74 * fVar9;
        fStack_38 = fStack_70 * fVar9;
        if (fVar11 < 0.0) {
          fStack_40 = fStack_40 * -1.0;
          fStack_3c = fStack_3c * -1.0;
          fStack_38 = fStack_38 * -1.0;
        }
        uStack_4c = 0;
        fStack_58 = fStack_20 + fStack_40;
        fVar9 = fStack_1c + fStack_3c;
        fVar11 = fStack_18 + fStack_38;
        uStack_54 = CONCAT44(fVar11,fVar9);
        *param_2 = fStack_58;
        param_2[1] = fVar9;
        param_2[2] = fVar11;
        param_2[3] = 0.0;
        *(float *)(param_1 + 0x38) =
             fStack_58 * *(float *)(iVar1 + 0x70) +
             fVar9 * *(float *)(iVar1 + 0x74) + fVar11 * *(float *)(iVar1 + 0x78);
        *(float *)(param_1 + 0x3c) =
             fStack_58 * *(float *)(iVar1 + 0x80) +
             fVar11 * *(float *)(iVar1 + 0x88) + fVar9 * *(float *)(iVar1 + 0x84);
      }
    }
    iVar4 = iVar4 + 0x14;
    local_44 = local_44 + 1;
  } while (iVar4 < 0x28);
  uStack_5c = 0;
  fVar9 = *(float *)(param_1 + 0x38);
  local_48 = *(float *)(param_1 + 0x3c);
  fStack_68 = fVar9 * *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x80) * local_48;
  fVar11 = fVar9 * *(float *)(iVar1 + 0x74) + (float)*(undefined8 *)(iVar1 + 0x84) * local_48;
  fVar9 = fVar9 * *(float *)(iVar1 + 0x78) +
          (float)((ulonglong)*(undefined8 *)(iVar1 + 0x84) >> 0x20) * local_48;
  uStack_64 = CONCAT44(fVar9,fVar11);
  *param_2 = fStack_68;
  param_2[1] = fVar11;
  param_2[2] = fVar9;
  fVar5 = (float10)FUN_002b6500(param_2);
  return fVar5;
}
