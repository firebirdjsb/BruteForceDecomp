/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 194208B13C505B96A62B64DA4526BA12BF947985F792C499C6EB8749F2A81629
 * Entry: 0x002a0340, Ghidra index: 9505, label: FUN_002a0340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a0340(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar2 = *unaff_EDI;
  while (iVar2 != 0) {
    piVar1 = (int *)*unaff_EDI;
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1);
    *unaff_EDI = iVar2;
    (**(code **)(*piVar1 + 0x58))(piVar1,0);
    (**(code **)(*piVar1 + 0x54))(piVar1,0);
    iVar2 = *unaff_EDI;
  }
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  return;
}
