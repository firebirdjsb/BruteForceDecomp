/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 716C7DEDF82CD8277BD97407921BD48B95D61E9017A6E54D47EC124B5852D70E
 * Entry: 0x00238ac0, Ghidra index: 7885, label: FUN_00238ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00238ac0(void)

{
  char *in_EAX;
  
  if (*in_EAX != '\0') {
    FUN_00238b10();
  }
  if (*(int *)(in_EAX + 0x54) != 0) {
    FUN_00238520();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x54));
  }
  in_EAX[0x5c] = '\0';
  in_EAX[0x5d] = '\0';
  in_EAX[0x5e] = '\0';
  in_EAX[0x5f] = '\0';
  in_EAX[0x58] = '\0';
  in_EAX[0x59] = '\0';
  in_EAX[0x5a] = '\0';
  in_EAX[0x5b] = '\0';
  FUN_002389c0();
  FUN_00238110();
  return;
}
