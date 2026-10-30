/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 373DF87840FFBE60F550B2ADE4878B3727B3A7662D056065B252052AEE4C1D8C
 * Entry: 0x000dc840, Ghidra index: 2704, label: FUN_000dc840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040d5bc;
extern uint32_t _DAT_0040d5c0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000dc840(undefined4 param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,
            float *param_5,float *param_6,undefined4 *param_7,undefined4 *param_8,float *param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)

{
  char cVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  float fVar4;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_44 = 0.0;
  local_40 = 0.0;
  local_2c = 0;
  local_28 = 0;
  local_5c = 0;
  local_20 = 0;
  local_58 = 0;
  local_1c = 0;
  local_48 = 0.0;
  local_64 = 0;
  local_30 = 0;
  local_60 = 0;
  local_24 = 0;
  cVar1 = FUN_000dc140(param_1,&local_30,&local_48,&local_64,param_5,&local_24,&local_60,param_10,
                       param_11,param_12,param_13,param_14);
  local_58 = 0x3f800000;
  local_54 = 0;
  fVar4 = *param_5;
  if (*param_5 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  *param_5 = fVar4;
  local_38 = 0.0;
  local_34 = 0.0;
  local_14 = 0;
  local_50 = 0;
  local_4c = 0;
  local_3c = 0.0;
  local_18 = 0;
  local_10 = 0;
  local_5c = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar2 = FUN_000dc510(param_1,&local_18,&local_3c,&local_c,&local_5c,param_10,param_13,param_14);
  if ((cVar1 == '\0') && ((char)uVar2 == '\0')) {
    return uVar2;
  }
  *param_6 = local_48 * local_3c + local_38 * local_44 + local_34 * local_40;
  if (*param_5 <= _DAT_0040d5c0) {
    *param_9 = *param_5 / _DAT_0040d5c0;
    *param_3 = local_3c;
    uVar2 = _DAT_0040d5bc;
    param_3[1] = local_38;
    param_3[2] = local_34;
    *param_4 = uVar2;
    *param_2 = local_18;
    param_2[1] = local_14;
    param_2[2] = local_10;
    *param_8 = local_5c;
    local_20 = local_8;
    local_1c = local_4;
    local_24 = local_c;
  }
  else {
    *param_9 = 1.0 - (*param_5 - _DAT_0040d5c0) / (1.0 - _DAT_0040d5c0);
    *param_3 = local_48;
    param_3[1] = local_44;
    param_3[2] = local_40;
    *param_4 = local_64;
    *param_2 = local_30;
    param_2[1] = local_2c;
    param_2[2] = local_28;
    *param_8 = local_60;
  }
  *param_7 = local_24;
  param_7[1] = local_20;
  param_7[2] = local_1c;
  fVar4 = param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3;
  uVar3 = (undefined3)
          (CONCAT22((short)((uint)local_20 >> 0x10),
                    (ushort)(fVar4 < 0.010000001) << 8 | (ushort)isnan(fVar4) << 10 |
                    (ushort)(fVar4 == 0.010000001) << 0xe) >> 8);
  if (fVar4 < 0.010000001) {
    fVar4 = 1.0 - fVar4 * 100.0;
    param_3[1] = fVar4 + fVar4 + param_3[1];
    return CONCAT31(uVar3,1);
  }
  return CONCAT31(uVar3,1);
}
