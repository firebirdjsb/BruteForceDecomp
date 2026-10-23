/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B0B442FD1D95B52E3DEBB9224E07DC4C5FE97B6F8258736224D80D0B6148FCE
 * Entry: 0x002c9670, Ghidra index: 10139, label: FUN_002c9670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c9670(void)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x68);
  *in_ECX = iVar2;
  in_ECX[1] = *(int *)(iVar2 + 0x90);
  piVar1 = in_ECX + 0x19;
  if ('\a' < *(char *)(*in_ECX + 0x70)) {
    iVar2 = 0x15;
    do {
      *piVar1 = unaff_EDI + 0x10;
      piVar1 = piVar1 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    in_ECX[4] = *(int *)(unaff_EDI + 0x60);
    return;
  }
  iVar2 = 0x14;
  do {
    *piVar1 = 0;
    piVar1 = piVar1 + -1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_ECX[5] = unaff_EDI + 0x10;
  in_ECX[4] = *(int *)(unaff_EDI + 0x60);
  return;
}
