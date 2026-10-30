/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29635BDD219802F04BBBECE7ED131900BFBEF8021FF3801FF71F82FC62EC673C
 * Entry: 0x00064490, Ghidra index: 1086, label: FUN_00064490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00144b10(undefined4 *param_1,int param_2);
extern void FUN_000637c0(int param_1,undefined4 param_2);

void FUN_00064490(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_EAX + 8) - iVar1 >> 3) < (uint)(*(int *)(in_EAX + 0xc) - iVar1 >> 3))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00144b10(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 8;
    return;
  }
  FUN_000637c0(*(undefined4 *)(in_EAX + 8),in_EDX);
  return;
}
