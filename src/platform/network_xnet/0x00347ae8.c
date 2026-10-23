/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7215B7F2904AA1745E306E4A215AB8D304AE7341B77908A978AA119912C6D0B
 * Entry: 0x00347ae8, Ghidra index: 12874, label: FUN_00347ae8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347ae8(int param_1)

{
  int in_ECX;
  
  FUN_0034c320(param_1);
  *(int *)(in_ECX + 0x8bc) = *(int *)(in_ECX + 0x8bc) + -1;
  FUN_0034c35a(param_1 + 0x14,0xffffffff);
  FUN_0034c826(param_1);
  return;
}
