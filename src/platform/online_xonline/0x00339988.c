/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0933E170406033E2C7B3F5383F188B522453C572C48CD27FFCA6F1D438C00E58
 * Entry: 0x00339988, Ghidra index: 12494, label: FUN_00339988
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00339988(undefined4 param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = param_2;
  if (param_2 == 0) {
    iVar2 = 0x40000001;
  }
  iVar2 = FUN_00343bd0(param_1,iVar2,&local_10,&local_1c);
  if ((iVar2 == 0) ||
     (iVar2 = FUN_00343bd0(local_10,0x10,&local_8,&local_18), pbVar1 = param_3, iVar2 == 0)) {
    return false;
  }
  *param_3 = 0;
  iVar2 = FUN_00343bd0(local_8,0x80000000,&param_2,&local_c);
  if (((((iVar2 != 0) && (iVar2 = FUN_003444d6(param_2,2,pbVar1 + 4), iVar2 != 0)) &&
       (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)) &&
      ((((iVar2 = FUN_00343bd0(local_8,0x80000001,&param_2,&local_c), iVar2 != 0 &&
         (iVar2 = FUN_003445aa(param_2,0x1b,pbVar1 + 8), iVar2 != 0)) &&
        ((iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0 &&
         ((iVar2 = FUN_00343bd0(local_8,0x80000002,&param_2,&local_c), iVar2 != 0 &&
          (iVar2 = FUN_00338ff2(param_2), iVar2 != 0)))))) &&
       (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)))) &&
     (((iVar2 = FUN_00343bd0(local_8,0x80000003,&param_2,&local_c), iVar2 != 0 &&
       (iVar2 = FUN_00339661(param_2,0,pbVar1 + 0x14), iVar2 != 0)) &&
      (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)))) {
    FUN_00343c3f(local_8,&local_14);
    if (local_14 == -0x7ffffffc) {
      *pbVar1 = *pbVar1 | 0x80;
      iVar2 = FUN_00343bd0(local_8,0x80000004,&param_2,&local_c);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00339080(param_2,pbVar1 + 0x28);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00343dcb(local_8,param_2,local_c);
      if (iVar2 == 0) {
        return false;
      }
    }
    iVar2 = FUN_00343dcb(local_10,local_8,local_18);
    if (iVar2 != 0) {
      iVar2 = FUN_00343dcb(param_1,local_10,local_1c);
      return iVar2 != 0;
    }
  }
  return false;
}
