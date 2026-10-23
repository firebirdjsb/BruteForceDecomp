/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D78D2E3827165E0D19B895A93B26A278A09AE00E41960E81D93E4E9755CBFE82
 * Entry: 0x001bfc30, Ghidra index: 5766, label: FUN_001bfc30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bfc30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_ECX;
  int in_EDX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_34;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003081b0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003081b0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar4 = *(int *)(in_EDX + 4);
  if (iVar4 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = (*(int *)(in_EDX + 0xc) - iVar4) / 0x1c;
  }
  if (in_ECX != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_EDX + 8) - iVar4) / 0x1c;
    }
    if (0x9249249U - iVar3 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(in_EDX + 8) - iVar4) / 0x1c;
    }
    if (local_34 < iVar4 + in_ECX) {
      if (0x9249249 - (local_34 >> 1) < local_34) {
        local_34 = 0;
      }
      else {
        local_34 = local_34 + (local_34 >> 1);
      }
      iVar4 = FUN_0015e840();
      if (local_34 < iVar4 + in_ECX) {
        iVar4 = FUN_0015e840();
        local_34 = iVar4 + in_ECX;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce2a0(in_EDX);
      FUN_001cc6a0();
      FUN_001ce2a0(in_EDX);
      local_8 = 0xffffffff;
      iVar1 = FUN_0015e840();
      iVar4 = *(int *)(in_EDX + 4);
      if (iVar4 != 0) {
        for (; iVar4 != *(int *)(in_EDX + 8); iVar4 = iVar4 + 0x1c) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = local_34 * 0x1c + iVar3;
      *(uint *)(in_EDX + 8) = (in_ECX + iVar1) * 0x1c + iVar3;
      *(int *)(in_EDX + 4) = iVar3;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x1c) < in_ECX) {
      FUN_001ce2a0(in_EDX);
      local_8 = 2;
      FUN_001cc6a0();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x1c;
    }
    else {
      uVar2 = FUN_001ce2a0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar2;
      FUN_001d0360(param_1);
    }
    FUN_001d0300();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
