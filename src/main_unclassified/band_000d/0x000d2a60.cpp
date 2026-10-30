/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54D875C143FEB70CF57B34AEE9E75D93D34459FF46489845D48E37C94A20F712
 * Entry: 0x000d2a60, Ghidra index: 2620, label: FUN_000d2a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00038940(void);
extern int FUN_0017c5a0(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_00248fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int FUN_000d2d60(void);
extern void FUN_001cee20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_001cedf0(undefined4 *param_1,undefined4 *param_2);

void FUN_000d2a60(int param_1,uint param_2)

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
  undefined4 local_2c [6];
  /* XBE 0x000D2A7E: MOV [EBP-0x10],ESP saves the guest SEH frame.
   * Ghidra's synthetic stack0xffffff90 only flowed into a dead
   * local_14 assignment. Do not create a fake host stack pointer.
   * Native FS:0/SEH translation remains ABI_UNVERIFIED. */
  undefined4 local_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00307db0);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar5 = local_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
    }
    if (0xaaaaaaaU - iVar3 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
    }
    if (uVar6 < iVar3 + param_2) {
      if (0xaaaaaaa - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_0017c5a0();
        uVar6 = iVar2 + param_2;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_00248fc0(in_ECX);
      FUN_000d2d60();
      FUN_00248fc0(in_ECX);
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar6 * 0x18 + iVar3;
      *(uint *)(in_ECX + 8) = iVar3 + (param_2 + iVar4) * 0x18;
      *(int *)(in_ECX + 4) = iVar3;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x18) < param_2) {
      FUN_00248fc0(in_ECX);
      local_8 = 2;
      FUN_000d2d60();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x18;
    }
    else {
      uVar1 = FUN_00248fc0(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_001cee20(param_1);
    }
    FUN_001cedf0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
