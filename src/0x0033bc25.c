/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 818E1A2B73E6C4381E46074900D2414CFC7F44E75B2F4588E27FBD9C2574FA79
 * Entry: 0x0033bc25, Ghidra index: 12530, label: FUN_0033bc25
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bc25(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) - param_1;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 0x10) * 500 + 1 + *(int *)(in_ECX + 0x14);
  return;
}
