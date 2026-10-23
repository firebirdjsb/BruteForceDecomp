/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9F2283A82817A96656E4D689EFDF990984C25B8A47291E28111685B525BFCEE
 * Entry: 0x0033b9e1, Ghidra index: 12522, label: FUN_0033b9e1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033b9e1(void)

{
  int in_EAX;
  int iVar1;
  byte *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  iVar1 = FUN_003449ff(unaff_EDI,in_EAX,&local_c);
  if ((((iVar1 != 0) && (iVar1 = FUN_003449ff(unaff_EDI,0x80000001,&local_8), iVar1 != 0)) &&
      (iVar1 = FUN_00344e30(unaff_EDI,2,*(undefined4 *)(unaff_ESI + 4)), iVar1 != 0)) &&
     (((iVar1 = FUN_00344a56(unaff_EDI,local_8), iVar1 != 0 &&
       (iVar1 = FUN_003449ff(unaff_EDI,0x80000002,&local_8), iVar1 != 0)) &&
      ((iVar1 = FUN_00344e30(unaff_EDI,2,*(undefined4 *)(unaff_ESI + 8)), iVar1 != 0 &&
       (iVar1 = FUN_00344a56(unaff_EDI,local_8), iVar1 != 0)))))) {
    if (((*unaff_ESI & 0x80) != 0) && (iVar1 = FUN_0033a9dd(unaff_ESI + 0xc), iVar1 == 0)) {
      return false;
    }
    iVar1 = FUN_003449ff(unaff_EDI,0x80000004,&local_8);
    if (((iVar1 != 0) && (iVar1 = FUN_0033b617(), iVar1 != 0)) &&
       (iVar1 = FUN_00344a56(unaff_EDI,local_8), iVar1 != 0)) {
      iVar1 = FUN_00344a56(unaff_EDI,local_c);
      return iVar1 != 0;
    }
  }
  return false;
}
