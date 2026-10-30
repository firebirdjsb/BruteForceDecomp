/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41B54E44320C39F53B5A1F11C026842690FC830FA6FB1C90A31D12CD958837E4
 * Entry: 0x000dd8e0, Ghidra index: 2708, label: FUN_000dd8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efb8;
extern uint32_t PTR_FUN_0039efc8;
extern uint32_t PTR_LAB_0039efc0;
int FUN_000dd8e0(undefined4 param_1,float *param_2,float *param_3,float param_4,int param_5,
                int param_6,undefined4 *param_7,float param_8,float param_9,float param_10,
                undefined4 param_11,float param_12,float param_13,float param_14,undefined4 param_15
                ,float param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,
                undefined4 *param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23,
                undefined4 param_24,undefined4 *param_25)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_stack_00000074;
  undefined **in_stack_00000084;
  undefined4 in_stack_000000d4;
  undefined4 in_stack_000000e4;
  undefined **in_stack_00000104;
  int *local_10;
  int local_c;
  undefined4 *local_8;
  
  FUN_002ebea0();
  local_c = 0;
  if (param_4 == 3.4028235e+38) {
    param_4 = 500.0;
  }
  param_10 = param_2[2];
  param_9 = param_2[1];
  param_8 = *param_2;
  param_12 = *param_3;
  param_14 = param_3[2];
  param_13 = param_3[1];
  param_11 = 0;
  param_15 = 0;
  param_17 = 0;
  if (param_5 != 0) {
    param_17 = *(undefined4 *)(param_5 + 0x114);
  }
  param_16 = param_4;
  FUN_002b7970(&stack0x00000104,&param_8);
  in_stack_00000104 = &PTR_FUN_0039efc8;
  FUN_002b8d60();
  puVar4 = (undefined4 *)&stack0x00000174;
  iVar7 = 0x100;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_002b7970(&stack0x00000084,&param_8);
  in_stack_000000e4 = 0;
  cVar3 = param_8._0_1_;
  in_stack_00000084 = &PTR_LAB_0039efc0;
  in_stack_000000d4 = 0x60ad78ec;
  puVar4 = &stack0x00000104;
  if (param_8._0_1_ == '\0') {
    puVar4 = &stack0x00000084;
  }
  FUN_000df0a0(param_1,puVar4,param_5,param_9);
  local_10 = (int *)0x0;
  if (cVar3 == '\0') {
    if (puVar4[0x14] == 0x60ad78ec) goto LAB_000ddcc0;
    piVar5 = puVar4 + 0x15;
  }
  else {
    local_10 = (int *)FUN_002ea01d(0xc);
    if (local_10 == (int *)0x0) {
      local_10 = (int *)0x0;
      piVar5 = (int *)FUN_000d4500();
    }
    else {
      *local_10 = (int)(puVar4 + 0x14);
      local_10[1] = 0;
      local_10[2] = -1;
      piVar5 = (int *)FUN_000d4500();
    }
  }
  while (piVar5 != (int *)0x0) {
    local_c = local_c + 1;
    piVar1 = *(int **)(piVar5[4] + 0x9c);
    if (param_8._0_1_ != '\0') {
      param_7 = (undefined4 *)FUN_002ea01d(0x2c);
      if (param_7 == (undefined4 *)0x0) {
        param_7 = (undefined4 *)0x0;
      }
      else {
        puVar4 = param_7;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      local_8 = param_7;
      FUN_000e0d10(*(undefined4 *)(param_6 + 4),1,&local_8);
    }
    param_7[9] = piVar5[7];
    param_7[3] = (float)piVar5[7] * *param_3 + *param_2;
    param_7[4] = (float)piVar5[7] * param_3[1] + param_2[1];
    param_7[5] = (float)piVar5[7] * param_3[2] + param_2[2];
    param_3 = (float *)piVar5[2];
    param_6 = *piVar5;
    param_7[7] = piVar5[1];
    param_7[6] = param_6;
    param_7[8] = param_3;
    uVar8 = param_7[10] ^ (*(uint *)piVar5[6] >> 0x1e ^ param_7[10]) & 1;
    param_7[10] = uVar8;
    param_7[10] = ((uint)*(byte *)(piVar5[6] + 3) << 2 ^ uVar8) & 0x7c ^ uVar8;
    iVar7 = piVar5[4];
    in_stack_00000074 = 0;
    FUN_002b3590(iVar7,&param_18,*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x108),
                 *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x10c));
    puVar4 = param_20;
    param_23 = param_18;
    param_24 = param_19;
    param_22 = param_21;
    param_25 = param_20;
    puVar6 = (undefined4 *)FUN_0001fb70(&param_22,&stack0x00000078,param_7 + 6);
    param_2 = (float *)puVar6[2];
    uVar2 = *puVar6;
    param_7[7] = puVar6[1];
    param_7[6] = uVar2;
    param_7[8] = param_2;
    param_7[2] = iVar7;
    switch(*piVar1) {
    case 0:
    case 1:
      *param_7 = 2;
      if ((*piVar1 == 0) || (*piVar1 == 1)) {
        param_7[1] = piVar1[1];
      }
      else {
        param_7[1] = 0;
      }
      break;
    case 2:
      *param_7 = 1;
      break;
    default:
      *param_7 = 0;
      break;
    case 4:
    case 6:
    case 8:
      *param_7 = 3;
    }
    if (param_8._0_1_ == '\0') goto LAB_000ddcaf;
    if ((int *)local_10[1] != (int *)0x0) {
      local_10[1] = *(int *)local_10[1];
    }
    if (local_10[1] == 0) {
      do {
        iVar7 = local_10[2] + 1;
        local_10[2] = iVar7;
        if (*(int *)*local_10 <= iVar7) goto LAB_000ddc80;
        iVar7 = *(int *)(((int *)*local_10)[3] + iVar7 * 4);
        local_10[1] = iVar7;
      } while (iVar7 == 0);
    }
    param_7 = puVar4;
    piVar5 = *(int **)(local_10[1] + 0xc);
  }
LAB_000ddc80:
  if (param_8._0_1_ != '\0') {
    FUN_000e2850(*(int *)(param_6 + 4),*(int *)(param_6 + 8),
                 *(int *)(param_6 + 8) - *(int *)(param_6 + 4) >> 2,&LAB_000dd8c0);
  }
LAB_000ddcaf:
  if (local_10 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_10);
  }
LAB_000ddcc0:
  in_stack_00000084 = &PTR_FUN_0039efb8;
  in_stack_00000104 = &PTR_FUN_0039efc8;
  FUN_002b8de0();
  return local_c;
}
