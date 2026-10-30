/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1118017C815D28A7A5DBD69B111439FFA88CF22712A49B53E2748BDB5D9056CD
 * Entry: 0x001b5960, Ghidra index: 5677, label: FUN_001b5960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  uint in_stack_00000020;
  undefined4 in_stack_00000028;
  uint in_stack_0000003c;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 6;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 6;
    }
    FUN_001c85f0(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 6)) {
      FUN_001c85a0(local_4,in_EAX * 0x40 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (0xf < in_stack_0000003c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_00000028);
  }
  if (7 < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_3);
  }
  return;
}
