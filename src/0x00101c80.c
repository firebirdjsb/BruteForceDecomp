/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C03A6DA897B25A689B9B374D340C18D03DC89A8A67EFF9D5AC5F31CE04F3794
 * Entry: 0x00101c80, Ghidra index: 3254, label: FUN_00101c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00101c80(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_20c;
  undefined4 uStack_208;
  int iStack_204;
  undefined1 auStack_200 [512];
  
  uVar4 = *(undefined4 *)(in_EAX + 4);
  local_20c = 0xfd0cf5a8;
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x268))();
  uVar2 = FUN_001e97c0(0x28 - iVar1);
  FUN_002ea9a9(auStack_200,0x100,uVar2);
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  iStack_204 = *piVar3;
  uStack_208 = 0xcc05846;
  uVar4 = FUN_001e97c0(auStack_200,uVar4,*(undefined4 *)(in_EAX + 0x60),0);
  iVar1 = (**(code **)(iStack_204 + 0x38))(&local_20c,uVar4);
  if (iVar1 != 0) {
    FUN_00101c30();
  }
  return;
}
