/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0907CD009B293947DA5816E2E83390CECA579E8123629419C50E0508D592815F
 * Entry: 0x0033abd7, Ghidra index: 12512, label: FUN_0033abd7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033abd7(undefined4 param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_8;
  
  uVar1 = param_1;
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = 0x40000002;
  }
  iVar3 = FUN_003449ff(param_1,iVar3,&local_8);
  if ((((iVar3 != 0) && (iVar3 = FUN_003449ff(uVar1,0x10,&param_1), iVar3 != 0)) &&
      (iVar3 = FUN_003449ff(uVar1,0x80000000,&param_2), pbVar2 = param_3, iVar3 != 0)) &&
     ((iVar3 = FUN_00344e30(uVar1,2,*(undefined4 *)(param_3 + 4)), iVar3 != 0 &&
      (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0)))) {
    uVar4 = XAPILIB__lstrlenA(*(undefined4 *)(pbVar2 + 8));
    iVar3 = FUN_003449ff(uVar1,0x80000001,&param_2);
    if (((((((iVar3 != 0) &&
            ((iVar3 = FUN_00344c6b(uVar1,0x1b,uVar4,*(undefined4 *)(pbVar2 + 8)), iVar3 != 0 &&
             (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0)))) &&
           (iVar3 = FUN_003449ff(uVar1,0x80000002,&param_2), iVar3 != 0)) &&
          (((iVar3 = FUN_0033a667(), iVar3 != 0 && (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0)
            ) && (((*pbVar2 & 0x80) == 0 ||
                  (((iVar3 = FUN_003449ff(uVar1,0x80000003,&param_2), iVar3 != 0 &&
                    (iVar3 = FUN_0033a8a2(), iVar3 != 0)) &&
                   (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0)))))))) &&
         (((iVar3 = FUN_003449ff(uVar1,0x80000004,&param_2), iVar3 != 0 &&
           (iVar3 = FUN_00344e30(uVar1,2,*(undefined4 *)(pbVar2 + 0x20)), iVar3 != 0)) &&
          ((iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0 &&
           ((((iVar3 = FUN_003449ff(uVar1,0x80000005,&param_2), iVar3 != 0 &&
              (iVar3 = FUN_00344dfd(uVar1,0x18,pbVar2 + 0x24), iVar3 != 0)) &&
             (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0)) &&
            (((*pbVar2 & 0x40) == 0 ||
             (((iVar3 = FUN_003449ff(uVar1,0x80000006,&param_2), iVar3 != 0 &&
               (iVar3 = FUN_0033a8a2(), iVar3 != 0)) &&
              (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0)))))))))))) &&
        (((*pbVar2 & 0x20) == 0 ||
         (((iVar3 = FUN_003449ff(uVar1,0x80000007,&param_2), iVar3 != 0 &&
           (iVar3 = FUN_00344853(uVar1,2,*(undefined4 *)(pbVar2 + 0x40)), iVar3 != 0)) &&
          (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0)))))) &&
       ((((*pbVar2 & 0x10) == 0 ||
         (((iVar3 = FUN_003449ff(uVar1,0x80000008,&param_2), iVar3 != 0 &&
           (iVar3 = FUN_0033a6dc(pbVar2 + 0x44), iVar3 != 0)) &&
          (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 != 0)))) &&
        (iVar3 = FUN_00344a56(uVar1,param_1), iVar3 != 0)))) {
      iVar3 = FUN_00344a56(uVar1,local_8);
      return iVar3 != 0;
    }
  }
  return false;
}
