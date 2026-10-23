/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F06957444B3D1AD18917F6BC27A73E33AD51D1713407DB6A98E15B6E51356FCF
 * Entry: 0x0017d9b0, Ghidra index: 5085, label: FUN_0017d9b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d9b0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (unaff_ESI != (undefined4 *)0x0) {
    *unaff_ESI = *unaff_EDI;
    FUN_001cc3b0(unaff_ESI + 1);
    unaff_ESI[5] = unaff_EDI[5];
  }
  return;
}
