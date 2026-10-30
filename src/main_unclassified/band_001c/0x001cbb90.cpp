/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C3ED712B35483624F85AD5FB4DAFD721D554A2464F7EDC93326C8E9F5796C11
 * Entry: 0x001cbb90, Ghidra index: 5895, label: FUN_001cbb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cbb90(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001da4a0();
  return unaff_EDI + unaff_ESI * 0x24;
}
