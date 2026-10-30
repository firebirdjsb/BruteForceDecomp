/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3AEE563ABFF3AECB5E0A81F995C193D78DEBDB9EDB4EE1F17D1CA56651B9CF3
 * Entry: 0x0033b402, Ghidra index: 12518, label: FUN_0033b402
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033b402(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EDI;
  bool bVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = -0x7ffffff5;
  }
  iVar1 = FUN_003449ff(unaff_EDI,in_EAX,&local_c);
  if ((iVar1 == 0) || (iVar1 = FUN_003449ff(unaff_EDI,0x10,&local_8), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)*param_1) {
      iVar1 = FUN_0033aa53(unaff_EDI,0,param_1 + 1);
      if (iVar1 == 0) goto LAB_0033b472;
    }
    iVar1 = FUN_00344a56(unaff_EDI,local_8);
    if (iVar1 == 0) {
LAB_0033b472:
      bVar2 = false;
    }
    else {
      iVar1 = FUN_00344a56(unaff_EDI,local_c);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}
