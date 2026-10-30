/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 875C234FC2234E6CEA9929574F8299399271B945984D0BDA07A6A05A265CC0E5
 * Entry: 0x001cc770, Ghidra index: 5927, label: FUN_001cc770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc770(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001db240();
  return unaff_ESI * 0x10 + unaff_EDI;
}
