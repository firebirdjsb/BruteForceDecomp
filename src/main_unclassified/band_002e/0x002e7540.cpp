/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A382D29DEB228110D5F77197F80305B102673DE4DDA6DCCC74A537E55EB41B26
 * Entry: 0x002e7540, Ghidra index: 10508, label: FUN_002e7540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e7540(int *param_1)

{
  int in_ECX;
  
  if ((param_1[1] != 0) || (*(char *)(in_ECX + 4) != '\0')) {
    (**(code **)(*param_1 + 0x18))(in_ECX + 6);
    (**(code **)(*param_1 + 0x18))(in_ECX + 7);
    *(undefined1 *)(in_ECX + 4) = 1;
  }
  return param_1[3];
}
