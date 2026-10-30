/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3BB6FA37034584E296E8AB13637D6A42626779832A28B17BAEAB866AC4F88CE
 * Entry: 0x0017c3b0, Ghidra index: 5046, label: FUN_0017c3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017c3b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
    }
    FUN_0017c620(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x18)) {
      FUN_0017c5d0(local_4,*(int *)(in_ECX + 4) + in_EAX * 0x18,*(int *)(in_ECX + 8));
    }
  }
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_3);
  }
  return;
}
