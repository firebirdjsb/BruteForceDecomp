/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6496304A2073056ABC0DAF60F2CF8B13665ED7E9C78EC5494742219876841D3C
 * Entry: 0x002dd650, Ghidra index: 10323, label: FUN_002dd650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* The original Xbox FLD/FSTP m64fp stack values are numeric doubles;
 * the adjacent MOV instructions transfer their raw low/high guest DWORDs.
 * A numeric double-to-integer cast cannot replace the original MOV. */
static double bf_2dd650_f64_from_guest_words(uint32_t low, uint32_t high)
{
  uint64_t bits = (uint64_t)low | ((uint64_t)high << 32);
  double value;
  memcpy(&value, &bits, sizeof value);
  return value;
}

static void bf_2dd650_guest_words_from_f64(double value,
                                           uint32_t *low, uint32_t *high)
{
  uint64_t bits;
  memcpy(&bits, &value, sizeof bits);
  *low = (uint32_t)bits;
  *high = (uint32_t)(bits >> 32);
}
undefined4
FUN_002dd650(undefined4 *param_1,float param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
            float *param_6,undefined4 *param_7,undefined4 param_8,undefined4 param_9,double param_10
            )

{
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float10 fVar7;
  float local_1c;
  float local_18;
  int local_14;
  double local_8;
  uint32_t local_8_low_word;
  uint32_t local_8_high_word;
  double incoming_time = bf_2dd650_f64_from_guest_words(param_8, param_9);
  
  if (param_6 == (float *)0x0) {
    fVar7 = (float10)(**(code **)*param_1)(param_4[5],param_5[5]);
    local_18 = (float)fVar7;
  }
  else {
    local_18 = *param_6;
  }
  if (local_18 < param_2 == (local_18 == param_2)) {
    fVar4 = (local_18 - param_2) * (float)param_1[2];
    fVar5 = ((float)incoming_time - (float)param_10) + fVar4;
    while( true ) {
      if (0.0 < fVar5) {
        return 0;
      }
      local_1c = (float)param_10;
      fVar4 = fVar4 + fVar4;
      if (0.0 < ((float)incoming_time - local_1c) + fVar4) {
        fVar4 = (local_1c - (float)incoming_time) + 0.003;
      }
      local_14 = (int)(fVar4 * 200.0);
      if (local_14 < 1) {
        local_14 = 1;
      }
      param_3 = param_3 + local_14;
      dVar2 = (double)((float)local_14 * 0.005 + (float)incoming_time);
      local_8 = dVar2;
      bf_2dd650_guest_words_from_f64(local_8, &local_8_low_word,
                                     &local_8_high_word);
      uVar6 = local_8_high_word;
      if (param_4[param_3 + 5] == 0) {
        param_4[param_3 + 5] = param_4 + param_3 * 0x10 + 0x1a;
        FUN_002b3500(dVar2);
      }
      uVar3 = param_4[param_3 + 5];
      if (param_5[param_3 + 5] == 0) {
        param_5[param_3 + 5] = param_5 + param_3 * 0x10 + 0x1a;
        FUN_002b3500(local_8_low_word,uVar6);
      }
      fVar7 = (float10)(**(code **)*param_1)(uVar3,param_5[param_3 + 5]);
      fVar1 = (float)fVar7;
      if (fVar7 < (float10)param_2 != (fVar7 == (float10)param_2)) break;
      if (param_3 == 0x14) {
        return 0;
      }
      fVar4 = (fVar1 - param_2) * (float)param_1[2];
      fVar5 = ((float)local_8 - (float)param_10) + fVar4;
      param_9 = uVar6;
      param_8 = local_8_low_word;
      local_18 = fVar1;
    }
    FUN_002dd4a0(param_1,&local_8,param_2,local_18,fVar1,*param_4,*param_5,param_8,param_9,
                 local_8_low_word,uVar6);
    if (0.0 < local_8 - param_10) {
      return 0;
    }
    *param_7 = local_8_low_word;
    param_7[1] = local_8_high_word;
    return 1;
  }
  *param_7 = param_8;
  param_7[1] = param_9;
  return 1;
}
