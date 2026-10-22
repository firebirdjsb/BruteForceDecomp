/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E881AA98ED51A15CEE8C96EADA0715332E1058D2FE8ACCB604D1A683084FFBD
 * Entry: 0x000761d0, Ghidra index: 1365, label: FUN_000761d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000761d0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = *in_EAX;
  *(undefined1 *)(unaff_EDI + 1) = *(undefined1 *)(in_EAX + 1);
  *(undefined1 *)((int)unaff_EDI + 5) = *(undefined1 *)((int)in_EAX + 5);
  *(undefined1 *)((int)unaff_EDI + 6) = *(undefined1 *)((int)in_EAX + 6);
  unaff_EDI[2] = in_EAX[2];
  unaff_EDI[3] = in_EAX[3];
  unaff_EDI[4] = in_EAX[4];
  unaff_EDI[6] = 0;
  if (in_EAX[6] != 0) {
    FUN_0008f6a0(in_EAX[6]);
  }
  return;
}
