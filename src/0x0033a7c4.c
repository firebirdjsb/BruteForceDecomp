/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D2E3FBFFD99FDED0C458D70C2C468A6072B0376ED1C6699959EFBAE455AEB96
 * Entry: 0x0033a7c4, Ghidra index: 12507, label: FUN_0033a7c4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a7c4(undefined4 param_1,int param_2,byte *param_3)

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
    iVar3 = FUN_00344e30(uVar1,2,*(undefined4 *)(param_3 + 4));
    if ((((iVar3 == 0) || (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)) ||
        (((*pbVar2 & 0x80) != 0 &&
         (((iVar3 = FUN_003449ff(uVar1,0x80000001,&param_2), iVar3 == 0 ||
           (iVar3 = FUN_00344e30(uVar1,2,*(undefined4 *)(pbVar2 + 8)), iVar3 == 0)) ||
          (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))))) ||
       (((iVar3 = FUN_003449ff(uVar1,0x80000002,&param_2), iVar3 == 0 ||
         (iVar3 = FUN_00344c6b(uVar1,4,*(undefined4 *)(pbVar2 + 0xc),*(undefined4 *)(pbVar2 + 0x10))
         , iVar3 == 0)) || (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))) {
      bVar4 = false;
    }
    else {
      iVar3 = FUN_00344a56(uVar1,param_1);
      bVar4 = iVar3 != 0;
    }
  }
  return bVar4;
}
