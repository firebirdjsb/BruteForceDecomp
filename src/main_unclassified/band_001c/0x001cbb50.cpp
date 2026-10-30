/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 057AE16F1E9C6A1501B82BE189BFFE5100A7796458826CE16A4602548F971AB2
 * Entry: 0x001cbb50, Ghidra index: 5893, label: FUN_001cbb50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cbb50(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001da2e0();
  return unaff_ESI * 0x10 + unaff_EDI;
}
