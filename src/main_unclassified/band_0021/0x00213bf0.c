/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 265FF513B827648C315EDB48A83F2E796CD089249535CD7DFAEFAFC7D605CFF2
 * Entry: 0x00213bf0, Ghidra index: 7449, label: FUN_00213bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00213e06) */

void FUN_00213bf0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_10;
  int local_8;
  undefined1 local_4 [4];
  
  local_10 = *(int *)(param_1 + 8);
  if (local_10 != *(int *)(param_1 + 0xc)) {
    piVar5 = (int *)(local_10 + 0xc);
    do {
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)*puVar1;
      }
      if (puVar4 != puVar1) {
        do {
          iVar2 = puVar4[2];
          if (iVar2 != 0) {
            FUN_00213810();
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(iVar2);
          }
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)*piVar5);
      }
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar1;
      }
      FUN_001298b0(&local_8,uVar3,puVar1);
      local_10 = local_10 + 0x14;
      piVar5 = piVar5 + 5;
    } while (local_10 != *(int *)(param_1 + 0xc));
  }
  local_8 = param_1 + 4;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00218e40(*(undefined4 *)(param_1 + 0xc),local_8,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_10 = *(int *)(param_1 + 0x18);
  if (local_10 != *(int *)(param_1 + 0x1c)) {
    piVar5 = (int *)(local_10 + 0xc);
    do {
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)*puVar1;
      }
      if (puVar4 != puVar1) {
        do {
          iVar2 = puVar4[2];
          if (iVar2 != 0) {
            puVar1 = *(undefined4 **)(iVar2 + 0x14);
            if (puVar1 == (undefined4 *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *puVar1;
            }
            FUN_001298b0(local_4,uVar3,puVar1);
            puVar1 = *(undefined4 **)(iVar2 + 0x14);
            if (puVar1 == (undefined4 *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *puVar1;
            }
            FUN_001298b0(local_4,uVar3,puVar1);
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 0x14));
          }
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)*piVar5);
      }
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar1;
      }
      FUN_001298b0(local_4,uVar3,puVar1);
      local_10 = local_10 + 0x14;
      piVar5 = piVar5 + 5;
    } while (local_10 != *(int *)(param_1 + 0x1c));
  }
  iVar2 = local_8;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00218e40(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x14,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(local_8 + 4) != 0) {
    FUN_00218e40(*(undefined4 *)(local_8 + 8),local_8,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 4));
  }
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  return;
}
