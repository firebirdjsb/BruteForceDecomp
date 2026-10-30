/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFE05857D7EFBEB1879BD563F44FF04C048380D183B00DFA37D89D25A9A245D0
 * Entry: 0x00168fa0, Ghidra index: 4745, label: FUN_00168fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00168fa0(void)

{
  float *pfVar1;
  int in_ECX;
  float *extraout_ECX;
  int iVar2;
  float local_8c;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  undefined4 local_70;
  float *local_6c;
  float *local_68;
  float *local_64;
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_34 [5];
  float local_20;
  float local_1c;
  float local_18;
  float local_8;
  
  local_70 = 0;
  FUN_002339d0(&local_8c);
  fStack_74 = extraout_ECX[0xb];
  local_7c = extraout_ECX[9];
  local_78 = extraout_ECX[10];
  local_44 = local_8c;
  local_50 = local_88;
  local_4c = fStack_84;
  local_48 = local_80;
  if ((*(uint *)(*(int *)(in_ECX + 8) + 0x70) & 0xc00) == 0) {
    pfVar1 = local_34;
    iVar2 = 3;
    do {
      *pfVar1 = 0.0;
      pfVar1 = pfVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_34[1] = extraout_ECX[3];
    local_34[2] = extraout_ECX[4];
    local_20 = extraout_ECX[6];
    local_34[3] = extraout_ECX[5];
    local_18 = extraout_ECX[8];
    local_1c = extraout_ECX[7];
    iVar2 = *(int *)(in_ECX + 8);
    pfVar1 = (float *)(iVar2 + 0x2c);
    local_68 = &local_7c;
    local_8c = *extraout_ECX * *pfVar1 +
               extraout_ECX[2] * *(float *)(iVar2 + 0x34) +
               extraout_ECX[1] * *(float *)(iVar2 + 0x30);
    local_88 = local_34[1] * *pfVar1 +
               local_34[3] * *(float *)(iVar2 + 0x34) + local_34[2] * *(float *)(iVar2 + 0x30);
    local_64 = &local_8c;
    local_80 = 0;
    local_54 = 0;
    fStack_84 = local_20 * *pfVar1 +
                local_18 * *(float *)(iVar2 + 0x34) + local_1c * *(float *)(iVar2 + 0x30);
    local_6c = &local_60;
    local_60 = local_7c - local_8c;
    local_5c = CONCAT44(fStack_74 - fStack_84,local_78 - local_88);
    local_8 = fStack_84;
  }
  FUN_002b9f30();
  FUN_002ba0a0();
  return;
}
