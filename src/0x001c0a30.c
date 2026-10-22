/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0878909292DE8D4CCFDCC596C7EB25CF47E28355E31E9D8F31E612B7F17BC63F
 * Entry: 0x001c0a30, Ghidra index: 5770, label: FUN_001c0a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c0a30(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  uint local_ac;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00309af0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001caa30();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_ac = 0;
  }
  else {
    local_ac = (*(int *)(param_1 + 0xc) - iVar3) / 0x94;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x94;
    }
    if (0x1bacf91U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x94;
      }
      if (local_ac < iVar3 + param_3) {
        if (0x1bacf91 - (local_ac >> 1) < local_ac) {
          local_ac = 0;
        }
        else {
          local_ac = local_ac + (local_ac >> 1);
        }
        iVar3 = FUN_001ae350();
        if (local_ac < iVar3 + param_3) {
          iVar3 = FUN_001ae350();
          local_ac = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce360();
        FUN_001cc720();
        FUN_001ce360();
        local_8 = 0xffffffff;
        iVar2 = FUN_001ae350();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00069990();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = local_ac * 0x94 + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x94 + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x94) < param_3) {
          FUN_001ce360();
          local_8 = 2;
          FUN_001cc720();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x94;
        }
        else {
          uVar1 = FUN_001ce360();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0530(param_2);
        }
        FUN_001d04c0();
      }
    }
  }
  FUN_00069f10();
  *unaff_FS_OFFSET = local_10;
  return;
}
