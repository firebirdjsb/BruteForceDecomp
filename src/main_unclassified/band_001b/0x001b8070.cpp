/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DD45E709F351150899CA384E8B3E1B884C38789CCBB39AA77ABF16D6FF1A6F6
 * Entry: 0x001b8070, Ghidra index: 5704, label: FUN_001b8070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b8070(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_38;
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308260); /* x86 push imm32 at 0x001b8075 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = (*(int *)(in_EDX + 0xc) - iVar3) / 0x18;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x18;
    }
    if (0xaaaaaaaU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x18;
    }
    if (local_38 < iVar2 + in_ECX) {
      if (0xaaaaaaa - (local_38 >> 1) < local_38) {
        local_38 = 0;
      }
      else {
        local_38 = local_38 + (local_38 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x18;
      }
      if (local_38 < iVar3 + in_ECX) {
        iVar3 = FUN_0017c5a0();
        local_38 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdcd0(in_EDX);
      FUN_001cb500();
      FUN_001cdcd0(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x18;
      }
      if (iVar3 == 0) {
        *(uint *)(in_EDX + 0xc) = iVar2 + local_38 * 0x18;
        *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 0x18;
        *(int *)(in_EDX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x18) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x18) < in_ECX) {
      FUN_001cdcd0(in_EDX);
      local_8 = 2;
      FUN_001cb500();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x18;
    }
    else {
      uVar1 = FUN_001cdcd0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001cf0c0(param_1);
    }
    FUN_001cf070();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
