/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1D6A417C813ADC0BA628F7EB5C5239B0E80CDA74662A05F1E1B57B43DEE1EE9
 * Entry: 0x00248320, Ghidra index: 8115, label: FUN_00248320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00248320(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0024b1d0();
  return unaff_EDI + unaff_ESI * 0x14;
}
