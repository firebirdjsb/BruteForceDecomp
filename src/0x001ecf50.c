/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41BD0C65BAD477ACD99B3C2800D7CA97F1956BDE1275C454A0D0AE73A56D6E31
 * Entry: 0x001ecf50, Ghidra index: 6921, label: FUN_001ecf50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ecf50(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1c) == 1) {
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    FUN_002e7280(1);
  }
  *(undefined4 *)(unaff_ESI + 0xa4) = 0x80000013;
  return;
}
