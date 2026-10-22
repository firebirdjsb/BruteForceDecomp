/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4E9F53E153E742FE2204999BC6A58B5ACACEA58A1F1F157E19A3054473FE566
 * Entry: 0x00078230, Ghidra index: 1421, label: FUN_00078230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00078230(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x14) != 0) {
    FUN_00077820(in_EAX + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x14));
  }
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return;
}
