/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC54E11CD821FE14BA20F255AEB92A420BC45A73A006F056DB40E49C27A5B3AA
 * Entry: 0x002bd220, Ghidra index: 9941, label: FUN_002bd220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd220(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_8;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x3e);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + uVar4 * 4);
    iVar5 = *(ushort *)(iVar1 + 2) - 1;
    local_8 = 0.0;
    if (-1 < iVar5) {
      do {
        iVar2 = *(int *)(*(int *)(iVar1 + 4) + iVar5 * 4);
        fVar3 = *(float *)(iVar2 + 0x58);
        FUN_002d29f0(iVar2);
        iVar5 = iVar5 + -1;
        local_8 = (fVar3 - *(float *)(iVar2 + 0x58)) * *(float *)(iVar2 + 0x54) + local_8;
      } while (-1 < iVar5);
      if (0.0 < local_8) {
        *(float *)(iVar1 + 0x28) = local_8 + *(float *)(iVar1 + 0x28);
      }
    }
  }
  return;
}
