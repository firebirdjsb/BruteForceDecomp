/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D437F8D651A70D07146D364C6EFC24F5B71443141660F722C6AEC4694B41FEC5
 * Entry: 0x001e7f50, Ghidra index: 6829, label: FUN_001e7f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_001e7b30(void);
void FUN_001e7f50(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_001e7b30();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}
