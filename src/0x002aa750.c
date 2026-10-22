/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04E9045C0D1A2FC38C5BA1879ACDA1893450D394168C3064A305108CDF40B93C
 * Entry: 0x002aa750, Ghidra index: 9649, label: FUN_002aa750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002aa750(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_002a5bd0(param_1);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  uVar1 = *(undefined4 *)(param_1 + 0xac);
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = uVar2;
  *(undefined4 *)(in_ECX + 0xac) = uVar1;
  return;
}
