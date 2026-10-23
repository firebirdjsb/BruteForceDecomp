/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F8A8074180D4B6DA94FA0E4710021FD54BB507F3F86B52B1F648393CC4E0D24
 * Entry: 0x00230040, Ghidra index: 7747, label: FUN_00230040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc6bc;
extern uint32_t PTR_LAB_00394848;
undefined4
FUN_00230040(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
            float *param_6)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  uint uVar8;
  float local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined4 local_158;
  float local_154;
  int local_150 [9];
  undefined4 uStack_12c;
  uint uStack_128;
  undefined **local_124 [65];
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  piVar5 = local_150;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_14 = 0;
  local_20 = 0;
  local_1c = 1;
  local_10 = 0;
  local_124[0] = &PTR_LAB_00394848;
  local_18 = 0xfffffff8;
  local_8 = 0xffffffff;
  local_c = *(int *)(param_1 + 0x6c);
  if (*(int *)(local_c + 0x10) != 0) {
    local_c = *(int *)(local_c + 8);
  }
  iVar4 = FUN_000ddd10(*(undefined4 *)(param_1 + 8),param_6,&local_168,&local_15c,param_3,param_4,
                       local_124,*param_6,0);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x1b0);
  if (iVar4 == 0) {
    param_5[0xd] = 0;
    if (*(int *)(param_1 + 0x184) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x184) + 0x1c);
    }
  }
  else {
    if (*(int *)(iVar4 + 8) == 0) {
      if ((*(int *)(iVar4 + 0x10) == 0) ||
         (iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 0xb0), *(int *)(*(int *)(iVar4 + 0xc) + 4) != 3)
         ) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar4 + 8) + 0x1d4);
    }
    param_5[0xd] = iVar4;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1b0) + 8);
    if (iVar4 == 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1b0) + 0x10);
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0xb0), *(int *)(*(int *)(iVar4 + 0xc) + 4) != 3)
         ) {
        iVar4 = 0;
      }
      uVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 8) + 0xbec) + 0xc))(iVar4);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x1d4);
      uVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 8) + 0xbec) + 0xc))(iVar4);
    }
  }
  param_5[0xe] = uVar3;
  param_5[2] = (undefined4)local_164;
  param_5[1] = local_168;
  param_5[3] = local_164._4_4_;
  param_5[4] = local_15c;
  param_5[6] = local_154;
  param_5[5] = local_158;
  param_5[0xf] = local_150[2];
  param_5[0x12] = local_150[0];
  *param_5 = 0;
  pfVar1 = (float *)(param_1 + 0x25c + param_2 * 0xc);
  uVar2 = *(undefined8 *)(pfVar1 + 1);
  local_168 = DAT_003bc6bc * *pfVar1;
  fVar7 = DAT_003bc6bc * (float)uVar2;
  local_154 = DAT_003bc6bc * (float)((ulonglong)uVar2 >> 0x20);
  local_164 = CONCAT44(local_154,fVar7);
  param_5[7] = local_168;
  param_5[9] = local_154;
  param_5[8] = fVar7;
  param_5[0x13] = 0x3f800000;
  param_5[0x14] = uStack_12c;
  param_5[0x15] = uStack_128 >> 2 & 0x1f;
  fVar6 = (float10)FUN_002324c0();
  if ((float10)0.0 < fVar6) {
    fVar6 = (float10)FUN_00223780(0x3f800000,(float)((float10)1.0 - (float10)*param_6 / fVar6));
    *(float *)(extraout_ECX + 0x4c) = (float)(fVar6 * (float10)*(float *)(extraout_ECX + 0x4c));
  }
  if ((local_150[0] == 1) || (local_150[0] != 2)) {
    if (param_5[0x11] == 0) {
      return 1;
    }
    FUN_0008f6a0(0);
    return 1;
  }
  if ((local_150[1] & -(uint)((*(byte *)(local_150[1] + 0x26) & 0x40) != 0)) == 0) {
    if (param_5[0x11] == 0) goto LAB_0023038a;
    uVar8 = 0;
  }
  else {
    uVar8 = local_150[1];
    if (param_5[0x11] == local_150[1]) goto LAB_0023038a;
  }
  FUN_0008f6a0(uVar8);
LAB_0023038a:
  if (*(int *)(*(int *)(local_150[1] + 0xc) + 4) != 3) {
    return 1;
  }
  FUN_00115000();
  fVar6 = (float10)FUN_00125940();
  param_5[0x13] = (float)(fVar6 * (float10)(float)param_5[0x13]);
  return 1;
}
