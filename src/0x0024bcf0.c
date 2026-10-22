/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D40130A057E636C1BD21B0061DC597C3D8F36448B986B64F7540F91B84901BFA
 * Entry: 0x0024bcf0, Ghidra index: 8274, label: FUN_0024bcf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024bcf0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (unaff_ESI != (undefined4 *)0x0) {
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[7] = 0xf;
    unaff_ESI[6] = 0;
    *(undefined1 *)(unaff_ESI + 2) = 0;
    FUN_0001f4f0(unaff_EDI + 1,0,0xffffffff);
    *(undefined1 *)(unaff_ESI + 8) = *(undefined1 *)(unaff_EDI + 8);
  }
  return;
}
