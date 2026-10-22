/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D136D29172FC590355DCB16E12E9AFFF8670EF2DD776FED3E83F8F288174D345
 * Entry: 0x00053060, Ghidra index: 764, label: FUN_00053060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00053060(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00053c30();
  return unaff_EDI + unaff_ESI * 0x14;
}
