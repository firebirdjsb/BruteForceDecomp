/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7FFBA88DD90CCB958A16C12039C797C612E15EC8829F6E1FBD5CF1CABC67617
 * Entry: 0x001ca960, Ghidra index: 5849, label: FUN_001ca960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ca960(void)

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
  *(undefined1 *)((int)unaff_ESI + 0x1d) = *(undefined1 *)((int)unaff_EDI + 0x1d);
  *(undefined1 *)((int)unaff_ESI + 0x1e) = *(undefined1 *)((int)unaff_EDI + 0x1e);
  *(undefined1 *)((int)unaff_ESI + 0x1f) = *(undefined1 *)((int)unaff_EDI + 0x1f);
  FUN_001bddb0(unaff_ESI + 8);
  FUN_001cc3b0(unaff_ESI + 0xc);
  FUN_001cc480(unaff_ESI + 0x10);
  FUN_001e0dd0(unaff_ESI + 0x14);
  FUN_001cc560(unaff_ESI + 0x18);
  return;
}
