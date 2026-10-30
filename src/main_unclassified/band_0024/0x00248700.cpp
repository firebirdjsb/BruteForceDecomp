/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCD6986A0927C89D33D803B10326E5D81BC23F7603DA400DF3B88E695F14C40C
 * Entry: 0x00248700, Ghidra index: 8123, label: FUN_00248700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00248700(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0024b440();
  return unaff_EDI + unaff_ESI * 0x24;
}
