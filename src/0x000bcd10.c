/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD8F451D250611EFA9E6A127E7E9733E561527659D805582065A516D9660EECB
 * Entry: 0x000bcd10, Ghidra index: 2302, label: FUN_000bcd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bcd10(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xe0) != in_EAX) {
    FUN_0008f6a0();
  }
  iVar2 = *(int *)(unaff_EDI + 0xe0);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 0xbec) + 0xc))(iVar2);
    if (iVar2 != 0) {
      cVar1 = FUN_0008b880();
      *(byte *)(unaff_EDI + 0xe8) =
           *(byte *)(unaff_EDI + 0xe8) ^ (cVar1 << 2 ^ *(byte *)(unaff_EDI + 0xe8)) & 4;
      return;
    }
  }
  *(byte *)(unaff_EDI + 0xe8) = *(byte *)(unaff_EDI + 0xe8) | 4;
  return;
}
