/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC57702347A7A2C869248A91513E113E3F56C66408A9635010B45FBAE7A75609
 * Entry: 0x001b0080, Ghidra index: 5578, label: FUN_001b0080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b0080(void)

{
  undefined4 uVar1;
  uint3 in_ECX;
  undefined4 uStack_4;
  
  uStack_4 = (uint)in_ECX;
  uVar1 = FUN_0001f4d0((int)&uStack_4 + 3);
  FUN_0001f4e0(uVar1);
  FUN_001b5020();
  return;
}
