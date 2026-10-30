/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83DCD3387B5FA1AF07CDA47F7D425A3804D7034EA1AA997FE87A3B720C66C730
 * Entry: 0x001c1840, Ghidra index: 5774, label: FUN_001c1840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c1840(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00309360; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309360U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001c9a40();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x3d4;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x3d4;
    }
    if (0x42df9bU - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x3d4;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x42df9b - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x3d4;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_00162730();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce480();
        FUN_001cc7b0();
        FUN_001ce480();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x3d4;
        }
        if (iVar3 != 0) {
          FUN_00161620();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x3d4 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x3d4 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x3d4) < param_3) {
          FUN_001ce480();
          local_8 = 2;
          FUN_001cc7b0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x3d4;
        }
        else {
          uVar1 = FUN_001ce480();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0790(param_2);
        }
        FUN_001d0760();
      }
    }
  }
  FUN_00160050();
  *unaff_FS_OFFSET = local_10;
  return;
}
