/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F1162EC066467A827C64CDE7E74D8D766E2797DF65222ED118C807CED8D4D57
 * Entry: 0x000df7a0, Ghidra index: 2731, label: FUN_000df7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000dfbc0(undefined4 param_1,int param_2,int *param_3,undefined4 param_4);
extern int FUN_00169a10(void);
extern void FUN_002b3590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern void FUN_000d2da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

extern uint32_t PTR_LAB_0039efc0;
int FUN_000df7a0(undefined4 param_1,float *param_2,float *param_3,int *param_4,int *param_5,
                float *param_6,float *param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_f4 [4];
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [28];
  undefined4 local_94;
  undefined **local_90 [20];
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  float local_20;
  
  if (param_10 == 0) {
    iVar6 = FUN_000ddd10(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9,0);
    return iVar6;
  }
  if (*(int *)(param_10 + 0x30) != 0) {
    local_d0 = param_6[2];
    local_d4 = param_6[1];
    local_d8 = *param_6;
    local_cc = 0;
    local_c8 = *param_7;
    local_c0 = param_7[2];
    local_c4 = param_7[1];
    iVar6 = 1;
    local_bc = 0;
    local_b8 = param_9;
    local_b4 = 1;
    FUN_002b7970(local_90,&local_d8);
    local_90[0] = &PTR_LAB_0039efc0;
    local_30 = 0;
    local_40 = 1e+20;
    FUN_000dfbc0(param_1,local_90,param_8,0);
    if (local_40 != 1e+20) {
      switch(**(undefined4 **)(local_2c + 0x9c)) {
      case 0:
      case 1:
        iVar6 = 2;
        break;
      case 2:
        break;
      default:
        iVar6 = 0;
        break;
      case 4:
      case 6:
      case 8:
        iVar6 = 3;
      }
      *param_2 = local_20;
      uVar7 = *(undefined8 *)(param_7 + 1);
      local_ec = local_20 * (float)((ulonglong)uVar7 >> 0x20);
      fVar1 = param_6[2];
      fVar2 = param_6[1];
      *param_3 = local_20 * *param_7 + *param_6;
      param_3[1] = local_20 * (float)uVar7 + fVar2;
      param_3[2] = local_ec + fVar1;
      *param_4 = local_3c;
      param_4[1] = local_38;
      param_4[2] = local_34;
      if (param_5 != (int *)0x0) {
        *param_5 = iVar6;
        if (*param_5 == 2) {
          uVar7 = FUN_00169a10();
          *(int *)((int)((ulonglong)uVar7 >> 0x20) + 4) = (int)uVar7;
        }
        param_5[9] = (int)local_20;
        local_ec = local_20 * (float)((ulonglong)*(undefined8 *)(param_7 + 1) >> 0x20) + param_6[2];
        local_f0 = local_20 * (float)*(undefined8 *)(param_7 + 1) + param_6[1];
        param_5[3] = (int)(local_20 * *param_7 + *param_6);
        param_5[4] = (int)local_f0;
        param_5[5] = (int)local_ec;
        param_5[6] = local_3c;
        param_5[8] = local_34;
        param_5[7] = local_38;
        local_94 = 0;
        FUN_002b3590(local_2c,&local_e8,*(undefined4 *)(*(int *)(local_2c + 0x14) + 0x108),
                     *(undefined4 *)(*(int *)(local_2c + 0x14) + 0x10c));
        FUN_000d2da0(local_dc,local_e8,local_e4,local_e0);
        piVar5 = (int *)FUN_0001fb70(local_b0,local_f4,param_5 + 6);
        iVar3 = piVar5[2];
        iVar4 = piVar5[1];
        param_5[6] = *piVar5;
        param_5[7] = iVar4;
        param_5[8] = iVar3;
        param_5[2] = local_2c;
      }
      return iVar6;
    }
  }
  return 0;
}
