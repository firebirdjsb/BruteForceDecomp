/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCA0376F72BB34A64FF71E037FFA43F024E52F5CCDBB2C00689E605B2076A444
 * Entry: 0x001cabb0, Ghidra index: 5854, label: FUN_001cabb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cabb0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  unaff_ESI[2] = unaff_EDI[2];
  unaff_ESI[3] = unaff_EDI[3];
  unaff_ESI[4] = unaff_EDI[4];
  *(undefined1 *)(unaff_ESI + 5) = *(undefined1 *)(unaff_EDI + 5);
  unaff_ESI[6] = unaff_EDI[6];
  *(undefined1 *)(unaff_ESI + 7) = *(undefined1 *)(unaff_EDI + 7);
  unaff_ESI[8] = unaff_EDI[8];
  unaff_ESI[9] = unaff_EDI[9];
  *(undefined1 *)(unaff_ESI + 10) = *(undefined1 *)(unaff_EDI + 10);
  *(undefined1 *)((int)unaff_ESI + 0x29) = *(undefined1 *)((int)unaff_EDI + 0x29);
  unaff_ESI[0xb] = unaff_EDI[0xb];
  unaff_ESI[0xc] = unaff_EDI[0xc];
  *(undefined1 *)(unaff_ESI + 0xd) = *(undefined1 *)(unaff_EDI + 0xd);
  unaff_ESI[0xe] = unaff_EDI[0xe];
  unaff_ESI[0xf] = unaff_EDI[0xf];
  unaff_ESI[0x10] = unaff_EDI[0x10];
  unaff_ESI[0x11] = unaff_EDI[0x11];
  FUN_001bddb0(unaff_ESI + 0x12);
  FUN_001e0dd0(unaff_ESI + 0x16);
  unaff_ESI[0x1a] = unaff_EDI[0x1a];
  unaff_ESI[0x1b] = unaff_EDI[0x1b];
  unaff_ESI[0x1c] = unaff_EDI[0x1c];
  unaff_ESI[0x1d] = unaff_EDI[0x1d];
  unaff_ESI[0x1e] = unaff_EDI[0x1e];
  unaff_ESI[0x1f] = unaff_EDI[0x1f];
  unaff_ESI[0x20] = unaff_EDI[0x20];
  unaff_ESI[0x21] = unaff_EDI[0x21];
  unaff_ESI[0x22] = unaff_EDI[0x22];
  *(undefined1 *)(unaff_ESI + 0x23) = *(undefined1 *)(unaff_EDI + 0x23);
  *(undefined1 *)((int)unaff_ESI + 0x8d) = *(undefined1 *)((int)unaff_EDI + 0x8d);
  *(undefined1 *)(unaff_ESI + 0x24) = *(undefined1 *)(unaff_EDI + 0x24);
  *(undefined1 *)((int)unaff_ESI + 0x91) = *(undefined1 *)((int)unaff_EDI + 0x91);
  return;
}
