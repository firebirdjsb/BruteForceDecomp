/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D66062907467019C478B2B13F18DD5219983B379865F74D9176EF8AEFB70E509
 * Entry: 0x00218640, Ghidra index: 7476, label: FUN_00218640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00218640(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00218ec0();
  return unaff_EDI + unaff_ESI * 0x14;
}
