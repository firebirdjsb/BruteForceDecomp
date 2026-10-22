/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF7ED5835C4872F93C3651EAEF36C7372BA34C2FAB5E2ED89614A17274099BDE
 * Entry: 0x001a91d0, Ghidra index: 5458, label: FUN_001a91d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a91d0(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 4;
    if (iVar1 != 0) goto LAB_001a91f4;
  }
  FUN_001afe30();
LAB_001a91f4:
  FUN_001b4f40();
  return iVar1 * 0x10 + *(int *)(unaff_EDI + 4);
}
