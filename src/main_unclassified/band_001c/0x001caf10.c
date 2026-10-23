/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B5DB395C435CE6032788F8D21F97091EA5509E075C12AC8918B835AA3880108
 * Entry: 0x001caf10, Ghidra index: 5860, label: FUN_001caf10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001caf10(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d97d0();
  return unaff_EDI + unaff_ESI * 0x18;
}
