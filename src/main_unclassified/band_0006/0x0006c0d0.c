/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6ABD76CB0AEB56EEF1C81A49AF8DBBF18692BD91650C7111AE5A588CB409CBA
 * Entry: 0x0006c0d0, Ghidra index: 1223, label: FUN_0006c0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b78;
extern uint32_t DAT_00414b7c;
extern uint32_t DAT_00414b80;
extern uint32_t _DAT_00414b84;
extern uint32_t _DAT_004a5898;
extern uint32_t _DAT_004a58a0;
extern uint32_t _DAT_004a58a8;
extern uint32_t _DAT_004a58ac;
extern uint32_t _DAT_004a58b0;
extern uint32_t _DAT_004a58b8;
extern uint32_t _DAT_004a58c8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c0d0(char param_1,float param_2,float param_3)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 < 0.0) {
    fVar4 = (float10)(**(code **)(*(int *)(in_EAX + 0x48) + 0x24))();
    local_54 = (float)fVar4;
  }
  else {
    local_54 = param_2;
  }
  if (param_3 < 0.0) {
    fVar4 = (float10)(**(code **)(*(int *)(in_EAX + 0x48) + 0x28))();
    local_58 = (float)fVar4;
  }
  else {
    local_58 = param_3;
  }
  piVar1 = (int *)(**(code **)(*(int *)(in_EAX + 0x48) + 0x18))();
  if (*(int *)(in_EAX + 0xd0) == -1) {
    *(int *)(in_EAX + 0xd0) = piVar1[2] - *piVar1;
  }
  if (*(int *)(in_EAX + 0xd4) == -1) {
    *(int *)(in_EAX + 0xd4) = piVar1[3] - piVar1[1];
  }
  if (param_1 == '\0') {
    iVar2 = *(int *)(in_EAX + 0xd4);
    fVar6 = 0.0;
    iVar3 = *(int *)(in_EAX + 0xd0);
    fVar5 = 0.0;
  }
  else {
    fVar6 = (float)(*(int *)(in_EAX + 0xd4) / 2);
    iVar2 = -(*(int *)(in_EAX + 0xd4) / 2);
    iVar3 = *(int *)(in_EAX + 0xd0) / 2;
    fVar5 = (float)-(*(int *)(in_EAX + 0xd0) / 2);
  }
  FUN_0006ecf0(fVar5,(float)iVar3,(float)iVar2,fVar6,local_54,local_58);
  _DAT_004a5898 = uStack_50;
  uRam004a589c = uStack_4c;
  _DAT_004a58a0 = uStack_48;
  uRam004a58a4 = uStack_44;
  _DAT_004a58a8 = uStack_40;
  _DAT_004a58ac = uStack_3c;
  _DAT_004a58b0 = uStack_38;
  uRam004a58b4 = uStack_34;
  _DAT_004a58b8 = uStack_30;
  uRam004a58bc = uStack_2c;
  uRam004a58c0 = uStack_28;
  uRam004a58c4 = uStack_24;
  _DAT_004a58c8 = uStack_20;
  uRam004a58cc = uStack_1c;
  uRam004a58d0 = uStack_18;
  uRam004a58d4 = uStack_14;
  if (DAT_00414b80 == in_EAX) {
    DAT_00414b78 = DAT_00414b78 + 1;
  }
  else {
    DAT_00414b78 = 1;
    DAT_00414b7c = 0;
    DAT_00414b80 = in_EAX;
  }
  _DAT_00414b84 = in_EAX;
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  if ((0 < DAT_00414b7c) && (DAT_00414b78 != 0)) {
    FUN_0006ed80();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  return;
}
