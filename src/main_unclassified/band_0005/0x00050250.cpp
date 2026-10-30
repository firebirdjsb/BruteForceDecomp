/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCAF1463D7FAFE00F5A8E5467B84667D3FF6C5AFDAC5F2ABEEB02103D8D29260
 * Entry: 0x00050250, Ghidra index: 702, label: FUN_00050250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Original mapped address; ABI/relocations unverified. */
extern void FUN_00050650(undefined4 *param_1);
extern void FUN_00038940(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000508b0(undefined4 param_1,undefined4 param_2);
extern int FUN_0004f980(void);
extern void FUN_00050be0(int param_1,int param_2);
extern void FUN_00050950(void);
extern void FUN_000508e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern void FUN_000e35e0(byte param_1);

void FUN_00050250(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_30;
  int local_20;
  int local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = ((unsigned char *)(uintptr_t)0x00309000u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_00050650();
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 7;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 7;
    }
    if (0x1ffffffU - iVar5 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 7;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0x1ffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 7;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 7;
          }
          uVar1 = iVar2 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        FUN_000508b0();
        FUN_0004f980();
        FUN_000508b0();
        local_8 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar2 >> 7;
        }
        if (iVar2 != 0) {
          FUN_00050be0(iVar2,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar1 * 0x80 + iVar5;
        *(uint *)(param_1 + 8) = (param_3 + iVar3) * 0x80 + iVar5;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 7) < param_3) {
          FUN_000508b0();
          local_8 = 2;
          FUN_0004f980();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x80;
        }
        else {
          uVar4 = FUN_000508b0();
          *(undefined4 *)(param_1 + 8) = uVar4;
          FUN_00050950(param_2);
        }
        FUN_000508e0(param_2);
      }
    }
  }
  if (local_20 != 0) {
    for (; local_20 != local_1c; local_20 = local_20 + 0xc) {
      FUN_000e35e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  if (local_30 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
