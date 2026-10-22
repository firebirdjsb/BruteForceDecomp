/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF78ED5A38DD7D9365F4A76DDB296901198ADEC5727D419BA6CF557CDE911A0D
 * Entry: 0x000413f0, Ghidra index: 495, label: FUN_000413f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003a3fa4;
undefined4 FUN_000413f0(undefined4 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  int iStack_248;
  int iStack_244;
  undefined *puStack_240;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  
  if ((*(int *)(in_EAX + 0xc) == 0) || ((*(uint *)(*(int *)(in_EAX + 0xc) + 0x24) & 0x8000) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar5 = *(int *)(param_2 + 0xc);
  piVar7 = (int *)(param_2 + 0xc);
  if ((iVar5 == 0) || ((*(uint *)(iVar5 + 0x24) & 0x8000) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar2) {
    if (bVar1) {
      return 0;
    }
  }
  else if (bVar1) {
    puVar3 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 8) + 4))();
    uStack_24c = puVar3[2];
    iStack_250 = puVar3[1];
    uStack_254 = *puVar3;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    puStack_240 = &DAT_003a3fa4;
    iStack_248 = uStack_24c;
    iStack_244 = iStack_250;
    FUN_00020100(0,0x42200000,0x7f7fffff);
    uVar4 = (**(code **)(*(int *)(*piVar7 + 8) + 4))();
    iVar5 = FUN_0004d630(uVar4);
    if (iVar5 != 0) {
      iStack_250 = 0;
      iStack_244 = iVar5;
      if (*piVar7 != 0) {
        FUN_0008f6a0(*piVar7);
      }
      iVar6 = *(int *)(iVar5 + 0x30);
      iStack_248 = FUN_000e1910(iVar5 + 0x2c,iVar6,*(undefined4 *)(iVar6 + 4),&uStack_254);
      FUN_000389d0();
      *(int *)(iVar6 + 4) = iStack_248;
      **(int **)(iStack_248 + 4) = iStack_248;
      if (iStack_250 != 0) {
        FUN_0008f6e0();
      }
      iStack_250 = 0;
      FUN_0008f6a0(iVar5);
      iVar5 = *(int *)(*piVar7 + 0x30);
      iVar6 = FUN_000e1910(*piVar7 + 0x2c,iVar5,*(undefined4 *)(iVar5 + 4),&uStack_254);
      FUN_000389d0();
      *(int *)(iVar5 + 4) = iVar6;
      **(int **)(iVar6 + 4) = iVar6;
      if (iStack_250 != 0) {
        FUN_0008f6e0();
      }
      FUN_001611d0();
      FUN_001611d0();
      return 1;
    }
  }
  return 0;
}
