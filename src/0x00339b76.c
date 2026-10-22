/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 241860ACA6051EC03CCB9D72B59B7CD4AF63BF7DF8C37254E5937FCFF8658FF6
 * Entry: 0x00339b76, Ghidra index: 12495, label: FUN_00339b76
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00339b76(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  byte *in_ECX;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  iVar1 = FUN_00343bd0(param_1,in_EAX,&local_c,&local_18);
  if (iVar1 != 0) {
    *in_ECX = 0;
    iVar1 = FUN_00343bd0(local_c,0x80000000,&local_8,&local_10);
    if (((((iVar1 != 0) && (iVar1 = FUN_003444d6(local_8,2,in_ECX + 4), iVar1 != 0)) &&
         (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)) &&
        ((iVar1 = FUN_00343bd0(local_c,0x80000001,&local_8,&local_10), iVar1 != 0 &&
         (iVar1 = FUN_003444d6(local_8,2,in_ECX + 8), iVar1 != 0)))) &&
       (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)) {
      FUN_00343c3f(local_c,&local_14);
      if (local_14 == -0x7ffffffe) {
        *in_ECX = *in_ECX | 0x80;
        iVar1 = FUN_003398ce(local_c,in_ECX + 0xc);
        if (iVar1 == 0) {
          return false;
        }
      }
      iVar1 = FUN_00343bd0(local_c,0x80000003,&local_8,&local_10);
      if ((((iVar1 != 0) && (iVar1 = FUN_003445aa(local_8,0x1b,in_ECX + 0x10), iVar1 != 0)) &&
          ((iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0 &&
           (((iVar1 = FUN_00343bd0(local_c,0x80000004,&local_8,&local_10), iVar1 != 0 &&
             (iVar1 = FUN_00338ff2(local_8), iVar1 != 0)) &&
            (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)))))) &&
         (((iVar1 = FUN_00343bd0(local_c,0x80000005,&local_8,&local_10), iVar1 != 0 &&
           (iVar1 = FUN_00339988(local_8,0,in_ECX + 0x1c), iVar1 != 0)) &&
          ((iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0 &&
           (((iVar1 = FUN_00343bd0(local_c,0x80000006,&local_8,&local_10), iVar1 != 0 &&
             (iVar1 = FUN_00339661(local_8,0,in_ECX + 0x48), iVar1 != 0)) &&
            (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)))))))) {
        iVar1 = FUN_00343dcb(param_1,local_c,local_18);
        return iVar1 != 0;
      }
    }
  }
  return false;
}
