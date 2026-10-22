/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC689BD9D8EC2209CCB7A06961CEC4F4C96F0C5B917AAA3436E32CE34E2D2014
 * Entry: 0x001cbcf0, Ghidra index: 5900, label: FUN_001cbcf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cbcf0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001da760();
  return unaff_EDI + unaff_ESI * 0x24;
}
