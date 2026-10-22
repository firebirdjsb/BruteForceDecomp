/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4D17EC6694D1972EF686F867A060C96390B041293BBCF14B4AFDF06A79ACF37
 * Entry: 0x000872a0, Ghidra index: 1610, label: FUN_000872a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000872a0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x24));
  }
  *(undefined4 *)(in_EAX + 0x24) = 0;
  *(undefined4 *)(in_EAX + 0x28) = 0;
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  if (*(int *)(in_EAX + 0x14) != 0) {
    FUN_00087460(in_EAX + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x14));
  }
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return;
}
