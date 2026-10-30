/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7AD7A11A2B6BDEFC7D10C7E2777CAD817DE53D58E1907C258BC7A668E4A55BC
 * Entry: 0x001c7f90, Ghidra index: 5816, label: FUN_001c7f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c7f90(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_34;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003080e0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003080e0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar4 = *(int *)(in_ECX + 4);
  if (iVar4 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = (*(int *)(in_ECX + 0xc) - iVar4) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar4) / 0x1c;
    }
    if (0x9249249U - iVar3 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(in_ECX + 8) - iVar4) / 0x1c;
    }
    if (local_34 < iVar4 + param_2) {
      if (0x9249249 - (local_34 >> 1) < local_34) {
        local_34 = 0;
      }
      else {
        local_34 = local_34 + (local_34 >> 1);
      }
      iVar4 = FUN_0015e840();
      if (local_34 < iVar4 + param_2) {
        iVar4 = FUN_0015e840();
        local_34 = iVar4 + param_2;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce990(in_ECX);
      FUN_001cd250();
      FUN_001ce990(in_ECX);
      local_8 = 0xffffffff;
      iVar1 = FUN_0015e840();
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        *(uint *)(in_ECX + 0xc) = local_34 * 0x1c + iVar3;
        *(uint *)(in_ECX + 8) = (param_2 + iVar1) * 0x1c + iVar3;
        *(int *)(in_ECX + 4) = iVar3;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar4 != *(int *)(in_ECX + 8); iVar4 = iVar4 + 0x1c) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x1c) < param_2) {
      FUN_001ce990(in_ECX);
      local_8 = 2;
      FUN_001cd250();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x1c;
    }
    else {
      uVar2 = FUN_001ce990(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar2;
      FUN_001d1450(param_1);
    }
    FUN_001d1400();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
