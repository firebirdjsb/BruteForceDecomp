/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7AADDD73B7405F5846E2E31E18600511C1A1241299D8DBB83719210F85B3A44
 * Entry: 0x00124840, Ghidra index: 3687, label: FUN_00124840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00124840(void)

{
  char cVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar2 = *(int *)(unaff_EBX + 0x2e8);
  cVar1 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x20))();
  if ((((cVar1 != '\0') && (iVar2 = *(int *)(iVar2 + 0x164), iVar2 != 0)) &&
      (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 0x14)) && (iVar2 != 0)) {
    iVar2 = *(int *)(unaff_EBX + 0x2e8);
    cVar1 = (**(code **)(*(int *)(iVar2 + 0x178) + 0x20))();
    if ((cVar1 == '\0') || (*(int *)(iVar2 + 0x198) == 0)) {
      iVar2 = *(int *)(unaff_EBX + 0x2e8);
      cVar1 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x20))();
      if ((cVar1 == '\0') ||
         ((iVar2 = *(int *)(iVar2 + 0x164), iVar2 == 0 ||
          (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 0x14)))) {
        iVar2 = 0;
      }
      if (0.0 < (float)*(int *)(*(int *)(iVar2 + 0x228) + 0x16c)) {
        (**(code **)(**(int **)(unaff_EBX + 0x5a4) + 0x28))(1);
        return;
      }
    }
  }
  (**(code **)(**(int **)(unaff_EBX + 0x5a4) + 0x28))(0);
  return;
}
