/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE29162940D48F70ECF943B9B4D521E6C15402991623DEBD5AD8CA74976EEA88
 * Entry: 0x001cb8f0, Ghidra index: 5886, label: FUN_001cb8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb8f0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001da010();
  return unaff_EDI + unaff_ESI * 0x18;
}
