/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA84056DDA40140972771E20D7BA9964167EFB375A972BB42AEC3BF6862F95F3
 * Entry: 0x001b76b0, Ghidra index: 5700, label: FUN_001b76b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b76b0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  undefined4 *in_EDX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_34 [8];
  /* XBE 0x001B76CE: MOV [EBP-0x10],ESP saves the guest SEH frame.
   * Ghidra's synthetic stack0xffffff88 only flowed into a dead
   * local_14 assignment. Do not create a fake host stack pointer.
   * Native FS:0/SEH translation remains ABI_UNVERIFIED. */
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00307e00); /* x86 push imm32 at 0x001b76b5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar6 = local_34;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0xc) - iVar3 >> 5;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 5;
    }
    if (0x7ffffffU - iVar5 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 5;
    }
    if (uVar4 < iVar5 + param_2) {
      if (0x7ffffff - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 5;
      }
      if (uVar4 < iVar5 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8) - iVar3 >> 5;
        }
        uVar4 = iVar3 + param_2;
      }
      iVar5 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdc10(in_ECX);
      FUN_000b11c0();
      FUN_001cdc10(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar3 >> 5;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar4 * 0x20 + iVar5;
      *(uint *)(in_ECX + 8) = (param_2 + iVar1) * 0x20 + iVar5;
      *(int *)(in_ECX + 4) = iVar5;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_ECX + 8) - param_1 >> 5) < param_2) {
      FUN_001cdc10(in_ECX);
      local_8 = 2;
      FUN_000b11c0();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x20;
    }
    else {
      uVar2 = FUN_001cdc10(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar2;
      FUN_001cedc0(param_1);
    }
    FUN_001ced90();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
