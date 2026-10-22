/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05840459D61B4E67378C983642E9AB24F1292B4BC098ED16164887AE488A8CBB
 * Entry: 0x0010d9d0, Ghidra index: 3500, label: FUN_0010d9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cd24;
extern uint32_t DAT_00469b58;
undefined4 FUN_0010d9d0(uint param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_38;
  undefined2 local_34;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined2 local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  piVar3 = (int *)FUN_0010d600();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (*piVar3 == 0x43d9074) {
    uVar4 = FUN_0010d870();
    return uVar4;
  }
  if (*piVar3 == -0x38d99eb) {
    uVar4 = FUN_0010d970();
    return uVar4;
  }
  param_1 = param_1 & 0xffffff00;
  if (*(char *)(uVar1 + 0x90) != '\0') {
    FUN_0010a7d0();
    *(undefined1 *)(uVar1 + 0x90) = 0;
  }
  local_20 = 7;
  local_24 = 0;
  local_34 = 0;
  FUN_00087940(&local_38,0,0xffffffff);
  if (*piVar3 == 0x4515786) {
    if (local_24 != 0) {
      FUN_00087a00();
    }
    goto LAB_0010db32;
  }
  if ((int)local_24 < *(int *)(uVar1 + 0x1bc)) {
    if (*piVar3 != -0x1687d33b) {
      local_4 = 7;
      local_8 = 0;
      local_18 = 0;
      FUN_00100f90();
      iVar5 = FUN_001016d0();
      if ((iVar5 != 0) && (cVar2 = FUN_00109a60(local_1c), cVar2 != '\0')) {
        FUN_0008f110(0);
      }
      FUN_000853c0();
      goto LAB_0010db32;
    }
    if (0 < (int)local_24) {
      FUN_002eaa70(&DAT_0040cd24);
      FUN_0008ed00();
      goto LAB_0010db32;
    }
  }
  param_1 = CONCAT31(param_1._1_3_,1);
LAB_0010db32:
  FUN_0010a7d0();
  if ((char)param_1 == '\0') {
    param_1 = 0xf06bc0ab;
    piVar3 = *(int **)(DAT_00469b58 + 8);
  }
  else {
    param_1 = 0xfd890279;
    piVar3 = *(int **)(DAT_00469b58 + 8);
  }
  (**(code **)(*piVar3 + 0x22c))(&param_1);
  if (7 < local_24) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_38);
  }
  return 1;
}
