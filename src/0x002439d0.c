/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 557BEC72B3C009ABA49AD617FB1D5C16F7FEA06F7BA11FBE2773FF45284524F9
 * Entry: 0x002439d0, Ghidra index: 8058, label: FUN_002439d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002439d0(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x40) {
    FUN_00243040(in_EAX);
  }
  return;
}
