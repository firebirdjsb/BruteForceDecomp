/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AB0283725B75904AC7E889E23A37A28932C896CA21A667E11557FA10C16A0F6
 * Entry: 0x002465d0, Ghidra index: 8093, label: FUN_002465d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002465d0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003095c0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003095c0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_00247fa0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 6;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 6;
    }
    if (0x3ffffffU - iVar5 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 6;
      }
      if (uVar2 < iVar5 + param_3) {
        if (0x3ffffff - (uVar2 >> 1) < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar3 >> 6;
        }
        if (uVar2 < iVar5 + param_3) {
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 8) - iVar3 >> 6;
          }
          uVar2 = iVar3 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        FUN_00248ff0();
        FUN_00248910();
        FUN_00248ff0();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar3 >> 6;
        }
        if (iVar3 != 0) {
          FUN_002439d0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar2 * 0x40 + iVar5;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x40 + iVar5;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 6) < param_3) {
          FUN_00248ff0();
          local_8 = 2;
          FUN_00248910();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x40;
        }
        else {
          uVar1 = FUN_00248ff0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_002495c0(param_2);
        }
        FUN_00249560();
      }
    }
  }
  FUN_00243040();
  *unaff_FS_OFFSET = local_10;
  return;
}
