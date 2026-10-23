/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C495811A10BAB0B206CD43804A05AE1FBB97896EC59E99F9076A816DC070A101
 * Entry: 0x000f8310, Ghidra index: 3116, label: FUN_000f8310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000f8310(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_25;
  undefined1 auStack_20 [4];
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_10 [4];
  int iStack_c;
  int iStack_8;
  
  local_25 = 0;
  iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x210))();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_001e0dd0(auStack_10);
  FUN_00074fb0();
  iVar2 = iStack_c;
  if (iStack_c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iStack_8 - iStack_c >> 2;
  }
  iVar3 = FUN_000782c0(iVar3);
  if ((iVar3 == 0) || (cVar1 = FUN_00077e40(iVar3), cVar1 == '\0')) goto LAB_000f8466;
  uVar4 = FUN_001e97c0();
  FUN_002eaa70(uVar4);
  FUN_0008ed00();
  FUN_001e0dd0(auStack_20);
  FUN_00074fb0();
  if (iStack_1c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iStack_18 - iStack_1c >> 2;
  }
  iVar2 = FUN_000782c0(iVar2);
  if (iVar2 != 0) {
    iVar2 = FUN_00077e00(iVar2);
    if (iVar2 == -1) {
      FUN_0008ea70(param_2);
      FUN_001e97c0();
    }
    else {
      if (iVar2 != 1) goto LAB_000f8451;
      FUN_0008ea70(param_2);
      FUN_001e97c0();
    }
    FUN_0008ea70(param_2);
  }
LAB_000f8451:
  local_25 = 1;
  FUN_0004f7f0();
  iVar2 = iStack_c;
LAB_000f8466:
  if (iVar2 == 0) {
    return local_25;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar2);
}
