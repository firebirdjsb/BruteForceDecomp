/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02805C45A06E3CC9C8F2BEFCE99479123B2D025B0D1AA03812AE9F2306590ABF
 * Entry: 0x000ec230, Ghidra index: 2921, label: FUN_000ec230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec230(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00059a80();
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(in_ECX + 0x4c) != *(int *)(param_1 + 0x4c)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x4c));
  }
  return;
}
