/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D13479BFEDF6A69F048DF10C30FB243C46948BFD61CFE7D4B5E9216C518F9F5
 * Entry: 0x00338cc3, Ghidra index: 12481, label: FUN_00338cc3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00338cc3(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EDI;
  bool bVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = -0x7ffffff8;
  }
  iVar1 = FUN_003449ff(unaff_EDI,in_EAX,&local_c);
  if ((iVar1 == 0) || (iVar1 = FUN_003449ff(unaff_EDI,0x10,&local_8), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)*param_1) {
      iVar1 = FUN_00344e30(unaff_EDI,2,param_1[1]);
      if (iVar1 == 0) goto LAB_00338d32;
    }
    iVar1 = FUN_00344a56(unaff_EDI,local_8);
    if (iVar1 == 0) {
LAB_00338d32:
      bVar2 = false;
    }
    else {
      iVar1 = FUN_00344a56(unaff_EDI,local_c);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}
