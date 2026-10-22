/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E39E6115D9A2A2697F3E86BF5683341A9B1C4399BCAD93986DC5B2893031BAA3
 * Entry: 0x00339814, Ghidra index: 12492, label: FUN_00339814
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00339814(undefined4 param_1,int *param_2)

{
  int in_EAX;
  int iVar1;
  bool bVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = -0x7ffffff4;
  }
  iVar1 = FUN_00343bd0(param_1,in_EAX,&local_10,&local_14);
  if ((iVar1 == 0) || (iVar1 = FUN_00343bd0(local_10,0x10,&local_8,&local_c), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    while (iVar1 = FUN_00343e46(local_8,local_c), iVar1 != 0) {
      iVar1 = FUN_00343c3f(local_8,local_18);
      if (iVar1 == 0) goto LAB_003398ca;
      iVar1 = thunk_FUN_00343e85(local_8,0x10);
      *param_2 = iVar1;
      if ((iVar1 == 0) || (iVar1 = FUN_00339109(local_8), iVar1 == 0)) goto LAB_003398ca;
      param_2 = (int *)*param_2;
    }
    *param_2 = 0;
    iVar1 = FUN_00343dcb(local_10,local_8,local_c);
    if (iVar1 == 0) {
LAB_003398ca:
      bVar2 = false;
    }
    else {
      iVar1 = FUN_00343dcb(param_1,local_10,local_14);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}
