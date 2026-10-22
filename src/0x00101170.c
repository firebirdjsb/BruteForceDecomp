/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDBDAD60E120223307EFCE98BB66535DCFEBE0CD2E03A44650B9160E3EB5D7F9
 * Entry: 0x00101170, Ghidra index: 3236, label: FUN_00101170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00101170(void)

{
  int *piVar1;
  int *piVar2;
  byte in_AL;
  byte bVar3;
  int iVar4;
  int *unaff_EDI;
  int iStack_4;
  
  bVar3 = in_AL & 1;
  *(byte *)(unaff_EDI + 10) = *(byte *)(unaff_EDI + 10) & 0xfe | bVar3;
  if (((bVar3 != 0) && (unaff_EDI[1] != 0)) &&
     (piVar1 = *(int **)(unaff_EDI[1] + 0x94), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x28))();
  }
  (**(code **)(*unaff_EDI + 0x20))();
  iVar4 = 0;
  if (unaff_EDI[0x1d] == 0) {
    iStack_4 = 0;
  }
  else {
    iStack_4 = unaff_EDI[0x1e] - unaff_EDI[0x1d] >> 2;
  }
  if (0 < iStack_4) {
    do {
      piVar1 = *(int **)(unaff_EDI[0x1d] + iVar4 * 4);
      *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) & 0xfe | bVar3;
      if (((bVar3 != 0) && (piVar1[1] != 0)) &&
         (piVar2 = *(int **)(piVar1[1] + 0x94), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x28))(piVar1);
      }
      (**(code **)(*piVar1 + 0x20))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iStack_4);
  }
  return;
}
