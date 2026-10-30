/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68BC595CBC8F68802414065DCC6D828884231EB38CB7584492B031BF9F07E488
 * Entry: 0x001a7400, Ghidra index: 5396, label: FUN_001a7400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7400(void)

{
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0xac;
    if (iVar1 != 0) goto LAB_001a7437;
  }
  FUN_001ab560();
LAB_001a7437:
  FUN_001b1510();
  FUN_001b2290();
  return iVar1 * 0xac + *(int *)(unaff_ESI + 4);
}
