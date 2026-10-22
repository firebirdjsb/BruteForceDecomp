/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CCB5C6C82D18999B2764D2B2655886B35394CE0BC0DBD5EC004BBB2BCF55DF8
 * Entry: 0x001cc6c0, Ghidra index: 5922, label: FUN_001cc6c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc6c0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001daf50();
  return unaff_EDI + unaff_ESI * 0x14;
}
