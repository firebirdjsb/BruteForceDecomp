/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68B7403D47791D8DBF9DA0117DE27916946043A1490C227B9EEBB0427D54415C
 * Entry: 0x001c9580, Ghidra index: 5828, label: FUN_001c9580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c9580(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  unaff_ESI[2] = unaff_EDI[2];
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_0001f4f0(unaff_EDI + 3,0,0xffffffff);
  unaff_ESI[10] = unaff_EDI[10];
  unaff_ESI[0xb] = unaff_EDI[0xb];
  unaff_ESI[0xc] = unaff_EDI[0xc];
  unaff_ESI[0xd] = unaff_EDI[0xd];
  *(undefined1 *)(unaff_ESI + 0xe) = *(undefined1 *)(unaff_EDI + 0xe);
  *(undefined1 *)((int)unaff_ESI + 0x39) = *(undefined1 *)((int)unaff_EDI + 0x39);
  *(undefined1 *)((int)unaff_ESI + 0x3a) = *(undefined1 *)((int)unaff_EDI + 0x3a);
  *(undefined1 *)((int)unaff_ESI + 0x3b) = *(undefined1 *)((int)unaff_EDI + 0x3b);
  *(undefined1 *)(unaff_ESI + 0xf) = *(undefined1 *)(unaff_EDI + 0xf);
  *(undefined1 *)((int)unaff_ESI + 0x3d) = *(undefined1 *)((int)unaff_EDI + 0x3d);
  return;
}
