/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56EE70229733EB49BB19EB15B280C0124D49DEC9F2345C0BD1C9B8F9B9C9080D
 * Entry: 0x0007db60, Ghidra index: 1493, label: FUN_0007db60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0007db60(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00087940(unaff_ESI,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined1 *)(unaff_ESI + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
  *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
  *(undefined1 *)(unaff_ESI + 0x30) = *(undefined1 *)(unaff_EDI + 0x30);
  *(undefined1 *)(unaff_ESI + 0x31) = *(undefined1 *)(unaff_EDI + 0x31);
  *(undefined1 *)(unaff_ESI + 0x32) = *(undefined1 *)(unaff_EDI + 0x32);
  *(undefined1 *)(unaff_ESI + 0x33) = *(undefined1 *)(unaff_EDI + 0x33);
  *(undefined1 *)(unaff_ESI + 0x34) = *(undefined1 *)(unaff_EDI + 0x34);
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(unaff_EDI + 0x38);
  return;
}
