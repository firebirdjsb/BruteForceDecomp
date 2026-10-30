/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A114A7C70D70888F3B8426635A7CD105132F018AA6A36BE1446EEF430F89A996
 * Entry: 0x001ae6f0, Ghidra index: 5557, label: FUN_001ae6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ae6f0(uint param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* guest32 SEH handler stack word; native FS:0 adapter unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308370); /* XBE push imm32 at 0x001ae6f5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (param_1 < 0x2c8590c) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x5c;
    }
    if (uVar3 < param_1) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce420();
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        *(uint *)(in_ECX + 0xc) = param_1 * 0x5c + iVar1;
        *(int *)(in_ECX + 8) = iVar1;
        *(int *)(in_ECX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar2 != *(int *)(in_ECX + 8); iVar2 = iVar2 + 0x5c) {
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
