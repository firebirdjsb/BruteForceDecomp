/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BA99EE5FA955D880044C38804CDADE861E5F8B9945E20CFA8E87258554E8854
 * Entry: 0x0033a938, Ghidra index: 12509, label: FUN_0033a938
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a938(undefined4 param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = param_1;
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = 0x10;
  }
  iVar3 = FUN_003449ff(param_1,iVar3,&param_1);
  if ((iVar3 == 0) ||
     (iVar3 = FUN_003449ff(uVar1,0x80000000,&param_2), pbVar2 = param_3, iVar3 == 0)) {
    bVar4 = false;
  }
  else {
    iVar3 = FUN_00344dfd(uVar1,0x18,param_3 + 2);
    if (((iVar3 == 0) || (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)) ||
       (((*pbVar2 & 0x80) != 0 &&
        (((iVar3 = FUN_003449ff(uVar1,0x80000001,&param_2), iVar3 == 0 ||
          (iVar3 = FUN_00344e30(uVar1,2,*(undefined4 *)(pbVar2 + 0x10)), iVar3 == 0)) ||
         (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))))) {
      bVar4 = false;
    }
    else {
      iVar3 = FUN_00344a56(uVar1,param_1);
      bVar4 = iVar3 != 0;
    }
  }
  return bVar4;
}
