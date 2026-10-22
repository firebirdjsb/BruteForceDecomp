/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E184BE2C9E9EFB13C45DDB09CC2DF4046DBB43C4149269FAF390F473E548F64A
 * Entry: 0x0001c630, Ghidra index: 113, label: FUN_0001c630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001c630(int param_1,uint param_2)

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
  undefined4 local_28 [5];
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307a10;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff94;
  puVar5 = local_28;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x14;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
    }
    if (0xcccccccU - iVar3 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
    }
    if (uVar6 < iVar3 + param_2) {
      if (0xccccccc - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_0017c210();
        uVar6 = iVar2 + param_2;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_002634a0(in_ECX);
      FUN_00263420();
      FUN_002634a0(in_ECX);
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar6 * 0x14 + iVar3;
      *(uint *)(in_ECX + 8) = iVar3 + (param_2 + iVar4) * 0x14;
      *(int *)(in_ECX + 4) = iVar3;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x14) < param_2) {
      FUN_002634a0(in_ECX);
      local_8 = 2;
      FUN_00263420();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x14;
    }
    else {
      uVar1 = FUN_002634a0(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_001d01a0(param_1);
    }
    FUN_001d0170();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
