/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F8503FA9AE195EA2E49FAEBBA3432591AE109BFD6D16B9AECCD68EEC32FD6EF
 * Entry: 0x002412f0, Ghidra index: 8004, label: FUN_002412f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002412f0(void)

{
  int iVar1;
  int *in_EAX;
  int in_EDX;
  
  iVar1 = *in_EAX;
  if ((iVar1 != 0) == 0) {
    in_EDX = 1;
  }
  if ((uint)(iVar1 != 0) + in_EDX == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  if (iVar1 == 0) {
    FUN_00243850();
  }
  return;
}
