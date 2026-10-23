/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6818E7A2F6437A4EEFFDFAD4E42A3F5653ACA148D302C3369105CA71BB87EDC6
 * Entry: 0x00135270, Ghidra index: 3871, label: FUN_00135270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00135270(void)

{
  int iVar1;
  int unaff_EDI;
  
  FUN_00135360();
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != *(int *)(unaff_EDI + 8)) {
    do {
      FUN_001352a0(iVar1);
      iVar1 = iVar1 + 0x70;
    } while (iVar1 != *(int *)(unaff_EDI + 8));
  }
  return;
}
