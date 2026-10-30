/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75998F733C78130E93C84CA004DEBBDC426AA2BE296BD7A36C97B9826A244B08
 * Entry: 0x001a7800, Ghidra index: 5407, label: FUN_001a7800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7800(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x18;
    if (iVar1 != 0) goto LAB_001a7835;
  }
  FUN_001abe30();
LAB_001a7835:
  FUN_001b27f0(0,0);
  return *(int *)(unaff_EDI + 4) + iVar1 * 0x18;
}
