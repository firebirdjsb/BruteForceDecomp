/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A978D6BBDDFE855E638E0BEDD59B5458FEE9D30953E775C5E03735A1C1260C17
 * Entry: 0x001b5fd0, Ghidra index: 5688, label: FUN_001b5fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001b5fd0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_34;
  undefined1 local_30 [4];
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  /* XBE 0x001B5FEE: MOV [EBP-0x10],ESP saves the guest SEH frame.
   * Ghidra's synthetic stack0xffffff88 only flowed into a dead
   * local_14 assignment. Do not create a fake host stack pointer.
   * Native FS:0/SEH translation remains ABI_UNVERIFIED. */
  undefined4 local_10;
  uint32_t puStack_c; /* original guest SEH 32-bit word; FS:0 pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003082e0); /* x86 push imm32 at 0x001b5fd5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c = local_2c & 0xffff0000;
  iVar1 = FUN_00087940(local_30);
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    local_34 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc) - iVar4;
    iVar1 = iVar3 * -0x6db6db6d;
    local_34 = iVar3 / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar4) / 0x1c;
    }
    if (0x9249249U - iVar1 < param_3) {
      iVar1 = FUN_00038940();
    }
    else {
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x1c;
      }
      if (local_34 < iVar4 + param_3) {
        if (0x9249249 - (local_34 >> 1) < local_34) {
          local_34 = 0;
        }
        else {
          local_34 = local_34 + (local_34 >> 1);
        }
        iVar4 = FUN_0015e840();
        if (local_34 < iVar4 + param_3) {
          iVar4 = FUN_0015e840();
          local_34 = iVar4 + param_3;
        }
        iVar1 = FUN_002ea01d();
        local_8 = 0;
        FUN_001cdaf0();
        FUN_001cadf0();
        FUN_001cdaf0();
        local_8 = 0xffffffff;
        iVar4 = FUN_0015e840();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00087460();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = local_34 * 0x1c + iVar1;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x1c + iVar1;
        *(int *)(param_1 + 4) = iVar1;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x1c) < param_3) {
          FUN_001cdaf0();
          local_8 = 2;
          FUN_001cadf0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
        }
        else {
          uVar2 = FUN_001cdaf0();
          *(undefined4 *)(param_1 + 8) = uVar2;
          FUN_001ceae0(param_2);
        }
        iVar1 = FUN_001ceab0();
      }
    }
  }
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
