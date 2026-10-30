/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DA05DEB247AEE1B3CDA78BB4A8E29C0CF47127D449444958E5957D919D5E940
 * Entry: 0x001ca740, Ghidra index: 5845, label: FUN_001ca740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ca740(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  *(undefined1 *)(unaff_ESI + 1) = *(undefined1 *)(unaff_EDI + 1);
  unaff_ESI[8] = 0xf;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  FUN_0001f4f0(unaff_EDI + 2,0,0xffffffff);
  unaff_ESI[9] = unaff_EDI[9];
  unaff_ESI[10] = unaff_EDI[10];
  FUN_001cca00(unaff_ESI + 0xb);
  FUN_001ccbf0(unaff_ESI + 0xf);
  FUN_001cccc0(unaff_ESI + 0x13);
  unaff_ESI[0x17] = 0;
  FUN_001cd3b0(unaff_EDI + 0x17);
  FUN_001ccdc0(unaff_ESI + 0x18);
  return;
}
