/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43E191A83C37526D1EE83DB50D183530573DCA35F25B6D497D62ABAEBA8127B1
 * Entry: 0x001c6060, Ghidra index: 5801, label: FUN_001c6060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c6060(int param_1,int param_2,uint param_3)

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
  /* Original entry+5: push 0x00309ad0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309ad0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001ca740();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 0xc) - iVar3) / 0x70;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x70;
    }
    if (0x2492492U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x70;
      }
      if (uVar4 < iVar3 + param_3) {
        if (0x2492492 - (uVar4 >> 1) < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        iVar3 = FUN_0004f500();
        if (uVar4 < iVar3 + param_3) {
          iVar3 = FUN_0004f500();
          uVar4 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce7e0();
        FUN_001cceb0();
        FUN_001ce7e0();
        local_8 = 0xffffffff;
        iVar2 = FUN_0004f500();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00051330();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar4 * 0x70 + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x70 + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x70) < param_3) {
          FUN_001ce7e0();
          local_8 = 2;
          FUN_001cceb0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x70;
        }
        else {
          uVar1 = FUN_001ce7e0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0fe0(param_2);
        }
        FUN_001d0fb0();
      }
    }
  }
  FUN_00051630();
  *unaff_FS_OFFSET = local_10;
  return;
}
