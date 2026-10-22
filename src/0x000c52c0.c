/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DDF5A48C51E96BFC31793CE91C6259C27B2D5F13D72AC1FB46961583DDB3816
 * Entry: 0x000c52c0, Ghidra index: 2425, label: FUN_000c52c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c52c0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x5c))();
  if (in_ECX[0x28] != *(int *)(iVar1 + 0x98)) {
    FUN_0008f6a0(*(int *)(iVar1 + 0x98));
  }
  return;
}
