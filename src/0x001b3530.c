/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79DF70C4D2CA315132922453B59A91058E97396BBACB2864B13001A88B2DA699
 * Entry: 0x001b3530, Ghidra index: 5641, label: FUN_001b3530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3530(void)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x28;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x28;
    }
    FUN_001bea10(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&stack0x00000004);
    FUN_0006a470();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x28)) {
      FUN_001be9a0(in_ECX,local_4,*(int *)(in_ECX + 4) + in_EAX * 0x28,*(int *)(in_ECX + 8));
    }
  }
  FUN_0006a470();
  return;
}
