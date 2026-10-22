/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 943A6EC5F9E42674B711D1332C663B522B1439D1A20BB2B961925DC8339FB6C4
 * Entry: 0x001b4f40, Ghidra index: 5664, label: FUN_001b4f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b4f40(undefined4 param_1,int param_2,int param_3)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 4;
    }
    FUN_001c5bd0(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if ((iVar2 != 0) && (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 4))) {
    FUN_001c5b80(local_4,in_EAX * 0x10 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
  }
  iVar2 = param_2;
  if (param_2 != 0) {
    for (; iVar2 != param_3; iVar2 = iVar2 + 0x24) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return;
}
