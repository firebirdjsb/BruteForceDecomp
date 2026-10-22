/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29FDD9D70A186D47F54393676FF907CE4500337EC28B728C9C6899FB277A1DDB
 * Entry: 0x0022feb0, Ghidra index: 7746, label: FUN_0022feb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0022feb0(int param_1)

{
  int iVar1;
  undefined4 *in_EAX;
  int *piVar2;
  int unaff_EBX;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  
  local_70 = in_EAX[2];
  local_74 = in_EAX[1];
  local_78 = *in_EAX;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_7c = 0x3f800000;
  local_8c = 0x3f800000;
  local_9c = 0x3f800000;
  iVar1 = *(int *)(*(int *)(unaff_EBX + 0xc) + 0x158);
  if ((iVar1 != DAT_0046d064) && (iVar1 != DAT_0046d064)) {
    piVar2 = (int *)FUN_000da800();
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(piVar2[0x3a] + 0xc) = 0;
      (**(code **)(*piVar2 + 0x44))(&local_9c);
      FUN_0021c380(0x3f800000);
    }
  }
  piVar2 = (int *)FUN_00076310();
  iVar1 = *piVar2;
  if (iVar1 != DAT_0046d064) {
    FUN_0003f010();
    uStack_64 = in_EAX[2];
    uStack_68 = in_EAX[1];
    uStack_6c = *in_EAX;
    uStack_60 = 1;
    FUN_00179250(*(undefined4 *)(*(int *)(param_1 + 8) + 0x208),iVar1,7);
  }
  FUN_0001d0c0();
  if (*(int *)(*(int *)(unaff_EBX + 0xc) + 0x168) != DAT_0046d064) {
    piVar2 = (int *)FUN_000da800();
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(piVar2[0x3a] + 0xc) = 0;
      (**(code **)(*piVar2 + 0x44))(&local_9c);
      FUN_0021c380(0x3f800000);
    }
  }
  return;
}
