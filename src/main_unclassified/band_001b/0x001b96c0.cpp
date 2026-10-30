/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 530E86F3B30E79E53D169DBA191B3AC19E117530518B7CCD8E26DA1178EC15B4
 * Entry: 0x001b96c0, Ghidra index: 5714, label: FUN_001b96c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b96c0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest32 SEH word; native FS:0 adapter TBD */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308220); /* original x86 push imm32 at 0x001b96c5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_EDX + 0xc) - iVar3) / 0xc;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0xc;
    }
    if (0x15555555U - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0xc;
    }
    if (uVar5 < iVar2 + in_ECX) {
      if (0x15555555 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0xc;
      }
      if (uVar5 < iVar3 + in_ECX) {
        iVar3 = FUN_001aa460();
        uVar5 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_000507c0(in_EDX);
      FUN_0004f820();
      FUN_000507c0(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0xc;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = uVar5 * 0xc + iVar2;
      *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 0xc;
      *(int *)(in_EDX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0xc) < in_ECX) {
      FUN_000507c0(in_EDX);
      local_8 = 2;
      FUN_0004f820();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0xc;
    }
    else {
      uVar1 = FUN_000507c0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001cef00(param_1);
    }
    FUN_001ceed0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
