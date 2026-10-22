/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6615EDC1EAD101A7B7B2871F64CBDC3D805395773840E078537DB381CB5B9A1B
 * Entry: 0x003484af, Ghidra index: 12896, label: FUN_003484af
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003484af(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(in_ECX + 0x1d8);
  *(undefined4 *)(param_1 + 0x18) = *puVar1;
  *(undefined4 *)(param_1 + 0x1c) = *puVar1;
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(uint *)(param_1 + 0x24) = (uint)*(byte *)(in_ECX + 0x3f) * 5;
  *(uint *)(param_1 + 0x28) = (uint)*(byte *)(in_ECX + 0x40) * 0x32;
  return;
}
