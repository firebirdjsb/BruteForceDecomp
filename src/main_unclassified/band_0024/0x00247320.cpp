/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A403BC1DBAA341ED2068D6E6EB40367FE9EDCD675B90C485E198147A2D915E49
 * Entry: 0x00247320, Ghidra index: 8102, label: FUN_00247320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00247320(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_20;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308b00; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308b00U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00247ff0();
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
        FUN_00249080();
        FUN_00248970();
        FUN_00249080();
        local_8 = 0xffffffff;
        iVar2 = FUN_00240d90();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_0024a930(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar4 * 0x38 + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x38 + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x38) < param_3) {
          FUN_00249080();
          local_8 = 2;
          FUN_00248970();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x38;
        }
        else {
          uVar1 = FUN_00249080();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_002497a0(param_2);
        }
        FUN_00249740();
      }
    }
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
