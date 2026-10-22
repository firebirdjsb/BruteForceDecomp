/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0BF0F6269D1F830EE371745C20873CD97D5538D94C9174C85A03BC53CF9B456
 * Entry: 0x001cb520, Ghidra index: 5874, label: FUN_001cb520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb520(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d9b80();
  return unaff_EDI + unaff_ESI * 0x18;
}
