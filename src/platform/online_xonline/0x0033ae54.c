/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F885A4C43DBAA0A41C4728707F01EB5F83588E58147E860C9CE6EB5CC92BD5BE
 * Entry: 0x0033ae54, Ghidra index: 12513, label: FUN_0033ae54
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033ae54(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_8;
  
  uVar1 = param_1;
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = 0x4000000e;
  }
  iVar3 = FUN_003449ff(param_1,iVar3,&local_8);
  if (((iVar3 == 0) || (iVar3 = FUN_003449ff(uVar1,0x10,&param_1), iVar3 == 0)) ||
     (iVar3 = FUN_003449ff(uVar1,0x80000000,&param_2), puVar2 = param_3, iVar3 == 0)) {
    bVar4 = false;
  }
  else {
    iVar3 = FUN_00344e30(uVar1,2,*param_3);
    if ((((iVar3 == 0) || (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)) ||
        ((iVar3 = FUN_003449ff(uVar1,0x80000001,&param_2), iVar3 == 0 ||
         ((iVar3 = FUN_00344e30(uVar1,2,puVar2[1]), iVar3 == 0 ||
          (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))))) ||
       ((iVar3 = FUN_003449ff(uVar1,0x80000002,&param_2), iVar3 == 0 ||
        ((((((iVar3 = FUN_00344d81(uVar1,3,puVar2[2],puVar2[3]), iVar3 == 0 ||
             (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)) ||
            (iVar3 = FUN_003449ff(uVar1,0x80000003,&param_2), iVar3 == 0)) ||
           ((iVar3 = FUN_0033aa53(uVar1,0,puVar2 + 4), iVar3 == 0 ||
            (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))) ||
          ((iVar3 = FUN_003449ff(uVar1,0x80000004,&param_2), iVar3 == 0 ||
           ((iVar3 = FUN_0033a7c4(uVar1,0,puVar2 + 0xf), iVar3 == 0 ||
            (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)))))) ||
         (iVar3 = FUN_00344a56(uVar1,param_1), iVar3 == 0)))))) {
      bVar4 = false;
    }
    else {
      iVar3 = FUN_00344a56(uVar1,local_8);
      bVar4 = iVar3 != 0;
    }
  }
  return bVar4;
}
