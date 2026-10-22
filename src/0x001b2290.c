/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F9645E0CB5506529279D16BCD2AAD156113AB0CA145968DBF6993B5E92ED81E
 * Entry: 0x001b2290, Ghidra index: 5618, label: FUN_001b2290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b2290(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  int in_stack_000000a4;
  int in_stack_000000a8;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0xac;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0xac;
    }
    FUN_001b8e50(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if ((iVar2 != 0) && (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0xac))) {
    FUN_001b8de0(in_ECX,local_4,in_EAX * 0xac + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
  }
  iVar2 = in_stack_000000a4;
  if (in_stack_000000a4 == 0) {
    FUN_000e3780();
    FUN_000e3780();
    return;
  }
  for (; iVar2 != in_stack_000000a8; iVar2 = iVar2 + 0xc) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_stack_000000a4);
}
