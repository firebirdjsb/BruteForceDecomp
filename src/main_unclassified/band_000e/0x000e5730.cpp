/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DD88096993DB4E47564DB757DC5350E249A2C3EEE7F3261435149BE21C74F8E
 * Entry: 0x000e5730, Ghidra index: 2858, label: FUN_000e5730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_0040cf6c;
extern uint32_t DAT_0040cf70;
extern uint32_t DAT_0040cf74;
extern uint32_t DAT_0040cf78;
extern uint32_t DAT_0040cf7c;
extern uint32_t DAT_0040cf80;
extern uint32_t DAT_004698ea;
extern uint32_t DAT_0046b2e8;
extern uint32_t switchD_000e5a5c_default[];
/* WARNING: Removing unreachable block (ram,0x000e5b25) */
/* WARNING: Removing unreachable block (ram,0x000e5b3f) */
/* WARNING: Removing unreachable block (ram,0x000e5b6d) */
/* WARNING: Removing unreachable block (ram,0x000e5b83) */

void FUN_000e5730(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  float local_b0 [4];
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  uint *local_8;
  
  if (*(char *)(param_1 + 0x110) != '\x01') {
    return;
  }
  FUN_000e52d0(param_1,param_2);
  FUN_002385a0();
  local_8 = (uint *)0x0;
  FUN_0006a610(&local_8);
  local_8 = (uint *)0x0;
  FUN_0006a610(&local_8);
  local_8 = (uint *)0x1;
  FUN_0006a610(&local_8);
  local_8 = (uint *)0x302;
  FUN_0006a610(&local_8);
  local_8 = (uint *)0x303;
  FUN_0006a610(&local_8);
  local_8 = *(uint **)(param_2 + 0x998);
  FUN_0006a610(&local_8);
  local_8 = *(uint **)(param_2 + 0x998);
  FUN_0006a610(&local_8);
  local_8 = *(uint **)(param_2 + 0x998);
  FUN_0006a610(&local_8);
  local_8 = *(uint **)(param_2 + 0x998);
  FUN_0006a610(&local_8);
  FUN_000e6c70(&DAT_0046b2e8,&local_8);
  puVar6 = local_8;
  local_20 = *local_8 & 0xfffcffff | 0x40000;
  *local_8 = local_20;
  local_10 = local_8[4];
  local_1c = local_8[1];
  local_18 = local_8[2];
  local_14 = local_8[3] & 0xffff12ff | 0x1200;
  local_c = 3;
  FUN_0006a610(&local_c);
  local_c = 3;
  FUN_0006a610(&local_c);
  FUN_00062280();
  local_c = 3;
  FUN_0006a610(&local_c);
  local_c = 3;
  FUN_0006a610(&local_c);
  FUN_00062280();
  local_c = 0;
  FUN_0006a610(&local_c);
  local_c = 4;
  FUN_0006a610(&local_c);
  local_c = 4;
  FUN_0006a610(&local_c);
  FUN_00062280();
  local_c = 0;
  FUN_0006a610(&local_c);
  local_c = 4;
  FUN_0006a610(&local_c);
  local_c = 4;
  FUN_0006a610(&local_c);
  FUN_00062280();
  FUN_000a4a60(5);
  switch(*(undefined4 *)(param_1 + 0x114)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  default:
    goto switchD_000e5a5c_default;
  }
  FUN_000a4d00();
  puVar6 = local_8;
switchD_000e5a5c_default:
  piVar3 = (int *)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x18))();
  uVar1 = *(uint *)(param_1 + 0xc);
  local_b0[0] = (float)(piVar3[2] - *piVar3);
  local_b0[1] = (float)(piVar3[3] - piVar3[1]);
  local_b0[2] = (float)*piVar3;
  local_b0[3] = (float)piVar3[1];
  local_a0 = (float)*(int *)(param_1 + 0xc);
  if ((int)uVar1 < 0) {
    local_a0 = local_a0 + 4.2949673e+09;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  local_9c = (float)*(int *)(param_1 + 0x10);
  if ((int)uVar2 < 0) {
    local_9c = local_9c + 4.2949673e+09;
  }
  local_98 = DAT_0040cf70;
  local_94 = DAT_0040cf6c;
  local_90 = (float)(uVar1 >> 1);
  local_8c = (float)(uVar2 >> 1);
  local_88 = DAT_0040cf78;
  local_84 = DAT_0040cf74;
  local_80 = (float)(uVar1 >> 2);
  local_7c = (float)(uVar2 >> 2);
  local_70 = (float)(piVar3[2] - *piVar3);
  local_78 = DAT_0040cf80;
  local_74 = DAT_0040cf7c;
  local_6c = (float)(piVar3[3] - piVar3[1]);
  local_68 = (float)*piVar3 + 0.53125;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  local_64 = (float)piVar3[1] + 0.53125;
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    pfVar5 = local_b0;
    pfVar7 = (float *)&DAT_0037e1b8;
    for (iVar4 = 0x18; puVar6 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x18);
  local_50 = *(undefined4 *)(param_1 + 0x11c);
  local_40 = *(undefined4 *)(param_1 + 0x118);
  local_30 = (*(float *)(param_1 + 0x120) + 1.0) * 0.5;
  local_4c = local_50;
  local_48 = local_50;
  local_44 = local_50;
  local_3c = local_40;
  local_38 = local_40;
  local_34 = local_40;
  local_2c = local_30;
  local_28 = local_30;
  local_24 = local_30;
  FUN_000a4d80();
  if (DAT_004698ea == '\0') {
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,param_1 + 0xd4,param_1 + 0x14,0x18);
  }
  FUN_00062280();
  FUN_00062280();
  FUN_00062280();
  FUN_00062280();
  FUN_002386d0();
  *puVar6 = *puVar6 & 0xfffdffff | 0x50000;
  D3D8LTCG__D3DResource_Release(puVar6);
  FUN_00238630();
  return;
}
