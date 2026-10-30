/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5435E3FCAB7E2756BC122DE4919EAAA01BB8D4813B96F943FA424A6D617BF6AA
 * Entry: 0x0033a1af, Ghidra index: 12497, label: FUN_0033a1af
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a1af(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = 0x4000000f;
  }
  iVar1 = FUN_00343bd0(param_1,iVar1,&local_10,&local_18);
  if (((iVar1 == 0) || (iVar1 = FUN_00343bd0(local_10,0x10,&local_8,&local_14), iVar1 == 0)) ||
     (iVar2 = FUN_00343bd0(local_8,0x80000000,&param_2,&local_c), iVar1 = param_3, iVar2 == 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_003444d6(param_2,2,param_3);
    if (((((iVar2 == 0) || (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 == 0)) ||
         ((iVar2 = FUN_00343bd0(local_8,0x80000001,&param_2,&local_c), iVar2 == 0 ||
          ((iVar2 = FUN_003444d6(param_2,2,iVar1 + 4), iVar2 == 0 ||
           (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 == 0)))))) ||
        (iVar2 = FUN_00343bd0(local_8,0x80000002,&param_2,&local_c), iVar2 == 0)) ||
       (((iVar1 = FUN_00339661(param_2,0,iVar1 + 8), iVar1 == 0 ||
         (iVar1 = FUN_00343dcb(local_8,param_2,local_c), iVar1 == 0)) ||
        (iVar1 = FUN_00343dcb(local_10,local_8,local_14), iVar1 == 0)))) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_00343dcb(param_1,local_10,local_18);
      bVar3 = iVar1 != 0;
    }
  }
  return bVar3;
}
