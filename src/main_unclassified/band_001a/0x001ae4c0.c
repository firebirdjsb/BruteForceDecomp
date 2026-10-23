/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E4E59AA28E7B57008D577FDDB78B8C4C250DDFB62D5811D5A39ED8C74C5FEF4
 * Entry: 0x001ae4c0, Ghidra index: 5555, label: FUN_001ae4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ae4c0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308390;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 < 0x20000000) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 3;
    }
    if (uVar1 < param_1) {
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce3c0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = iVar2 + param_1 * 8;
        *(int *)(in_ECX + 8) = iVar2;
        *(int *)(in_ECX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_ECX + 8); iVar3 = iVar3 + 8) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
