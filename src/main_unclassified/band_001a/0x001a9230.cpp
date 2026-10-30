/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63757308D821379B6C441F13BFE6F5792AE0EDDEEA649F6B02A22767A720AC79
 * Entry: 0x001a9230, Ghidra index: 5459, label: FUN_001a9230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9230(void)

{
  int in_EAX;
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x70;
    if (iVar1 != 0) goto LAB_001a9268;
  }
  FUN_001aff40(in_EAX);
  in_EAX = 1;
LAB_001a9268:
  FUN_001b0080(unaff_ESI,iVar1 + in_EAX);
  return iVar1 * 0x70 + *(int *)(unaff_ESI + 4);
}
