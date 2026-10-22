/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BD999FDF95C4F7523D182437B993283BE4443D6111DA429D43EF671734777A3
 * Entry: 0x001b1740, Ghidra index: 5604, label: FUN_001b1740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1740(undefined4 param_1,undefined4 param_2)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  uint in_stack_0000001c;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
    }
    FUN_001b5fd0(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&param_1);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x1c)) {
      FUN_001b5f80(local_4,in_EAX * 0x1c + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (7 < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return;
}
