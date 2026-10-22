/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83D9353B55D9E3F871965EE40F7B8B245703CEB2B33EC4142F9F7EAE8F0EA601
 * Entry: 0x00086d60, Ghidra index: 1599, label: FUN_00086d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00086d60(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI != 0) {
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(undefined4 *)(unaff_ESI + 0x18) = 7;
    *(undefined2 *)(unaff_ESI + 4) = 0;
    FUN_00087940(unaff_ESI,0,0xffffffff);
    *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
    *(undefined1 *)(unaff_ESI + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
    *(undefined1 *)(unaff_ESI + 0x21) = *(undefined1 *)(unaff_EDI + 0x21);
  }
  return;
}
