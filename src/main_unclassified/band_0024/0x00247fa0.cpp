/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 420C1B841C9BF9CA1E6BDEDF31978AE0AAAF762C9269F17ABB13A396206C4A36
 * Entry: 0x00247fa0, Ghidra index: 8110, label: FUN_00247fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00247fa0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  FUN_0001f4f0(unaff_EDI + 1,0,0xffffffff);
  *(undefined1 *)(unaff_ESI + 8) = *(undefined1 *)(unaff_EDI + 8);
  unaff_ESI[9] = unaff_EDI[9];
  unaff_ESI[10] = unaff_EDI[10];
  *(undefined1 *)(unaff_ESI + 0xb) = *(undefined1 *)(unaff_EDI + 0xb);
  FUN_00248740(unaff_ESI + 0xc);
  return;
}
