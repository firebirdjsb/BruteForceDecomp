/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1647CA5B5BE85254105ADAC5D879AEF9B028E2228D20DC1111DC123251CA217A
 * Entry: 0x001baa20, Ghidra index: 5726, label: FUN_001baa20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001baa20(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest32 SEH word; native FS:0 adapter TBD */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003099f0); /* original x86 push imm32 at 0x001baa25 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 4) + 4))();
  }
  FUN_001cb7b0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x18;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
    }
    if (0xaaaaaaaU - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0xaaaaaaa - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_0017c5a0();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001cdeb0(param_1);
        FUN_001cb8f0();
        FUN_001cdeb0(param_1);
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
        }
        if (iVar3 != 0) {
          FUN_000e2ca0(iVar3,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x18 + iVar2;
        *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0x18;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x18) < param_3) {
          FUN_001cdeb0(param_1);
          local_8 = 2;
          FUN_001cb8f0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x18;
        }
        else {
          uVar1 = FUN_001cdeb0(param_1);
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001cf550(param_2);
        }
        FUN_001cf4f0();
      }
    }
  }
  FUN_000e3680();
  *unaff_FS_OFFSET = local_10;
  return;
}
