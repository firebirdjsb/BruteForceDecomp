/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C7B5602F50A05A7F7755BFE67802307FDE55021BE805F528698FC21729F423B
 * Entry: 0x0008ee10, Ghidra index: 1741, label: FUN_0008ee10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008ee10(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *in_EDX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_3c [10];
  /* XBE 0x0008EE2E: MOV [EBP-0x10],ESP saves the guest SEH frame.
   * Ghidra's synthetic stack0xffffff80 only flowed into a dead
   * local_14 assignment. Do not create a fake host stack pointer.
   * Native FS:0/SEH translation remains ABI_UNVERIFIED. */
  undefined4 local_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308530);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar5 = local_3c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x28;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x28;
    }
    if (0x6666666U - iVar3 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x28;
    }
    if (uVar6 < iVar3 + param_2) {
      if (0x6666666 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x28;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_0008ebb0();
        uVar6 = iVar2 + param_2;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_0008f3f0(in_ECX);
      FUN_0008ece0();
      FUN_0008f3f0(in_ECX);
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x28;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar6 * 0x28 + iVar3;
      *(uint *)(in_ECX + 8) = iVar3 + (param_2 + iVar4) * 0x28;
      *(int *)(in_ECX + 4) = iVar3;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x28) < param_2) {
      FUN_0008f3f0(in_ECX);
      local_8 = 2;
      FUN_0008ece0();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x28;
    }
    else {
      uVar1 = FUN_0008f3f0(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_0008f450(param_1);
    }
    FUN_0008f420();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
