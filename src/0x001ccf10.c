/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92BF69C8F3CE9ED3A8182F3B440DF4D777D424F458263E4A1F5D2C73A1127A8E
 * Entry: 0x001ccf10, Ghidra index: 5955, label: FUN_001ccf10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ccf10(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dc000();
  return unaff_ESI * 0x6c + unaff_EDI;
}
