/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB31D29B82F36FBABCC468405AEA7514AD9DC7A52C4E594912DDDC722064C297
 * Entry: 0x00263330, Ghidra index: 8672, label: FUN_00263330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263330(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x1c));
  }
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)(in_EAX + 0x20) = 0;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  if (*(int *)(in_EAX + 0xc) != 0) {
    FUN_00256480(in_EAX + 8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0xc));
  }
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  return;
}
