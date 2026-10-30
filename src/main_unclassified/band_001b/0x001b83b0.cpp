/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32F7C8D264EAAB5FC26D3E9FEFC2738E8BDA03959C1ACF3009BCE0EF8F004650
 * Entry: 0x001b83b0, Ghidra index: 5705, label: FUN_001b83b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001b83b0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_30;
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308250); /* x86 push imm32 at 0x001b83b5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(param_3 + 0x14);
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    iVar4 = *(int *)(in_ECX + 0xc) - iVar1;
    iVar3 = iVar4 * 0x2aaaaaab;
    local_30 = iVar4 / 0x18;
  }
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar1) / 0x18;
    }
    if (0xaaaaaaaU - iVar3 < param_2) {
      iVar3 = FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return iVar3;
    }
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar1) / 0x18;
    }
    if (local_30 < iVar3 + param_2) {
      if (0xaaaaaaa - (local_30 >> 1) < local_30) {
        local_30 = 0;
      }
      else {
        local_30 = local_30 + (local_30 >> 1);
      }
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar1) / 0x18;
      }
      if (local_30 < iVar3 + param_2) {
        iVar3 = FUN_0017c5a0();
        local_30 = iVar3 + param_2;
      }
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdd00(in_ECX);
      FUN_001cb520();
      FUN_001cdd00(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
      }
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = iVar1 + local_30 * 0x18;
        *(uint *)(in_ECX + 8) = iVar1 + (param_2 + iVar4) * 0x18;
        *(int *)(in_ECX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return iVar1;
      }
      for (; iVar3 != *(int *)(in_ECX + 8); iVar3 = iVar3 + 0x18) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x18) < param_2) {
      FUN_001cdd00(in_ECX);
      local_8 = 2;
      FUN_001cb520();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x18;
    }
    else {
      uVar2 = FUN_001cdd00(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar2;
      FUN_001cf140(param_1);
    }
    iVar3 = FUN_001cf0f0();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar3;
}
