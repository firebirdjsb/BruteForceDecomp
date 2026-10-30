/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1958349E165A8BC1333E498F9AC2DE79DF068EA969FADBFAD5CFC4AE80A58105
 * Entry: 0x001a8b80, Ghidra index: 5448, label: FUN_001a8b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8b80(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x144;
    if (iVar1 != 0) goto LAB_001a8bb8;
  }
  FUN_001aee30();
LAB_001a8bb8:
  FUN_00162290();
  FUN_001b44e0();
  return iVar1 * 0x144 + *(int *)(unaff_EDI + 4);
}
