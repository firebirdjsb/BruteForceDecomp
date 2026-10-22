/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72B2731F8B1199F97398EA5340FF9055EFEF53298843D9318FAA417AAE06D4A1
 * Entry: 0x001b50f0, Ghidra index: 5667, label: FUN_001b50f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b50f0(void)

{
  int iVar1;
  uint uVar2;
  uint in_ECX;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_EDX + 8) - iVar1 >> 3;
  }
  if (uVar2 < in_ECX) {
    FUN_001e10c0(*(undefined4 *)(in_EDX + 8),&stack0x00000004);
    return;
  }
  if ((iVar1 != 0) && (in_ECX < (uint)(*(int *)(in_EDX + 8) - iVar1 >> 3))) {
    FUN_00236ec0(*(int *)(in_EDX + 4) + in_ECX * 8,*(int *)(in_EDX + 8));
  }
  return;
}
