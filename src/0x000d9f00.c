/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D376A520E03FC9CA6FE40D2A29984AE421AA2B9FD66AE1C063EA26843B1267DC
 * Entry: 0x000d9f00, Ghidra index: 2685, label: FUN_000d9f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d5ee;
extern uint32_t DAT_0040d5f0;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b10;
extern uint32_t DAT_00469b14;
extern uint32_t _DAT_0040d5f4;
extern uint32_t _DAT_0040d5f8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9f00(int param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  byte bVar5;
  float10 fVar6;
  byte local_9f0 [128];
  int local_970;
  int local_964;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44 [4];
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if ((DAT_00469b10 != 0) || (DAT_00469b14 != 0)) {
    DAT_00469b10 = 0;
    DAT_00469b14 = 0;
  }
  pfVar1 = (float *)(*(int *)(param_1 + 0xa70) + 0x94);
  pfVar4 = local_30;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfVar1 = (float *)(param_1 + 0xac8);
  pfVar4 = local_44;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  local_18 = -1.0;
  if (*(int *)(DAT_0046995c + 0x1c) == 0) {
    local_10 = *(float *)(param_1 + 0xc6c);
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0xbec) + 0x34))();
    local_10 = (float)(iVar2 + -2);
    local_8 = 5.60519e-45;
    local_c = 2.8026e-45;
    if ((int)local_10 < 5) {
      pfVar1 = &local_c;
      if (1 < (int)local_10) {
        pfVar1 = &local_10;
      }
      local_10 = *pfVar1;
    }
    else {
      local_10 = 5.60519e-45;
    }
  }
  fVar3 = local_34;
  if (((1 < (int)local_10) && ((int)local_10 < 5)) && (param_2[3] != 0)) {
    local_8 = *(float *)(param_2[3] + 0x34 + (int)local_10 * 4);
    fVar6 = (float10)(**(code **)(param_2[0x12] + 0x28))();
    local_18 = (float)(fVar6 * (float10)local_8);
    fVar3 = local_20;
    if (local_20 < _DAT_0040d5f4) {
      local_8 = local_20;
      local_14 = local_20;
      local_c = local_20;
      if (local_18 <= local_20) {
        local_c = local_18;
      }
      fVar3 = local_c;
      local_1c = local_18;
      if (1.1920929e-07 < local_20) {
        local_30[3] = (local_c / local_20) * local_30[3];
      }
    }
    local_20 = fVar3;
    fVar3 = local_34;
    if (local_34 < _DAT_0040d5f4) {
      local_c = local_34;
      local_1c = local_34;
      local_8 = local_34;
      if (local_18 <= local_34) {
        local_8 = local_18;
      }
      fVar3 = local_8;
      local_14 = local_18;
      if (1.1920929e-07 < local_34) {
        local_44[3] = (local_8 / local_34) * local_44[3];
      }
    }
  }
  local_34 = fVar3;
  (**(code **)(*param_2 + 0x118))(0,0xbf800000,local_18);
  FUN_000e6ef0(param_2);
  local_5c = *(undefined4 *)(param_1 + 0xc74);
  iVar2 = *(int *)(param_1 + 0xbf0);
  bVar5 = *(int *)(iVar2 + 0x38) != 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(iVar2 + 0x48) != 0) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(iVar2 + 0x50) != 0) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(iVar2 + 0x58) != 0) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(iVar2 + 0x60) != 0) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(iVar2 + 0x68) != 0) {
    bVar5 = bVar5 + 1;
  }
  local_58 = 2 - (uint)(1 < bVar5);
  if (*(int *)(param_1 + 0xc6c) == 1) {
    if (*(float *)(param_1 + 0xc58) <= 0.6) {
      local_9f0[0] = local_9f0[0] | 2;
      *(undefined1 *)(*(int *)(param_1 + 0xb74) + 0x38) = 1;
    }
    else {
      local_9f0[0] = local_9f0[0] & 0xfd;
      *(undefined1 *)(*(int *)(param_1 + 0xb74) + 0x38) = 0;
    }
  }
  else {
    local_9f0[0] = local_9f0[0] & 0xfd;
    *(undefined1 *)(*(int *)(param_1 + 0xb74) + 0x38) = 0;
  }
  fVar3 = *(float *)(local_964 + 0xd8);
  *(byte *)(*(int *)(param_1 + 0xb74) + 0x38) = local_9f0[0] >> 1 & 1;
  local_14 = fVar3;
  FUN_000dd2a0(local_964);
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (fVar3 == 1.4013e-45) {
    local_54 = DAT_0040d5f0;
    local_50 = DAT_0040d5f0;
    local_4c = DAT_0040d5f0;
    local_48 = 0x3f800000;
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  FUN_002385a0();
  *(undefined1 *)(*(int *)(param_1 + 0xb78) + 0xb44) = 0;
  FUN_000d4180();
  if ((*(int *)(param_1 + 0xbd4) != 0) &&
     ((((int)local_10 < 2 || (4 < (int)local_10)) || (_DAT_0040d5f8 <= local_18)))) {
    FUN_00177d50(*(int *)(param_1 + 0xbd4),local_9f0);
  }
  if (*(int *)(param_1 + 0xa40) != 0) {
    FUN_002385a0();
    if (fVar3 == 1.4013e-45) {
      FUN_0009e960(*(undefined4 *)(local_970 + 0xb78),DAT_0040d5ee);
    }
    if ((*(int *)(param_1 + 0xa70) != 0) && (fVar3 != 1.4013e-45)) {
      FUN_000dbc50(param_1);
    }
    FUN_000dcc10(0,fVar3 != 0.0);
    FUN_001f5600(*(undefined4 *)(param_1 + 0xa40),local_9f0);
    FUN_00238630();
    fVar3 = local_14;
  }
  iVar2 = *(int *)(param_1 + 0xb78);
  if (*(char *)(iVar2 + 0xb45) != '\0') {
    FUN_00238630();
    *(undefined1 *)(iVar2 + 0xb45) = 0;
  }
  if (*(int *)(param_1 + 0xa40) != 0) {
    FUN_000da680(param_1);
  }
  FUN_00238630();
  FUN_002385a0();
  if (fVar3 != 1.4013e-45) {
    FUN_000dbc50(param_1);
  }
  FUN_000e8ae0(param_1 + 0x228);
  FUN_000e23f0(*(undefined4 *)(param_1 + 0xb7c),local_9f0,1);
  FUN_000e76c0(*(undefined4 *)(param_1 + 0xb7c));
  FUN_000e81e0(*(undefined4 *)(param_1 + 0xb7c));
  FUN_00238630();
  if (*(int *)(param_1 + 0xbe4) != 0) {
    FUN_000bd200(*(int *)(param_1 + 0xbe4) + 0x130c,param_1,param_2);
  }
  (**(code **)(*param_2 + 0x120))();
  FUN_0006be90(0xbf800000,0xbf800000);
  FUN_000b3fb0();
  return;
}
