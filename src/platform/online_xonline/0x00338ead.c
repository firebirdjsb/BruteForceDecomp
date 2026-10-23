/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DDB1AC2F99A40E2F1F2A2AF4666681F9412430CC20F397B1FF099A8CD135059
 * Entry: 0x00338ead, Ghidra index: 12484, label: FUN_00338ead
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00338ead(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  iVar1 = FUN_00343bd0(param_1,in_EAX,&local_c,&local_14);
  if ((((iVar1 != 0) && (iVar1 = FUN_00343bd0(local_c,0x80000000,&local_8,&local_10), iVar1 != 0))
      && (iVar1 = FUN_003444d6(local_8,2,in_ECX), iVar1 != 0)) &&
     (((iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0 &&
       (iVar1 = FUN_00343bd0(local_c,0x80000001,&local_8,&local_10), iVar1 != 0)) &&
      ((iVar1 = FUN_003449e9(local_8,4,in_ECX + 4), iVar1 != 0 &&
       (iVar1 = FUN_00343dcb(local_c,local_8,local_10), iVar1 != 0)))))) {
    iVar1 = FUN_00343dcb(param_1,local_c,local_14);
    return iVar1 != 0;
  }
  return false;
}
