/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5240717FB43DC3187039097756728A695AFFCEA65F96171CE3B9DC6D5DAA9BE
 * Entry: 0x001f7540, Ghidra index: 7048, label: FUN_001f7540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f7540(undefined4 param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  uint in_EDX;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_EAX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EAX + 8) - iVar2 >> 3;
  }
  if (uVar1 < in_EDX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EAX + 8) - iVar2 >> 3;
    }
    FUN_001f7620(in_EAX,*(undefined4 *)(in_EAX + 8),in_EDX - iVar2,&param_1);
  }
  else if ((iVar2 != 0) && (in_EDX < (uint)(*(int *)(in_EAX + 8) - iVar2 >> 3))) {
    FUN_001f75d0(local_4,*(int *)(in_EAX + 4) + in_EDX * 8,*(int *)(in_EAX + 8));
  }
  if (param_2 != 0) {
    FUN_0008f6e0();
  }
  return;
}
