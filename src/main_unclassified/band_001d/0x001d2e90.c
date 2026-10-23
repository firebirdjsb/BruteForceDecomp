/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68A43BEAE84828F2B50B84348DCA8F65C14AD747EE09CD5FA6DF04F844636B6E
 * Entry: 0x001d2e90, Ghidra index: 6307, label: FUN_001d2e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d2e90(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = in_EAX[1];
  unaff_ESI[2] = in_EAX[2];
  unaff_ESI[3] = in_EAX[3];
  unaff_ESI[4] = in_EAX[4];
  *(undefined1 *)(unaff_ESI + 5) = *(undefined1 *)(in_EAX + 5);
  unaff_ESI[6] = in_EAX[6];
  *(undefined1 *)(unaff_ESI + 7) = *(undefined1 *)(in_EAX + 7);
  *(undefined1 *)((int)unaff_ESI + 0x1d) = *(undefined1 *)((int)in_EAX + 0x1d);
  *(undefined1 *)((int)unaff_ESI + 0x1e) = *(undefined1 *)((int)in_EAX + 0x1e);
  *(undefined1 *)((int)unaff_ESI + 0x1f) = *(undefined1 *)((int)in_EAX + 0x1f);
  FUN_00248d00();
  FUN_0017c270();
  FUN_00262ee0();
  FUN_0010bc40();
  FUN_001d52c0(in_EAX + 0x18);
  return;
}
