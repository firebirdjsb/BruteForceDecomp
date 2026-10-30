/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DF2E6E076CD7C4B059DD8A0E027F65F3F9468284B0C0C1E2A9F831FA6F357A1
 * Entry: 0x001b6d90, Ghidra index: 5695, label: FUN_001b6d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b6d90(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  undefined4 *unaff_FS_OFFSET;
  uint local_28;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest SEH 32-bit word; FS:0 pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003082c0); /* x86 push imm32 at 0x001b6d95 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(int *)(in_EDX + 0xc) - iVar3 >> 4;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 4;
    }
    if (local_28 < iVar2 + in_ECX) {
      if (0xfffffff - (local_28 >> 1) < local_28) {
        local_28 = 0;
      }
      else {
        local_28 = local_28 + (local_28 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 4;
      }
      if (local_28 < iVar2 + in_ECX) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_EDX + 8) - iVar3 >> 4;
        }
        local_28 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdbb0(in_EDX);
      FUN_001cb020();
      FUN_001cdbb0(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_EDX + 8) - iVar3 >> 4;
      }
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x10) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = local_28 * 0x10 + iVar2;
      *(uint *)(in_EDX + 8) = (in_ECX + iVar4) * 0x10 + iVar2;
      *(int *)(in_EDX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_EDX + 8) - param_1 >> 4) < in_ECX) {
      FUN_001cdbb0(in_EDX);
      local_8 = 2;
      FUN_001cb020();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x10;
    }
    else {
      uVar1 = FUN_001cdbb0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001ced00(param_1);
    }
    FUN_001cecd0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
