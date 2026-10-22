/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F02E21A169222128543F4BF54D249AA6A30677588BDB32A1D3D97CDA8C918A7A
 * Entry: 0x00144620, Ghidra index: 4156, label: FUN_00144620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00144620(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308480;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 4;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar1 != 0) {
    if (uVar1 < 0x10000000) {
      iVar2 = FUN_002ea01d(uVar1 * 0x10);
      *(int *)(param_1 + 4) = iVar2;
      *(int *)(param_1 + 8) = iVar2;
      *(uint *)(param_1 + 0xc) = uVar1 * 0x10 + iVar2;
    }
    else {
      FUN_00038940(param_1);
    }
    local_8 = 0;
    uVar3 = FUN_00144860(param_1,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
