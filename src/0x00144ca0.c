/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C28D640562CB48EFC62C252509A8321E7CBFF8F283581CA6593B4F1D9CDC742B
 * Entry: 0x00144ca0, Ghidra index: 4175, label: FUN_00144ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00144ca0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (unaff_ESI != (undefined4 *)0x0) {
    *unaff_ESI = *unaff_EDI;
    FUN_00144620(unaff_ESI + 1);
    unaff_ESI[5] = unaff_EDI[5];
    unaff_ESI[6] = unaff_EDI[6];
  }
  return;
}
