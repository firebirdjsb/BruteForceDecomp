/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C16710CFC15BDFC4D12E6AE02AA624E53A75B87CAF82A527A7783CE84A0BB4B5
 * Entry: 0x002e8b90, Ghidra index: 10539, label: FUN_002e8b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e8b90(void)

{
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    (**(code **)(*in_ECX + 0xc))(1);
  }
  return;
}
