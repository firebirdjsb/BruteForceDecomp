/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E169998EC7EA5A1EC28FC24965482C527F8DA5958AA8B218DAAADAF043EF9934
 * Entry: 0x00089880, Ghidra index: 1642, label: FUN_00089880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00089880(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int local_8;
  float local_4;
  
  bVar5 = false;
  local_4 = 0.0;
  iVar6 = 0x30;
  do {
    iVar4 = *(int *)(param_1 + iVar6);
    if ((iVar4 != 0) && (iVar2 = FUN_00089770(param_1,iVar4), *(int *)(param_1 + 0x18) <= iVar2)) {
      if (*(int *)(iVar4 + 0x10) == 0) {
        bVar5 = true;
        local_8 = 0;
        piVar3 = &local_8;
      }
      else {
        piVar3 = (int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0xc) + 0x120);
      }
      iVar2 = *piVar3;
      if (bVar5) {
        bVar5 = false;
      }
      iVar4 = *(int *)(iVar4 + 0x2c);
      fVar1 = 0.0;
      if (iVar4 != -4) {
        fVar1 = (float)*(int *)(iVar4 + 0x1c);
      }
      if (iVar4 != -4) {
        *(int *)(iVar4 + 0x1c) = (int)(fVar1 + 1.0);
        local_4 = fVar1 + 1.0;
      }
      if ((iVar2 != 0) && (iVar4 = FUN_0008e590(iVar4), iVar4 != 0)) {
        local_4 = (float)*(int *)(iVar4 + 0x18) + 1.0;
        *(int *)(iVar4 + 0x18) = (int)local_4;
      }
    }
    iVar6 = iVar6 + 0xc;
  } while (iVar6 < 0x90);
  return;
}
