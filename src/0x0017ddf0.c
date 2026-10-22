/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2ABD0921AAA28E318D67B69BC47EE623B3F267FFDF8DE8BD76EF15C66728A954
 * Entry: 0x0017ddf0, Ghidra index: 5093, label: FUN_0017ddf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017ddf0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0xc) != 0) {
    FUN_000e3c30(*(undefined4 *)(in_EAX + 0x10),in_EAX + 8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0xc));
  }
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  return;
}
