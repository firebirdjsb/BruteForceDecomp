/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C9F123061E4CC41C0C26747DC727359BE74434A489FFA14DDBE1FF8E2696D78
 * Entry: 0x001d2cf0, Ghidra index: 6304, label: FUN_001d2cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d2cf0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  *(undefined1 *)(unaff_ESI + 1) = *(undefined1 *)(unaff_EDI + 1);
  FUN_0001f4f0(unaff_EDI + 2,0,0xffffffff);
  unaff_ESI[9] = unaff_EDI[9];
  unaff_ESI[10] = unaff_EDI[10];
  FUN_001d59e0();
  FUN_001d55d0();
  FUN_001d5710(unaff_EDI + 0x13);
  FUN_001cd3b0(unaff_EDI + 0x17);
  FUN_001d5890();
  return;
}
