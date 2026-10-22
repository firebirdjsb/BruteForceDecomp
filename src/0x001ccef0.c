/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C2EFE84EDF97AA12D16D91DCF7A7943B1D81A7BEB2B5AD76CD83F54394F4113
 * Entry: 0x001ccef0, Ghidra index: 5954, label: FUN_001ccef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ccef0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dbf70();
  return unaff_EDI + unaff_ESI * 0x24;
}
