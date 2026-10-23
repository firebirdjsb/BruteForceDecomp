/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CC86DE5ACCA7FC3500D610868EB369D446B541E501ADE67FB4FBACC9D4E4317
 * Entry: 0x000ad650, Ghidra index: 2074, label: FUN_000ad650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ad650(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = 0;
  piVar3 = (int *)(in_EAX + 100);
  while( true ) {
    if ((iVar1 < 0) || (2 < iVar1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar3;
    }
    if ((*(float *)(iVar2 + 0x60) != 0.0) && (*(int *)(iVar2 + 0x68) == unaff_EDI)) break;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    if (2 < iVar1) {
      return 0;
    }
  }
  return iVar2;
}
