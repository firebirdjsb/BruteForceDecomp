/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84A7BF73CB064E1173308AC004FC641CFAAE7AD3FD8F11383571653B44949CDD
 * Entry: 0x001be2d0, Ghidra index: 5754, label: FUN_001be2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001be2d0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003097c0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003097c0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_000fdc90();
  FUN_001e0dd0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 0xc) - iVar3) / 0x38;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x38;
    }
    if (0x4924924U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x38;
      }
      if (uVar4 < iVar3 + param_3) {
        if (0x4924924 - (uVar4 >> 1) < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        iVar3 = FUN_00240d90();
        if (uVar4 < iVar3 + param_3) {
          iVar3 = FUN_00240d90();
          uVar4 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce120(param_1);
        FUN_001cbf90();
        FUN_001ce120(param_1);
        local_8 = 0xffffffff;
        iVar2 = FUN_00240d90();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_0006a330();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar4 * 0x38 + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x38 + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x38) < param_3) {
          FUN_001ce120(param_1);
          local_8 = 2;
          FUN_001cbf90();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x38;
        }
        else {
          uVar1 = FUN_001ce120(param_1);
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001cfd60(param_2);
        }
        FUN_001cfcb0();
      }
    }
  }
  FUN_0006a540();
  *unaff_FS_OFFSET = local_10;
  return;
}
