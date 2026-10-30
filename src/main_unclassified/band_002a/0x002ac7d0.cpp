/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A7DC2CD26E11F8FECAA5402C29A7C55C542FD8012CA06B49F592636123ECF3B
 * Entry: 0x002ac7d0, Ghidra index: 9670, label: FUN_002ac7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ac7d0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_ECX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_EAX + 8) - iVar1 >> 4) < (uint)(*(int *)(in_EAX + 0xc) - iVar1 >> 4))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_002adbd0(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 0x10;
    return;
  }
  FUN_002ac830(*(undefined4 *)(in_EAX + 8),in_ECX);
  return;
}
