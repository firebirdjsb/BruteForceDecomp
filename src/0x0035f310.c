/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7932180103F71E41E9D4E9E42E19AA07A88E98F8A02C243C4E2A99AF0694D722
 * Entry: 0x0035f310, Ghidra index: 13217, label: FUN_0035f310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035f310(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x7c);
  iVar3 = FUN_0035b1a0();
  *(int *)(unaff_ESI + 0x80) =
       *(int *)(unaff_ESI + 0x80) +
       param_2 + ((int)(((ulonglong)param_1 * 1000) / (ulonglong)uVar1) - iVar3);
  iVar2 = *(int *)(unaff_ESI + 0x80);
  while (0 < iVar2) {
    do {
      iVar4 = FUN_0035b1a0();
    } while (iVar4 - iVar3 < *(int *)(unaff_ESI + 0x80));
    *(int *)(unaff_ESI + 0x80) = (iVar3 - iVar4) + *(int *)(unaff_ESI + 0x80);
    iVar3 = iVar4;
    iVar2 = *(int *)(unaff_ESI + 0x80);
  }
  return;
}
