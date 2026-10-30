/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 954CF5684F164CCAB35C9BA42D635F8FFB3F21652F2F5ADE935E8CAE315E730A
 * Entry: 0x00072bd0, Ghidra index: 1288, label: FUN_00072bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00072bd0(void)

{
  int *in_EAX;
  int iVar1;
  int in_EDX;
  
  *in_EAX = 0;
  do {
    if (*(int *)(in_EDX + 0x38 + *in_EAX * 8) != 0) {
      return *(undefined4 *)(in_EDX + 0x38 + *in_EAX * 8);
    }
    iVar1 = *in_EAX + 1;
    *in_EAX = iVar1;
  } while (iVar1 < 7);
  return 0;
}
