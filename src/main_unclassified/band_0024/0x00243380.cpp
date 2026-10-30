/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA43BFBAF4A7F5992E66873603030C963E465E5C78489DA6D5D56D32324482D0
 * Entry: 0x00243380, Ghidra index: 8049, label: FUN_00243380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243380(undefined4 param_1,int *param_2)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  int in_stack_00000020;
  int in_stack_00000024;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
    }
    FUN_00245160(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if ((iVar2 != 0) && (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x2c))) {
    FUN_002450a0(in_ECX,local_4,in_EAX * 0x2c + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
  }
  iVar2 = in_stack_00000020;
  if (in_stack_00000020 != 0) {
    for (; iVar2 != in_stack_00000024; iVar2 = iVar2 + 0x30) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_00000020);
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}
