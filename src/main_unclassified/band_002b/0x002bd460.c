/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C63DFA0F1846DFAAA304FBBC725A2CD3BF917171C325120BE34D700C45810692
 * Entry: 0x002bd460, Ghidra index: 9946, label: FUN_002bd460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd460(int param_1)

{
  byte *unaff_ESI;
  
  if ((*unaff_ESI & 0xc) == 0) {
    FUN_002bd570();
    FUN_002bd570();
    FUN_002be050(*(undefined4 *)(unaff_ESI + 0x170),unaff_ESI);
    FUN_002bd570();
    FUN_002be050(*(undefined4 *)(unaff_ESI + 0x170),unaff_ESI);
    FUN_002bd570();
    FUN_002be050(*(undefined4 *)(unaff_ESI + 0x170),unaff_ESI);
  }
  FUN_002bd570();
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + -1;
  return;
}
