/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 110EE32BF7779DF3AD7F45382CBBE884EC8BE5A4ACAEB3BE46018B2EF92A9AB0
 * Entry: 0x001434c0, Ghidra index: 4140, label: FUN_001434c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001434c0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)(in_EAX + 8) = 0xffffffff;
  if (*(int *)(in_EAX + 0x48) != 0) {
    FUN_00234470();
  }
  puVar1 = *(undefined4 **)(in_EAX + 0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00234470();
    *puVar1 = 0;
    if (puVar1[4] != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar1[4]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar1);
  }
  FUN_00143570();
  if (*(int *)(in_EAX + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x34));
  }
  *(undefined4 *)(in_EAX + 0x34) = 0;
  *(undefined4 *)(in_EAX + 0x38) = 0;
  *(undefined4 *)(in_EAX + 0x3c) = 0;
  if (*(int *)(in_EAX + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x24));
  }
  *(undefined4 *)(in_EAX + 0x24) = 0;
  *(undefined4 *)(in_EAX + 0x28) = 0;
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  if (*(int *)(in_EAX + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x10));
  }
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  return;
}
