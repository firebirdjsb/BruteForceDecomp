/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 201BFC2A1BD0C4E7207F9DAECF04EADC0C6C330BE2118A8786343E8652A7E98B
 * Entry: 0x0005e4f0, Ghidra index: 985, label: FUN_0005e4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005e4f0(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(in_EAX + 8);
  uVar2 = *(uint *)(in_EAX + 4);
  if (uVar2 < uVar1) {
    do {
      uVar1 = uVar1 - 8;
      FUN_0005ebf0();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(in_EAX + 0x18);
  uVar2 = *(uint *)(in_EAX + 0x14);
  if (uVar2 < uVar1) {
    do {
      uVar1 = uVar1 - 8;
      FUN_0005ebf0();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}
