/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EA2F40AC7BBDC1AD90DA5FD572494C7644A74B0EAF5173E72A813676E08764B
 * Entry: 0x0033a2e9, Ghidra index: 12498, label: FUN_0033a2e9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a2e9(undefined4 param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = param_2;
  if (param_2 == 0) {
    iVar2 = 0x4000001b;
  }
  iVar2 = FUN_00343bd0(param_1,iVar2,&local_14,&local_1c);
  if ((iVar2 == 0) ||
     (iVar2 = FUN_00343bd0(local_14,0x10,&local_8,&local_18), pbVar1 = param_3, iVar2 == 0)) {
    return false;
  }
  *param_3 = 0;
  iVar2 = FUN_00343bd0(local_8,0x80000000,&param_2,&local_c);
  if ((((iVar2 != 0) && (iVar2 = FUN_00344c2e(param_2,0x18,pbVar1 + 2), iVar2 != 0)) &&
      (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)) &&
     (((iVar2 = FUN_00343bd0(local_8,0x80000001,&param_2,&local_c), iVar2 != 0 &&
       (iVar2 = FUN_003444d6(param_2,2,pbVar1 + 0x10), iVar2 != 0)) &&
      (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)))) {
    FUN_00343c3f(local_8,&local_10);
    if (local_10 == -0x7ffffffe) {
      *pbVar1 = *pbVar1 | 0x80;
      iVar2 = FUN_00343bd0(local_8,0x80000002,&param_2,&local_c);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00338ead(param_2);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00343dcb(local_8,param_2,local_c);
      if (iVar2 == 0) {
        return false;
      }
    }
    FUN_00343c3f(local_8,&local_10);
    if (local_10 == -0x7ffffffd) {
      *pbVar1 = *pbVar1 | 0x40;
      iVar2 = FUN_00343bd0(local_8,0x80000003,&param_2,&local_c);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00343cca(param_2,2,pbVar1 + 0x20);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00343dcb(local_8,param_2,local_c);
      if (iVar2 == 0) {
        return false;
      }
    }
    iVar2 = FUN_00343dcb(local_14,local_8,local_18);
    if (iVar2 != 0) {
      iVar2 = FUN_00343dcb(param_1,local_14,local_1c);
      return iVar2 != 0;
    }
  }
  return false;
}
