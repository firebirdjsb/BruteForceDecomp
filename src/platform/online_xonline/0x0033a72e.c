/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A21186D3F9D45D03E5ABBB8C569A88148776D174B494521BEAEA2A1388180E52
 * Entry: 0x0033a72e, Ghidra index: 12506, label: FUN_0033a72e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a72e(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *in_ECX;
  undefined4 unaff_EDI;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  local_c = in_ECX;
  local_8 = in_ECX;
  iVar1 = FUN_003449ff(unaff_EDI,in_EAX,&local_c);
  if ((((iVar1 != 0) && (iVar1 = FUN_003449ff(unaff_EDI,0x80000001,&local_8), iVar1 != 0)) &&
      (iVar1 = FUN_00344e30(unaff_EDI,2,*in_ECX), iVar1 != 0)) &&
     (((iVar1 = FUN_00344a56(unaff_EDI,local_8), iVar1 != 0 &&
       (iVar1 = FUN_003449ff(unaff_EDI,0x80000002,&local_8), iVar1 != 0)) &&
      ((iVar1 = FUN_00344c6b(unaff_EDI,4,in_ECX[1],in_ECX[2]), iVar1 != 0 &&
       (iVar1 = FUN_00344a56(unaff_EDI,local_8), iVar1 != 0)))))) {
    iVar1 = FUN_00344a56(unaff_EDI,local_c);
    return iVar1 != 0;
  }
  return false;
}
