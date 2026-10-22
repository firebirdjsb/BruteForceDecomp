/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 730DF4817FBA7AACB34DA9D8739F73FB57BC1765A8864D7E4AB0CAB83D73F52D
 * Entry: 0x0020d200, Ghidra index: 7366, label: FUN_0020d200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0020d200(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0020dc80();
  return unaff_EDI + unaff_ESI * 0x24;
}
