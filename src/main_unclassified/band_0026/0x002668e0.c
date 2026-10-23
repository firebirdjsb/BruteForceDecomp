/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4EFB115CDBD1DAFA378AB46970262C54C41E58196433B5A7B29424419B498EE
 * Entry: 0x002668e0, Ghidra index: 8739, label: FUN_002668e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002668e0(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar2 = unaff_EDI[1];
  if (iVar2 != *unaff_EDI) {
    do {
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == -1) {
        return;
      }
      piVar1 = *(int **)(iVar2 + 0x58);
      *(uint *)(iVar2 + 0x44) = *(uint *)(iVar2 + 0x44) & 0xffffffdf;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x24))(piVar1,iVar2);
      }
      if (*(int *)(iVar2 + 0x10) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 100);
      }
    } while (iVar2 != *unaff_EDI);
  }
  return;
}
