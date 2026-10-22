/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71E10BD4B276E791CFD64880D6E8A41F38A3D9F937BF4A35D27363010E4886F4
 * Entry: 0x0033b31a, Ghidra index: 12516, label: FUN_0033b31a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033b31a(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EDI;
  bool bVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = -0x80000000;
  }
  iVar1 = FUN_003449ff(unaff_EDI,in_EAX,&local_c);
  if ((iVar1 == 0) || (iVar1 = FUN_003449ff(unaff_EDI,0x10,&local_8), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)*param_1) {
      iVar1 = FUN_0033afc8();
      if (iVar1 == 0) goto LAB_0033b38a;
    }
    iVar1 = FUN_00344a56(unaff_EDI,local_8);
    if (iVar1 == 0) {
LAB_0033b38a:
      bVar2 = false;
    }
    else {
      iVar1 = FUN_00344a56(unaff_EDI,local_c);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}
