/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3989182D9A172039FE1CB5CE75EB3262C9A7B246AB10D6879BDEFC5AAA0AA11F
 * Entry: 0x00339080, Ghidra index: 12487, label: FUN_00339080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00339080(undefined4 param_1,int *param_2)

{
  int in_EAX;
  int iVar1;
  bool bVar2;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  iVar1 = FUN_00343bd0(param_1,in_EAX,&local_8,&local_c);
  bVar2 = false;
  if (iVar1 != 0) {
    while (iVar1 = FUN_00343e46(local_8,local_c), iVar1 != 0) {
      iVar1 = FUN_00343c3f(local_8,local_10);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = thunk_FUN_00343e85(local_8,0x10);
      *param_2 = iVar1;
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00338ead(local_8);
      if (iVar1 == 0) {
        return false;
      }
      param_2 = (int *)*param_2;
    }
    *param_2 = 0;
    iVar1 = FUN_00343dcb(param_1,local_8,local_c);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}
