/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B0CBAA1C42888F94BA6625FC5ECC687732A5DA73D4C85316B0D110D0774247A
 * Entry: 0x001cbbf0, Ghidra index: 5898, label: FUN_001cbbf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cbbf0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001da6f0();
  return unaff_EDI + unaff_ESI * 0x18;
}
