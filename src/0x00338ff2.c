/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F69BB4BEC6C45C97BD84EA215CB3F80D08785E4538FA43AE7DDDF46505E3E9E7
 * Entry: 0x00338ff2, Ghidra index: 12486, label: FUN_00338ff2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00338ff2(undefined4 param_1)

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
  iVar1 = FUN_00343bd0(param_1,in_EAX,&local_8,&local_14);
  if ((((iVar1 != 0) && (iVar1 = FUN_00343bd0(local_8,0x80000000,&local_c,&local_10), iVar1 != 0))
      && (iVar1 = FUN_003444d6(local_c,2,in_ECX), iVar1 != 0)) &&
     ((iVar1 = FUN_00343dcb(local_8,local_c,local_10), iVar1 != 0 &&
      (iVar1 = FUN_00338d36(local_8,in_ECX + 4), iVar1 != 0)))) {
    iVar1 = FUN_00343dcb(param_1,local_8,local_14);
    return iVar1 != 0;
  }
  return false;
}
