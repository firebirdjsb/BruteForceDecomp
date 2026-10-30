/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BFEAD9AEA70965B73BD8D2D2FBB1CFEAC82633A23262B264E5F397D65B9250A
 * Entry: 0x002468b0, Ghidra index: 8094, label: FUN_002468b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002468b0(int param_1)

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
  /* Original entry+5: push 0x00309090; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309090U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x2c;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar3 != 0) {
    if (uVar3 < 0x5d1745e) {
      iVar1 = FUN_002ea01d(uVar3 * 0x2c);
      *(int *)(param_1 + 4) = iVar1;
      *(int *)(param_1 + 8) = iVar1;
      *(uint *)(param_1 + 0xc) = uVar3 * 0x2c + iVar1;
    }
    else {
      FUN_00038940(param_1);
    }
    local_8 = 0;
    uVar2 = FUN_002495f0(param_1,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
