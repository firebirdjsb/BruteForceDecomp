/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57B1458637EE100988973C4575DC0921B1B4184FD546C5EC68034B3B9E182278
 * Entry: 0x0033a5eb, Ghidra index: 12503, label: FUN_0033a5eb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a5eb(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EDI;
  bool bVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = -0x7fffffff;
  }
  iVar1 = FUN_003449ff(unaff_EDI,in_EAX,&local_c);
  if ((iVar1 == 0) || (iVar1 = FUN_003449ff(unaff_EDI,0x10,&local_8), iVar1 == 0)) {
    bVar3 = false;
  }
  else {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)*param_1) {
      uVar2 = XAPILIB__lstrlenA(param_1[1]);
      iVar1 = FUN_00344c6b(unaff_EDI,0x1b,uVar2,param_1[1]);
      if (iVar1 == 0) goto LAB_0033a663;
    }
    iVar1 = FUN_00344a56(unaff_EDI,local_8);
    if (iVar1 == 0) {
LAB_0033a663:
      bVar3 = false;
    }
    else {
      iVar1 = FUN_00344a56(unaff_EDI,local_c);
      bVar3 = iVar1 != 0;
    }
  }
  return bVar3;
}
