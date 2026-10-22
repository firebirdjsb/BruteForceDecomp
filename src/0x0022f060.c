/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 783D0F8E4EDDC38E2CE822ACE08B72D5BE0E4173ADBB180F123F6537EEF66A34
 * Entry: 0x0022f060, Ghidra index: 7732, label: FUN_0022f060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022f060(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x1b0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        return;
      }
      piVar3 = *(int **)(*(int *)(iVar1 + 0x10) + 0xb0);
      if (*(int *)(piVar3[3] + 4) != 3) {
        return;
      }
    }
    else {
      piVar3 = *(int **)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 0xf4))(), iVar1 != 0)) {
      uVar2 = (**(code **)(*piVar3 + 0xf4))();
      FUN_00024200(uVar2,unaff_EDI);
      if ((*(byte *)(piVar3[3] + 0x1a8) & 1) != 0) {
        (**(code **)(*piVar3 + 0xf4))();
        FUN_00045530();
        return;
      }
    }
  }
  return;
}
