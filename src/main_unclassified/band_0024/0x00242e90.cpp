/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D5DC7AEB22E8E45806F31E4EEF205FE435560569563F8323DAE9361462B9087
 * Entry: 0x00242e90, Ghidra index: 8043, label: FUN_00242e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242e90(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003098e0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003098e0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (param_1 < 0x5d1745e) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x2c;
    }
    if (uVar2 < param_1) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_002490e0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = param_1 * 0x2c + iVar1;
        *(int *)(in_ECX + 8) = iVar1;
        *(int *)(in_ECX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      iVar1 = *(int *)(in_ECX + 8);
      for (; iVar3 != iVar1; iVar3 = iVar3 + 0x2c) {
        FUN_002430a0();
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
