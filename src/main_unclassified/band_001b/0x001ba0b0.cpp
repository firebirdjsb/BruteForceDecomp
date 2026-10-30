/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 292F1924FBD422E1DB1DB200D80746185DF62FA887B06038E19F964F3E33456B
 * Entry: 0x001ba0b0, Ghidra index: 5719, label: FUN_001ba0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ba0b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest32 SEH word; native FS:0 adapter TBD */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308200); /* original x86 push imm32 at 0x001ba0b5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 10;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar1 != 0) {
    if (uVar1 < 0x400000) {
      iVar2 = FUN_002ea01d(uVar1 * 0x400);
      *(int *)(param_1 + 4) = iVar2;
      *(int *)(param_1 + 8) = iVar2;
      *(uint *)(param_1 + 0xc) = uVar1 * 0x400 + iVar2;
    }
    else {
      FUN_00038940(param_1);
    }
    local_8 = 0;
    uVar3 = FUN_001cf3d0(param_1,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
