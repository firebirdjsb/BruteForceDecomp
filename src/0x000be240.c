/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 980ED2DD12871284FCB51B6056FE117C873207B19872B873B74A21F9636240ED
 * Entry: 0x000be240, Ghidra index: 2314, label: FUN_000be240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000be240(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  iVar2 = *(int *)(unaff_EBX + 0x34);
  if (iVar2 != 0) {
    iVar1 = 0;
    if (*(int *)(iVar2 + 0x60) != 0) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
    }
    iVar1 = (**(code **)(**(int **)(*(int *)(iVar1 + 8) + 0xbec) + 0xc))(iVar1);
    if ((((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x24), iVar1 != 0)) &&
        (*(byte *)(iVar1 + 0xa0) = *(byte *)(iVar1 + 0xa0) & 0xfa | 8,
        *(int *)(unaff_EBX + 0xe0) == 0)) && (*(int *)(iVar2 + 0x60) != 0)) {
      iVar2 = FUN_002ea01d(4);
      if (iVar2 != 0) {
        uVar3 = FUN_001e7850();
        *(undefined4 *)(unaff_EBX + 0xe0) = uVar3;
        return;
      }
      *(undefined4 *)(unaff_EBX + 0xe0) = 0;
    }
  }
  return;
}
