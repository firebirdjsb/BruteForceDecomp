/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC5A165BDD6A01BCF9FEEB6DCA66A5048EC6006380968F91E56A507237A10AC3
 * Entry: 0x001b2470, Ghidra index: 5621, label: FUN_001b2470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b2470(undefined4 param_1,undefined4 param_2)

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
    FUN_000e15d0(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&param_1);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x1c)) {
      FUN_001b9670(local_4,in_EAX * 0x1c + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return;
}
