/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48A0425323F1E1B632B1C6BC6F67D271C700194FB3BDD6EB7BCAEAD748661FA5
 * Entry: 0x001b4d80, Ghidra index: 5661, label: FUN_001b4d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b4d80(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  uint in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_EAX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EAX + 8) - iVar2 >> 3;
  }
  if (uVar1 < in_ECX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EAX + 8) - iVar2 >> 3;
    }
    FUN_001c54b0(in_EAX,*(undefined4 *)(in_EAX + 8),in_ECX - iVar2,&param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  if (iVar2 != 0) {
    if (in_ECX < (uint)(*(int *)(in_EAX + 8) - iVar2 >> 3)) {
      FUN_001c5430(in_EAX,local_4,*(int *)(in_EAX + 4) + in_ECX * 8,*(int *)(in_EAX + 8));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_2);
}
