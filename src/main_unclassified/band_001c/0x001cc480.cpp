/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70FBB44B4A550249F1BD3DF5481DF8173D7EDA71EA03696FD15B82E54BE0A739
 * Entry: 0x001cc480, Ghidra index: 5916, label: FUN_001cc480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc480(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308810; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308810U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x14;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar3 != 0) {
    if (uVar3 < 0xccccccd) {
      iVar1 = FUN_002ea01d(uVar3 * 0x14);
      *(int *)(param_1 + 4) = iVar1;
      *(int *)(param_1 + 8) = iVar1;
      *(uint *)(param_1 + 0xc) = uVar3 * 0x14 + iVar1;
    }
    else {
      FUN_00038940(param_1);
    }
    local_8 = 0;
    uVar2 = FUN_00263440(param_1,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
