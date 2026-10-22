/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B5FDF72FF9DA6CEB8B4E36CF4E877870CFB132755E14DCCDE31375D4BD8648E
 * Entry: 0x001e1090, Ghidra index: 6729, label: FUN_001e1090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e1090(void)

{
  int unaff_ESI;
  
  FUN_00064490();
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x30) + -8;
  return;
}
