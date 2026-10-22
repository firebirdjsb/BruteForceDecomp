/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDC492B9ACC922D0FC2ED1DC33AD5A16C4CA03F91304526DC76898CED9A890E8
 * Entry: 0x00075780, Ghidra index: 1354, label: FUN_00075780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00075780(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307f30;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(in_ECX + 0xc) - iVar3 >> 2;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar3 >> 2;
    }
    if (0x3fffffffU - iVar2 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar3 >> 2;
    }
    if (local_1c < iVar2 + param_2) {
      if (0x3fffffff - (local_1c >> 1) < local_1c) {
        local_1c = 0;
      }
      else {
        local_1c = local_1c + (local_1c >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_ECX + 8) - iVar3 >> 2;
      }
      if (local_1c < iVar2 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8) - iVar3 >> 2;
        }
        local_1c = iVar3 + param_2;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      uVar1 = FUN_001e0da0();
      FUN_0003efa0(uVar1,param_2);
      FUN_001e0da0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar3 >> 2;
      }
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = iVar2 + local_1c * 4;
        *(uint *)(in_ECX + 8) = iVar2 + (param_2 + iVar4) * 4;
        *(int *)(in_ECX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_ECX + 8); iVar3 = iVar3 + 4) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)(*(int *)(in_ECX + 8) - param_1 >> 2) < param_2) {
      FUN_001e0da0();
      local_8 = 2;
      FUN_0003efa0(*(int *)(in_ECX + 8),param_2 - (*(int *)(in_ECX + 8) - param_1 >> 2));
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
    }
    else {
      uVar1 = FUN_001e0da0();
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_002614a0(param_1);
    }
    FUN_000a4790();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
