/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7EF6BBF6E4E0ECB2A7CEC91379F17F8626C1D6145891389968161AD0460AD82
 * Entry: 0x001cb540, Ghidra index: 5875, label: FUN_001cb540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb540(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d9bf0();
  return unaff_EDI + unaff_ESI * 0x14;
}
