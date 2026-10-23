/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EC678F81BE272E6892E59BC2360197BA3186D4B338B87C4680C9FE120588EB5
 * Entry: 0x001e1700, Ghidra index: 6735, label: FUN_001e1700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e1700(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_3 + 4) != 0) {
    FUN_000762d0(param_3,param_3);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_3 + 4));
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  if (*(int *)(param_4 + 4) != 0) {
    FUN_000762d0(param_4,param_3);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_4 + 4));
  }
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)(param_4 + 0xc) = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_001e1430(local_30);
  FUN_001e2600(*(int *)(unaff_EBX + 4),*(int *)(unaff_EBX + 8),
               (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0x1c);
  iVar1 = local_2c;
  FUN_001e2600(local_2c,local_28,(local_28 - local_2c) / 0x1c);
  FUN_001e24e0(local_38,*(undefined4 *)(unaff_EBX + 4),*(undefined4 *)(unaff_EBX + 8),iVar1,local_28
               ,local_20,local_1c);
  FUN_001e24e0(local_38,iVar1,local_28,*(undefined4 *)(unaff_EBX + 4),*(undefined4 *)(unaff_EBX + 8)
               ,local_10,local_c);
  FUN_001e1380(param_3);
  FUN_001e1380(param_4);
  iVar2 = local_2c;
  if (local_1c != 0) {
    FUN_000762d0(local_20,param_3);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_1c);
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (local_c != 0) {
    FUN_000762d0(local_10,param_3);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_c);
  }
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_000762d0(local_30,param_3);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  return;
}
