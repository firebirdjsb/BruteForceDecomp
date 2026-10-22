/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32972094A1CF43FF2D4850B3E3505E67C70D13CF88B1DAE27B0C28C2D051B8A4
 * Entry: 0x00277f50, Ghidra index: 8916, label: FUN_00277f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00391de0;
undefined4 * FUN_00277f50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *local_18;
  int local_10 [4];
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_00391de0;
  uVar2 = FUN_00279bb0(puVar1);
  param_1[2] = uVar2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = param_1._0_1_;
  iVar3 = FUN_0025ae60(param_1 + 4);
  param_1[5] = iVar3;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  *(undefined4 *)param_1[5] = param_1[5];
  *(undefined4 *)(param_1[5] + 8) = param_1[5];
  param_1[6] = 0;
  param_1[7] = 2;
  local_18 = (undefined4 *)FUN_002ea01d(0x14);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    *local_18 = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    local_18[4] = 0xffffffff;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[4] = 0xffffffff;
    *puVar4 = 0x3f800000;
    puVar4[1] = 0x3f800000;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  local_18[4] = 0;
  puVar4[4] = 1;
  iVar3 = param_1[2];
  local_10[0] = FUN_00129f40(puVar1,iVar3,*(undefined4 *)(iVar3 + 4),local_18);
  FUN_0027a650();
  *(int *)(iVar3 + 4) = local_10[0];
  **(int **)(local_10[0] + 4) = local_10[0];
  iVar3 = param_1[2];
  local_10[0] = FUN_00129f40(puVar1,iVar3,*(undefined4 *)(iVar3 + 4),puVar4);
  FUN_0027a650();
  *(int *)(iVar3 + 4) = local_10[0];
  **(int **)(local_10[0] + 4) = local_10[0];
  local_10[0] = local_18[4];
  local_10[1] = 0;
  piVar5 = (int *)FUN_00279c40(local_10);
  *(undefined4 **)(*piVar5 + 0x10) = local_18;
  local_10[0] = puVar4[4];
  local_10[1] = 0;
  piVar5 = (int *)FUN_00279c40(local_10);
  *(undefined4 **)(*piVar5 + 0x10) = puVar4;
  return param_1;
}
