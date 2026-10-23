/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E55A47694D7FBAD1CE82761B303462EB8E8FDDAA448E91B68048F7F8AA28BF59
 * Entry: 0x001cc800, Ghidra index: 5931, label: FUN_001cc800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc800(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001db4a0();
  return unaff_EDI + unaff_ESI * 0x48;
}
