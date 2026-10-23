/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED8AF2C6995F2DC8241D5B1808A7295E3EA523F8836BE9ED9BB21109ABE0ACD3
 * Entry: 0x001c3cf0, Ghidra index: 5785, label: FUN_001c3cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c3cf0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  uint local_140;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00309350;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001ca050();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_140 = 0;
  }
  else {
    local_140 = (*(int *)(param_1 + 0xc) - iVar3) / 0x128;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x128;
    }
    if (0xdd67c8U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x128;
      }
      if (local_140 < iVar3 + param_3) {
        if (0xdd67c8 - (local_140 >> 1) < local_140) {
          local_140 = 0;
        }
        else {
          local_140 = local_140 + (local_140 >> 1);
        }
        iVar3 = FUN_00162910();
        if (local_140 < iVar3 + param_3) {
          iVar3 = FUN_00162910();
          local_140 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce630();
        FUN_001cc870();
        FUN_001ce630();
        local_8 = 0xffffffff;
        iVar2 = FUN_00162910();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00161680();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = local_140 * 0x128 + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x128 + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x128) < param_3) {
          FUN_001ce630();
          local_8 = 2;
          FUN_001cc870();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x128;
        }
        else {
          uVar1 = FUN_001ce630();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0930(param_2);
        }
        FUN_001d0cf0();
      }
    }
  }
  FUN_00160220();
  *unaff_FS_OFFSET = local_10;
  return;
}
