/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DABE7338339EC475EACAFD00F836E8B66AF85D73D23BED9CC5275F4F71EB0D02
 * Entry: 0x001372c0, Ghidra index: 3902, label: FUN_001372c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001372c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x10);
  if (iVar2 != *(int *)(unaff_EDI + 0x14)) {
    do {
      iVar1 = FUN_00137360(unaff_EDI,param_1,0);
      if ((*(int *)(iVar2 + 4) <= iVar1) && (iVar1 <= *(int *)(iVar2 + 8))) {
        return 1;
      }
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != *(int *)(unaff_EDI + 0x14));
  }
  return 0;
}
