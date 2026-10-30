/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1663CDA8F0684D33545251D1EFFE6A91537F25527A0F5B28D839A689B7C93CB
 * Entry: 0x001cc700, Ghidra index: 5924, label: FUN_001cc700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc700(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001db050();
  return unaff_EDI + unaff_ESI * 0x14;
}
