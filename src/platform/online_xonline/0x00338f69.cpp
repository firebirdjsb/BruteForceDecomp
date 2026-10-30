/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35B684CC4E4D9D8509F2786CB9D577D905FBF921C49E041A7709C3AEDF359CE7
 * Entry: 0x00338f69, Ghidra index: 12485, label: FUN_00338f69
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00338f69(undefined4 param_1,int *param_2)

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
      iVar1 = thunk_FUN_00343e85(local_8,0x18);
      *param_2 = iVar1;
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00338df1(local_8);
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
