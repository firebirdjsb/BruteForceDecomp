/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77D6647DB4886F5A9B33551807B4C0EBEFCCD3B6D0927DBEE1B891E064F6B6C1
 * Entry: 0x001b7950, Ghidra index: 5701, label: FUN_001b7950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001b7950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_ECX;
  int in_EDX;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_34;
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003082a0); /* x86 push imm32 at 0x001b7955 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar4 = *(int *)(param_2 + 0x18);
  iVar1 = *(int *)(in_EDX + 4);
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    iVar2 = *(int *)(in_EDX + 0xc) - iVar1;
    iVar4 = iVar2 * -0x6db6db6d;
    local_34 = iVar2 / 0x1c;
  }
  if (in_ECX != 0) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(in_EDX + 8) - iVar1) / 0x1c;
    }
    if (0x9249249U - iVar4 < in_ECX) {
      iVar4 = FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return iVar4;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(in_EDX + 8) - iVar1) / 0x1c;
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
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdc40(in_EDX);
      FUN_001cb3e0();
      FUN_001cdc40(in_EDX);
      local_8 = 0xffffffff;
      iVar2 = FUN_0015e840();
      iVar4 = *(int *)(in_EDX + 4);
      if (iVar4 == 0) {
        iVar4 = local_34 * 0x1c + iVar1;
        *(int *)(in_EDX + 0xc) = iVar4;
        *(uint *)(in_EDX + 8) = (in_ECX + iVar2) * 0x1c + iVar1;
        *(int *)(in_EDX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return iVar4;
      }
      for (; iVar4 != *(int *)(in_EDX + 8); iVar4 = iVar4 + 0x1c) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x1c) < in_ECX) {
      FUN_001cdc40(in_EDX);
      local_8 = 2;
      FUN_001cb3e0();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x1c;
    }
    else {
      uVar3 = FUN_001cdc40(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar3;
      FUN_001ceea0(param_1);
    }
    iVar4 = FUN_001cee50();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar4;
}
