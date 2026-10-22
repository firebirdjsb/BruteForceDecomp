/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 510E9FD864919E45E6F3253AE370CF75E4DDF6E26ED8C1DFDB4E6A9C2F41B652
 * Entry: 0x001b1a10, Ghidra index: 5608, label: FUN_001b1a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1a10(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  int in_stack_00000018;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 5;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 5;
    }
    FUN_001b6a50(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&stack0x00000004);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 5)) {
      FUN_001b6a00(local_4,in_EAX * 0x20 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_00000018);
  }
  return;
}
