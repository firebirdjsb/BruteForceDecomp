/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A9895D7A0C983D75A0FF8FB01783E1C80884A149D97CC544FFF72D4C64252E5
 * Entry: 0x0033b476, Ghidra index: 12519, label: FUN_0033b476
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033b476(undefined4 param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_8;
  
  uVar1 = param_1;
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = 0x4000001d;
  }
  iVar3 = FUN_003449ff(param_1,iVar3,&local_8);
  if ((iVar3 == 0) || (iVar3 = FUN_003449ff(uVar1,0x10,&param_1), pbVar2 = param_3, iVar3 == 0)) {
    bVar4 = false;
  }
  else {
    iVar3 = FUN_0033b31a(param_3 + 4);
    if ((((((iVar3 == 0) ||
           (((*pbVar2 & 0x80) != 0 &&
            (((iVar3 = FUN_003449ff(uVar1,0x80000001,&param_2), iVar3 == 0 ||
              (iVar3 = FUN_00344e30(uVar1,2,*(undefined4 *)(pbVar2 + 8)), iVar3 == 0)) ||
             (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))))) ||
          (((*pbVar2 & 0x40) != 0 &&
           (((iVar3 = FUN_003449ff(uVar1,0x80000002,&param_2), iVar3 == 0 ||
             (iVar3 = FUN_00344dfd(uVar1,0x18,pbVar2 + 0xc), iVar3 == 0)) ||
            (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))))) ||
         ((((*pbVar2 & 0x20) != 0 &&
           (((iVar3 = FUN_003449ff(uVar1,0x80000003,&param_2), iVar3 == 0 ||
             (iVar3 = FUN_00344e30(uVar1,2,*(undefined4 *)(pbVar2 + 0x1c)), iVar3 == 0)) ||
            (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))) ||
          (((*pbVar2 & 0x10) != 0 &&
           (((iVar3 = FUN_003449ff(uVar1,0x80000004,&param_2), iVar3 == 0 ||
             (iVar3 = FUN_0033a8a2(), iVar3 == 0)) ||
            (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))))))) ||
        (((*pbVar2 & 8) != 0 &&
         (((iVar3 = FUN_003449ff(uVar1,0x80000005,&param_2), iVar3 == 0 ||
           (iVar3 = FUN_0033a8a2(), iVar3 == 0)) ||
          (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))))) ||
       (iVar3 = FUN_00344a56(uVar1,param_1), iVar3 == 0)) {
      bVar4 = false;
    }
    else {
      iVar3 = FUN_00344a56(uVar1,local_8);
      bVar4 = iVar3 != 0;
    }
  }
  return bVar4;
}
