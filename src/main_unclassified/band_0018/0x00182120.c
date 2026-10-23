/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBF47EEA34150E9584AAFE548437DAAD8663F13157DD525D20BD2C95136B2F55
 * Entry: 0x00182120, Ghidra index: 5171, label: FUN_00182120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00182120(int param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  uVar5 = (uint)param_2;
  local_c = XAPILIB__XPhysicalAlloc(uVar5 * 0x9000,0xffffffff,0,0x204);
  *(uint *)(param_1 + 0x4c) = local_c;
  uVar1 = local_c & 0xffffff00;
  if (param_2 != 0) {
    local_8 = 0;
    do {
      iVar2 = FUN_002ea01d(0xc0);
      if (iVar2 == 0) {
        local_4 = 0;
      }
      else {
        local_4 = FUN_00182dc0(local_8,local_c);
      }
      iVar2 = *(int *)(param_1 + 0x34);
      iVar3 = FUN_000ff730(param_1 + 0x30,iVar2,*(undefined4 *)(iVar2 + 4),&local_4);
      uVar4 = FUN_000b2a50();
      *(int *)(iVar2 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      local_c = local_c + 0x9000;
      local_8 = local_8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar1 = CONCAT31((int3)((uint)uVar4 >> 8),param_2);
  }
  return CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 == param_2);
}
