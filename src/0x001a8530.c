/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A82FEA7416972BEBB26A7D4280E1566C8FC45841921E1BE27451D63BB9E81A2
 * Entry: 0x001a8530, Ghidra index: 5439, label: FUN_001a8530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8530(void)

{
  int in_EAX;
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x70;
    if (iVar1 != 0) goto LAB_001a8568;
  }
  FUN_001b1130(in_EAX);
  in_EAX = 1;
LAB_001a8568:
  FUN_001b1270(unaff_ESI,iVar1 + in_EAX);
  return iVar1 * 0x70 + *(int *)(unaff_ESI + 4);
}
