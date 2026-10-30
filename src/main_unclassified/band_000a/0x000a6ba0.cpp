/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B5BC2E1B83D38B3DE9A2319C9A854E33AACA333555B0D7A6BA44C4B7138E368
 * Entry: 0x000a6ba0, Ghidra index: 1976, label: FUN_000a6ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1d8;
extern uint32_t DAT_0040d778;
extern uint32_t DAT_0040d780;
extern uint32_t DAT_0040d788;
extern uint32_t *DAT_00469b54;
extern uint32_t _DAT_0040d774;
extern uint32_t _DAT_0040d77c;
extern uint32_t _DAT_0040d784;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a6ba0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_68 [5];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  int local_14;
  float local_10;
  int local_c;
  float local_8;
  
  FUN_002385a0();
  local_8 = 0.0;
  FUN_0006a610(&local_8);
  local_8 = 0.0;
  FUN_0006a610(&local_8);
  local_8 = 0.0;
  FUN_0006a610(&local_8);
  local_8 = 1.4013e-45;
  FUN_0006a610(&local_8);
  local_8 = 1.079e-42;
  FUN_0006a610(&local_8);
  local_8 = 1.0804e-42;
  FUN_0006a610(&local_8);
  local_8 = 0.0;
  FUN_0006a610(&local_8);
  iVar2 = (int)param_2;
  iVar5 = *(int *)(*(int *)((int)param_2 + 0x80) + 0xb78);
  if (*(int *)((int)param_2 + 0x8c) != 0) {
    FUN_000e4ca0(iVar5,*(int *)((int)param_2 + 0x8c));
  }
  local_c = *(int *)(iVar5 + 0xc);
  local_14 = *(int *)(iVar5 + 0x10);
  FUN_00062280();
  param_2 = 4.2039e-45;
  FUN_0006a610(&param_2);
  param_2 = 4.2039e-45;
  FUN_0006a610(&param_2);
  param_2 = *(float *)(iVar2 + 0x998);
  FUN_0006a610(&param_2);
  cVar3 = (**(code **)(*DAT_00469b54 + 0x30))();
  if (cVar3 != '\0') {
    (**(code **)(*DAT_00469b54 + 0x38))();
  }
  piVar4 = (int *)(**(code **)(*(int *)(*(int *)(iVar2 + 0x8c) + 0x48) + 0x18))();
  param_2 = (float)*piVar4;
  local_10 = (float)piVar4[2];
  local_8 = (float)piVar4[1];
  local_18 = (float)piVar4[3];
  cVar3 = FUN_000a4a60(2);
  if ((cVar3 != '\0') && (cVar3 = FUN_000a4d00(), cVar3 != '\0')) {
    fVar1 = (float)local_c;
    local_68[4] = *(undefined4 *)(param_1 + 0x14);
    local_50 = *(undefined4 *)(param_1 + 0x1c);
    local_54 = *(undefined4 *)(param_1 + 0x18);
    local_68[0] = 0;
    local_68[1] = 0x3f000000;
    local_68[2] = 0x3f800000;
    local_68[3] = 0x40000000;
    local_4c = *(undefined4 *)(param_1 + 0x20);
    if (local_c < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_48 = fVar1 / (local_10 - param_2);
    fVar1 = (float)local_14;
    if (local_14 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_3c = local_8;
    local_30 = DAT_0040d780;
    local_40 = param_2;
    local_1c = *(undefined4 *)(param_1 + 0xc);
    local_38 = DAT_0040d788;
    local_28 = DAT_0040d778;
    local_20 = *(undefined4 *)(param_1 + 0x10);
    local_44 = fVar1 / (local_18 - local_8);
    local_34 = 1.0 / _DAT_0040d784;
    local_2c = 1.0 / _DAT_0040d77c;
    local_24 = 1.0 / _DAT_0040d774;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar6 = local_68;
      puVar7 = &DAT_0037e1d8;
      for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x14);
  }
  return 1;
}
