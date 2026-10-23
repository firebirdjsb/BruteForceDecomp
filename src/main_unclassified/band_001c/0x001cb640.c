/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F8A85FE70C0EF5EAC8012C21B17FD893599B75EA43A48F3108687E53E548B06
 * Entry: 0x001cb640, Ghidra index: 5877, label: FUN_001cb640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb640(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d9c80();
  return unaff_EDI + unaff_ESI * 0xc;
}
