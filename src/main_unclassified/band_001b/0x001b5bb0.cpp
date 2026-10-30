/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 427BE90E85B009D1234352AF9A9BA09860B014EDEC92786C6A4A2FAE05D1954B
 * Entry: 0x001b5bb0, Ghidra index: 5680, label: FUN_001b5bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  uint in_stack_00000020;
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
    FUN_001c9110(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&param_1);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 5)) {
      FUN_001c90c0(local_4,in_EAX * 0x20 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (7 < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_3);
  }
  return;
}
