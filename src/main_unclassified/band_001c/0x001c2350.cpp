/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 906C28626B46AB82DD67CBB86A5A0A38F9EF7C09DE1F511C972C0FE040B28848
 * Entry: 0x001c2350, Ghidra index: 5777, label: FUN_001c2350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c2350(int param_1,int param_2,uint param_3)

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
  /* Original entry+5: push 0x00308e00; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308e00U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001c9e70();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 0xc) - iVar3) / 0x124;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x124;
    }
    if (0xe07038U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x124;
      }
      if (uVar4 < iVar3 + param_3) {
        if (0xe07038 - (uVar4 >> 1) < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        iVar3 = FUN_00162760();
        if (uVar4 < iVar3 + param_3) {
          iVar3 = FUN_00162760();
          uVar4 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce510();
        FUN_001cc820();
        FUN_001ce510();
        local_8 = 0xffffffff;
        iVar2 = FUN_00162760();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00161660();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar4 * 0x124 + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x124 + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x124) < param_3) {
          FUN_001ce510();
          local_8 = 2;
          FUN_001cc820();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x124;
        }
        else {
          uVar1 = FUN_001ce510();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0900(param_2);
        }
        FUN_001d08d0();
      }
    }
  }
  FUN_00160180();
  *unaff_FS_OFFSET = local_10;
  return;
}
