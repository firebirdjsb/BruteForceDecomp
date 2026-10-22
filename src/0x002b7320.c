/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD791BDEE506A7F386E72D764FC16E45107A5DB453C37971010C53476D80F3FC
 * Entry: 0x002b7320, Ghidra index: 9844, label: FUN_002b7320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b7320(void)

{
  int iVar1;
  int unaff_EDI;
  float10 fVar2;
  
  iVar1 = 0;
  do {
    fVar2 = (float10)FUN_00306b90();
    *(float *)(unaff_EDI + iVar1 * 4) = (float)fVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x3ff);
  *(undefined4 *)(unaff_EDI + iVar1 * 4) = *(undefined4 *)(unaff_EDI + -4 + iVar1 * 4);
  return;
}
