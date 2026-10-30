/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D97D30738C8BD04EFD7EE2051E7E841CD8C2EC16489D6BBDD11A534F4A6F0541
 * Entry: 0x00085cf0, Ghidra index: 1573, label: FUN_00085cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00085cf0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_38 [4];
  uint local_34;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  /* XBE 0x00085D0E: MOV [EBP-0x10],ESP saves the guest SEH frame.
   * Ghidra's synthetic stack0xffffff84 only flowed into a dead
   * local_14 assignment. Do not create a fake host stack pointer.
   * Native FS:0/SEH translation remains ABI_UNVERIFIED. */
  undefined4 local_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308560);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_20 = 7;
  local_24 = 0;
  local_34 = local_34 & 0xffff0000;
  FUN_00087940(local_38);
  local_1c = *(undefined4 *)(in_ECX + 0x1c);
  local_18 = *(undefined1 *)(in_ECX + 0x20);
  local_17 = *(undefined1 *)(in_ECX + 0x21);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x24;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x24;
    }
    if (0x71c71c7U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x24;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x71c71c7 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x24;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_0017c240();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_000868a0();
        FUN_000858c0();
        FUN_000868a0();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x24;
        }
        if (iVar3 != 0) {
          FUN_00086c90();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x24 + iVar2;
        *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0x24;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x24) < param_3) {
          FUN_000868a0();
          local_8 = 2;
          FUN_000858c0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x24;
        }
        else {
          uVar1 = FUN_000868a0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_00086910(param_2);
        }
        FUN_000868d0();
      }
    }
  }
  if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
