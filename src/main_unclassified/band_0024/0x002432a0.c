/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 430799E065A0331E65268EFCEA0A38B85AAE533DF1EA79397EE78BBEAB1BA81E
 * Entry: 0x002432a0, Ghidra index: 8048, label: FUN_002432a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002432a0(undefined4 param_1,int param_2)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
    }
    FUN_00244d50(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x14)) {
      FUN_00244cb0(local_4,*(int *)(in_ECX + 4) + in_EAX * 0x14,*(int *)(in_ECX + 8));
    }
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return;
}
