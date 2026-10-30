/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7C2324F29E6F5844F115BEF4224FA11023F4BE3F57154073A910A751AD12789
 * Entry: 0x00243b90, Ghidra index: 8061, label: FUN_00243b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243b90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x24;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x24;
    }
    FUN_00246e90(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x24)) {
      FUN_00246e40(local_4,*(int *)(in_ECX + 4) + in_EAX * 0x24,*(int *)(in_ECX + 8));
    }
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_3);
  }
  return;
}
