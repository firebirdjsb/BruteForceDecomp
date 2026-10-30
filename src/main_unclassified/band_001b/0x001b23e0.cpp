/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1FAC016F7CE7638590399188450E57AB185B136DBEDF2AA6D3409B6179021A3
 * Entry: 0x001b23e0, Ghidra index: 5620, label: FUN_001b23e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b23e0(void)

{
  uint in_EAX;
  uint uVar1;
  int in_EDX;
  int iVar2;
  undefined4 in_stack_00000014;
  uint in_stack_00000028;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_EDX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EDX + 8) - iVar2 >> 6;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar2 >> 6;
    }
    FUN_001b92a0(in_EDX,*(undefined4 *)(in_EDX + 8),in_EAX - iVar2);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_EDX + 8) - iVar2 >> 6)) {
      FUN_001b9230(in_EDX,local_4,in_EAX * 0x40 + *(int *)(in_EDX + 4),*(int *)(in_EDX + 8));
    }
  }
  if (0xf < in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_00000014);
  }
  return;
}
