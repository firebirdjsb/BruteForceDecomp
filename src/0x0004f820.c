/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C66CDFB67D40B83CC76EB0287DD11A90433A19B80674CEC441E6728D23E7DFA
 * Entry: 0x0004f820, Ghidra index: 693, label: FUN_0004f820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004f820(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dc2b0();
  return unaff_EDI + unaff_ESI * 0xc;
}
