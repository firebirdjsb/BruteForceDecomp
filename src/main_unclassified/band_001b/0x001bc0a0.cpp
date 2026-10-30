/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0F0F0E511AD0113CFFBB7CEBBA48A5001845CFB861F494B777FA395ECF52E77
 * Entry: 0x001bc0a0, Ghidra index: 5738, label: FUN_001bc0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bc0a0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_10;
  uint32_t puStack_c; /* original guest32 SEH stack word; FS:0 adapter pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308870); /* XBE push imm32 at 0x001bc0a5 */
  uStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_10;
  FUN_001c96f0();
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 4;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
    }
    if (0xfffffffU - iVar5 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0xfffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 4;
          }
          uVar1 = iVar2 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        FUN_001cdfa0();
        FUN_001cbb50();
        FUN_001cdfa0();
        local_8 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        if (iVar2 != 0) {
          FUN_000e2e60(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar1 * 0x10 + iVar5;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x10 + iVar5;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 4) < param_3) {
          FUN_001cdfa0();
          local_8 = 2;
          FUN_001cbb50();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        }
        else {
          uVar3 = FUN_001cdfa0();
          *(undefined4 *)(param_1 + 8) = uVar3;
          FUN_001cf840(param_2);
        }
        FUN_001cf810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
