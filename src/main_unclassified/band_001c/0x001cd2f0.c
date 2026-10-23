/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DA97D186F70876B25055F6DF571C0F773071FAD16D5A8E45837F90125EA60FF
 * Entry: 0x001cd2f0, Ghidra index: 5968, label: FUN_001cd2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cd2f0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dc720();
  return unaff_ESI * 0x20 + unaff_EDI;
}
