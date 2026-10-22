/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0573D3B083E4651CEA28D71B8A927D7265D7AAD93C77C06D638F0D1FAAB321B1
 * Entry: 0x001c9660, Ghidra index: 5830, label: FUN_001c9660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c9660(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_0001f4f0(unaff_EDI,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined1 *)(unaff_ESI + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
  *(undefined1 *)(unaff_ESI + 0x21) = *(undefined1 *)(unaff_EDI + 0x21);
  *(undefined1 *)(unaff_ESI + 0x22) = *(undefined1 *)(unaff_EDI + 0x22);
  *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
  *(undefined4 *)(unaff_ESI + 0x30) = *(undefined4 *)(unaff_EDI + 0x30);
  *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(unaff_EDI + 0x34);
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(unaff_EDI + 0x38);
  *(undefined4 *)(unaff_ESI + 0x54) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined1 *)(unaff_ESI + 0x40) = 0;
  FUN_0001f4f0(unaff_EDI + 0x3c,0,0xffffffff);
  FUN_001cba30(unaff_ESI + 0x58);
  return;
}
