/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD0344EEE04393D4FB4D1CFDDDF88A01A1F598A6BD06F256756288DD2EF7E423
 * Entry: 0x00356de0, Ghidra index: 13146, label: FUN_00356de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00356de0(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_002f8d90();
  *(int *)(unaff_EDI + 0x2a8) = *(int *)(unaff_EDI + 0x2a8) + iVar1 + unaff_ESI;
  FUN_002f8da0(unaff_ESI);
  return;
}
