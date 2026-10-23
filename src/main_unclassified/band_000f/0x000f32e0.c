/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D33C3093ACE4A36057E1675A88985CAE6768133C16FF4F27A2B8264433045EBA
 * Entry: 0x000f32e0, Ghidra index: 3040, label: FUN_000f32e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
undefined4 FUN_000f32e0(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int local_210;
  byte local_209;
  int local_208;
  int *local_204;
  undefined1 local_200 [512];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_208 = param_1[1];
  for (piVar5 = (int *)param_1[0x3b];
      (piVar3 = (int *)0x0, piVar5 != (int *)param_1[0x3c] &&
      (piVar3 = (int *)*piVar5, piVar3[9] != -0x31e9338)); piVar5 = piVar5 + 1) {
  }
  piVar5 = (int *)0x0;
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 4))(), iVar2 == 1)) {
    piVar5 = piVar3;
  }
  piVar3 = (int *)param_1[0x3b];
  piVar6 = (int *)0x0;
  if (piVar3 != (int *)param_1[0x3c]) {
    do {
      piVar6 = (int *)*piVar3;
      if (((int *)*piVar3)[9] == 0x8fb3fdf) break;
      piVar3 = piVar3 + 1;
      piVar6 = (int *)0x0;
    } while (piVar3 != (int *)param_1[0x3c]);
  }
  local_204 = (int *)0x0;
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 4))(), iVar2 == 1)) {
    local_204 = piVar6;
  }
  local_210 = 0xaa82cee;
  uVar4 = FUN_001e97c0(param_2 + 1);
  FUN_002ea9a9(local_200,0x100,uVar4);
  local_209 = FUN_000ef9e0();
  if (param_2 == param_3) {
    local_210 = -0x15e2e7ef;
    uVar4 = FUN_001e97c0();
    FUN_002ea9a9(local_200,0x100,u__s__s_0040d744,local_200,uVar4);
    local_210 = 0x12abb58e;
    if (param_4 != 0) {
      local_210 = 0xef44be8;
    }
    FUN_001e97c0();
    FUN_0010a7d0();
    if (piVar5[9] != DAT_0046d064) goto LAB_000f347a;
    piVar5[9] = local_210;
  }
  else {
    local_210 = 0x12abb58e;
    if (local_209 == 0) {
      local_210 = -0xaf995a9;
    }
    FUN_001e97c0();
    FUN_0010a7d0();
    if (piVar5[9] != DAT_0046d064) goto LAB_000f347a;
    piVar5[9] = local_210;
  }
  (**(code **)(*piVar5 + 0x2c))();
LAB_000f347a:
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 >> 1 & 1) != local_209) {
    *(byte *)(param_1 + 10) = (local_209 << 1 ^ bVar1) & 2 ^ bVar1;
    (**(code **)(*param_1 + 0x24))();
  }
  FUN_0010a7d0();
  if (param_3 != -1) {
    if (((param_2 == param_3) && ((*(byte *)(param_1 + 10) & 1) == 0)) &&
       ((*(byte *)(param_1 + 10) & 2) != 0)) {
      *(undefined1 *)(param_1 + 0x1d) = 0;
      FUN_000ffe10(local_208);
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    return 1;
  }
  piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  local_210 = 0x15adf98f;
  (**(code **)(*piVar5 + 8))(&local_210,0,0);
  return 1;
}
