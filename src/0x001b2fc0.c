/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC5D84D59FE5FAD42A007ACF2CBBE74587576C2BA394063C99E82528DE19CA21
 * Entry: 0x001b2fc0, Ghidra index: 5632, label: FUN_001b2fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b2fc0(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined4 in_stack_00000020;
  uint in_stack_00000034;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 6;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 6;
    }
    FUN_001bd130(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 6)) {
      FUN_001bd0e0(local_4,in_EAX * 0x40 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (0xf < in_stack_00000034) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_00000020);
  }
  return;
}
