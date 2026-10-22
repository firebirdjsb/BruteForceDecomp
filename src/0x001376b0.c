/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0E83C67EEB9C573B52EE25A5B8595668069CB534CA99B5ECE3F4B33B0D5C165
 * Entry: 0x001376b0, Ghidra index: 3908, label: FUN_001376b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001376b0(void)

{
  int iVar1;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_ECX + 8) - iVar1 >> 4) < (uint)(*(int *)(in_ECX + 0xc) - iVar1 >> 4))) {
    iVar1 = *(int *)(in_ECX + 8);
    FUN_001dace0(iVar1,1);
    *(int *)(in_ECX + 8) = iVar1 + 0x10;
    return;
  }
  FUN_001766b0(*(undefined4 *)(in_ECX + 8),in_EAX);
  return;
}
