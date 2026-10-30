/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88E4D29C347396736149A41EA7F6257128F4B6E9DC67288AA4798F6372A08B8D
 * Entry: 0x0016d400, Ghidra index: 4794, label: FUN_0016d400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0016d400(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0016de30();
  return unaff_EDI + unaff_ESI * 0x14;
}
