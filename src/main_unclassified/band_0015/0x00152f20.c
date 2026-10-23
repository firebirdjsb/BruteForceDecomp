/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F7F02EE175AC5DB99985F258A211A4570654CD53C20718F5F2ABD2DECE325BC
 * Entry: 0x00152f20, Ghidra index: 4424, label: FUN_00152f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699c0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float10 FUN_00152f20(int param_1,float *param_2,float *param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_60;
  float local_5c;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = param_3[2];
  local_8 = param_3[1];
  local_c = *param_3;
  FUN_00039410();
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  *param_5 = *param_2;
  param_5[1] = fVar2;
  param_5[2] = fVar1;
  iVar3 = FUN_00152d20(param_1,&local_c,param_2,param_2);
  if (0 < iVar3) {
    return (float10)0.0;
  }
  local_1c = param_2[2];
  local_24 = *param_2;
  local_20 = param_2[1];
  fStack_28 = param_3[2];
  local_2c = param_3[1];
  local_30 = *param_3;
  fVar1 = 1.0 / (float)*(int *)(param_1 + 0xbc);
  local_5c = param_4;
  iVar3 = 0;
  iVar6 = 0;
  local_60 = 0.0;
  iVar5 = DAT_004699c0;
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  if (0 < *(int *)(param_1 + 0xb8)) {
    while (iVar5 = DAT_004699c0, local_60 < param_4) {
      local_30 = local_30 * fVar1;
      local_2c = local_2c * fVar1;
      fStack_28 = fStack_28 * fVar1;
      local_5c = local_5c * fVar1;
      iVar5 = 0;
      local_3c = local_30 + local_24;
      local_38 = local_2c + local_20;
      local_34 = fStack_28 + local_1c;
      if (0 < *(int *)(param_1 + 0xbc)) {
        do {
          iVar4 = FUN_00152d20(param_1,&local_c,&local_18,&local_3c);
          if (0 < iVar4) {
            local_20 = local_38;
            local_24 = local_3c;
            local_1c = local_34;
            iVar3 = DAT_004699c0;
            break;
          }
          local_60 = local_5c + local_60;
          iVar5 = iVar5 + 1;
          *param_5 = local_3c;
          param_5[1] = local_38;
          param_5[2] = local_34;
          local_24 = local_30 + local_24;
          local_20 = local_2c + local_20;
          local_1c = fStack_28 + local_1c;
          local_3c = local_3c + local_30;
          local_38 = local_2c + local_38;
          local_34 = fStack_28 + local_34;
        } while (iVar5 < *(int *)(param_1 + 0xbc));
      }
      iVar5 = iVar3;
      if (DAT_004699c0 == 0) break;
      iVar6 = iVar6 + 1;
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return (float10)local_60;
      }
    }
  }
  DAT_004699c0 = iVar5;
  return (float10)local_60;
}
