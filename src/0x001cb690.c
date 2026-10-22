/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78F64945CA63823556AD5F9C0C6BCB01EF4D773B3D8383F6A62110C6965FD2E3
 * Entry: 0x001cb690, Ghidra index: 5879, label: FUN_001cb690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb690(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d9d80();
  return unaff_ESI * 0x40 + unaff_EDI;
}
