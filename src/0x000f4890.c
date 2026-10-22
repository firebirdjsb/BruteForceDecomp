/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 606A25E86C6FDEADEF3C098EDF6978199A90779FDD0F065D0185F6AA42542B87
 * Entry: 0x000f4890, Ghidra index: 3066, label: FUN_000f4890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d760;
undefined4 FUN_000f4890(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_84;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 4))();
    if (iVar1 == 3) {
      FUN_0010caa0();
      iVar1 = FUN_000f4830(param_1);
      iVar2 = FUN_000f4830(param_1);
      iStack_84 = iVar1;
      uVar3 = FUN_001e97c0();
      iStack_84 = iVar2;
      uVar4 = FUN_001e97c0();
      if (iVar1 == iVar2) {
        iStack_84 = -0x2ce5ce5;
        uVar4 = FUN_001e97c0();
        FUN_002ea9a9(auStack_80,0x20,u__s_s_0040cd58,uVar3,uVar4);
        iStack_84 = -0x19c70d5f;
        uVar4 = FUN_001e97c0();
        FUN_002ea9a9(auStack_40,0x20,u__s_s_0040cd58,uVar3,uVar4);
      }
      else {
        FUN_002ea9a9(auStack_80,0x20,&DAT_0040d760,uVar3);
        FUN_002ea9a9(auStack_40,0x20,&DAT_0040d760,uVar4);
      }
      iStack_84 = iVar1;
      FUN_0010c660(&iStack_84);
      iStack_84 = iVar2;
      FUN_0010c660(&iStack_84);
      return 1;
    }
  }
  return 0;
}
