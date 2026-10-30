/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55798FF429682450EF4EEBCB47F0DB1C691ECED9535218D973D5CEB5F711BDC0
 * Entry: 0x001ccbd0, Ghidra index: 5946, label: FUN_001ccbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ccbd0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dbc30();
  return unaff_EDI + unaff_ESI * 0x24;
}
