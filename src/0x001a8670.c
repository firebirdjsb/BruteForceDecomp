/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCD777DC150D238018E93800411CC2D87D6CACCFD2213E8ABA1129AD24200267
 * Entry: 0x001a8670, Ghidra index: 5443, label: FUN_001a8670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8670(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
    if (iVar1 != 0) goto LAB_001a86ab;
  }
  FUN_001adcc0(in_EAX);
  in_EAX = 1;
LAB_001a86ab:
  FUN_001b3af0(iVar1 + in_EAX,0);
  return iVar1 * 0x1c + *(int *)(in_ECX + 4);
}
