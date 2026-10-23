/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2607A405E6258AE44C9DAC591B1CE62396CAF7E36BB3FD24E01983C4E3CE62F
 * Entry: 0x000d1010, Ghidra index: 2587, label: FUN_000d1010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000d1010(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_000d12c0();
  return unaff_ESI * 0x10 + unaff_EDI;
}
