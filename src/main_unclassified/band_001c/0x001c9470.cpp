/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCED80A0BB0864F0E81AE867312D031A7C7BAC639917DE8F2784D28F435D522C
 * Entry: 0x001c9470, Ghidra index: 5827, label: FUN_001c9470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c9470(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  FUN_001ca9e0(unaff_ESI + 2);
  FUN_001ca9e0(unaff_ESI + 0x10);
  unaff_ESI[0x1e] = unaff_EDI[0x1e];
  unaff_ESI[0x1f] = unaff_EDI[0x1f];
  unaff_ESI[0x20] = unaff_EDI[0x20];
  unaff_ESI[0x21] = unaff_EDI[0x21];
  unaff_ESI[0x22] = unaff_EDI[0x22];
  *(undefined1 *)(unaff_ESI + 0x23) = *(undefined1 *)(unaff_EDI + 0x23);
  *(undefined1 *)((int)unaff_ESI + 0x8d) = *(undefined1 *)((int)unaff_EDI + 0x8d);
  *(undefined1 *)((int)unaff_ESI + 0x8e) = *(undefined1 *)((int)unaff_EDI + 0x8e);
  *(undefined1 *)((int)unaff_ESI + 0x8f) = *(undefined1 *)((int)unaff_EDI + 0x8f);
  *(undefined1 *)(unaff_ESI + 0x24) = *(undefined1 *)(unaff_EDI + 0x24);
  *(undefined1 *)((int)unaff_ESI + 0x91) = *(undefined1 *)((int)unaff_EDI + 0x91);
  *(undefined1 *)((int)unaff_ESI + 0x92) = *(undefined1 *)((int)unaff_EDI + 0x92);
  *(undefined1 *)((int)unaff_ESI + 0x93) = *(undefined1 *)((int)unaff_EDI + 0x93);
  *(undefined1 *)(unaff_ESI + 0x25) = *(undefined1 *)(unaff_EDI + 0x25);
  *(undefined1 *)((int)unaff_ESI + 0x95) = *(undefined1 *)((int)unaff_EDI + 0x95);
  *(undefined1 *)((int)unaff_ESI + 0x96) = *(undefined1 *)((int)unaff_EDI + 0x96);
  *(undefined1 *)((int)unaff_ESI + 0x97) = *(undefined1 *)((int)unaff_EDI + 0x97);
  *(undefined1 *)(unaff_ESI + 0x26) = *(undefined1 *)(unaff_EDI + 0x26);
  *(undefined1 *)((int)unaff_ESI + 0x99) = *(undefined1 *)((int)unaff_EDI + 0x99);
  FUN_001cb560(unaff_ESI + 0x27);
  return;
}
