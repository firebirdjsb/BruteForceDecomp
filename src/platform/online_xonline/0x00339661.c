/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF21952E2CF71EB7E92F9E3EBD7BCF93455DBCD8DA40BA0338E8042681B9F6AE
 * Entry: 0x00339661, Ghidra index: 12490, label: FUN_00339661
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00339661(undefined4 param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = param_2;
  if (param_2 == 0) {
    iVar2 = 0x10;
  }
  iVar2 = FUN_00343bd0(param_1,iVar2,&local_8,&local_14);
  pbVar1 = param_3;
  if (iVar2 == 0) {
    return false;
  }
  *param_3 = 0;
  iVar2 = FUN_00343bd0(local_8,0x80000000,&param_2,&local_c);
  if (((iVar2 != 0) && (iVar2 = FUN_003444d6(param_2,2,pbVar1 + 4), iVar2 != 0)) &&
     (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)) {
    FUN_00343c3f(local_8,&local_10);
    if (local_10 == -0x7fffffff) {
      *pbVar1 = *pbVar1 | 0x80;
      iVar2 = FUN_00343bd0(local_8,0x80000001,&param_2,&local_c);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_003444d6(param_2,2,pbVar1 + 8);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_00343dcb(local_8,param_2,local_c);
      if (iVar2 == 0) {
        return false;
      }
    }
    iVar2 = FUN_00343bd0(local_8,0x80000002,&param_2,&local_c);
    if (((iVar2 != 0) && (iVar2 = FUN_003449e9(param_2,4,pbVar1 + 0xc), iVar2 != 0)) &&
       (iVar2 = FUN_00343dcb(local_8,param_2,local_c), iVar2 != 0)) {
      iVar2 = FUN_00343dcb(param_1,local_8,local_14);
      return iVar2 != 0;
    }
  }
  return false;
}
