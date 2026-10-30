/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A694A00FEB7B519C123518294D7A4283C52F31380315E1005C5CB6165CD8198
 * Entry: 0x001b2ec0, Ghidra index: 5631, label: FUN_001b2ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b2ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  uint in_stack_00000020;
  int in_stack_00000034;
  int in_stack_00000038;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x3c;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x3c;
    }
    FUN_001bcd40(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if ((iVar2 != 0) && (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x3c))) {
    FUN_001bccf0(local_4,in_EAX * 0x3c + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
  }
  iVar2 = in_stack_00000034;
  if (in_stack_00000034 == 0) {
    if (in_stack_00000020 < 0x10) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_3);
  }
  for (; iVar2 != in_stack_00000038; iVar2 = iVar2 + 4) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_stack_00000034);
}
