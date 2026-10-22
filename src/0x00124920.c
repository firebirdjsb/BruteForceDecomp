/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AB09AA995754B3D91E49DBE441779ED926FC10808828E958CEABC83D087820A
 * Entry: 0x00124920, Ghidra index: 3688, label: FUN_00124920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00124920(void)

{
  char cVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EDI;
  undefined4 local_4;
  
  iVar2 = *(int *)(unaff_EDI + 0x2e8);
  local_4 = 1.0;
  cVar1 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x20))();
  if ((((cVar1 != '\0') && (iVar2 = *(int *)(iVar2 + 0x164), iVar2 != 0)) &&
      (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 0x14)) && (iVar2 != 0)) {
    iVar2 = *(int *)(unaff_EDI + 0x2e8);
    cVar1 = (**(code **)(*(int *)(iVar2 + 0x178) + 0x20))();
    if (((cVar1 == '\0') || (*(int *)(iVar2 + 0x198) == 0)) && (0 < unaff_EBX)) {
      iVar2 = FUN_0014d2e0();
      local_4 = (float)*(int *)(*(int *)(iVar2 + 0x228) + 0x16c);
    }
  }
  (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0x2c))(local_4);
  return;
}
