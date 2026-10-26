/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E521E65D821EBCF8C49579823463B0BBD0C11590BA977C8179D99266CBAF8E8
 * Entry: 0x002dd4a0, Ghidra index: 10322, label: FUN_002dd4a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
/* The original stores an x87 result to one QWORD stack slot, then moves its
 * two DWORDs as bits. x87 precision and guest ABI remain unverified. */
static double bf_002dd4a0_double_from_words(uint32_t low, uint32_t high)
{
  uint32_t words[2] = { low, high };
  double value;
  _Static_assert(sizeof value == sizeof words, "64-bit incoming double");
  memcpy(&value,words,sizeof value);
  return value;
}

void FUN_002dd4a0(undefined4 *param_1,undefined4 *param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  int local_8c;
  double local_88;
  uint32_t value_words[2];
  undefined1 local_80 [12];
  undefined4 local_74 [12];
  undefined4 local_44;
  undefined1 local_40 [12];
  undefined4 local_34 [12];
  undefined4 local_4;
  
  puVar1 = local_34;
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 0;
  puVar1 = local_74;
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_44 = 0;
  local_8c = 0;
  while( true ) {
    local_88 = ((double)param_3 - (double)param_4) *
               ((bf_002dd4a0_double_from_words(param_10,param_11) -
                 bf_002dd4a0_double_from_words(param_8,param_9)) /
               ((double)param_5 - (double)param_4)) +
               bf_002dd4a0_double_from_words(param_8,param_9);
    if (((byte)local_8c & 3) == 3) {
      if (0x40 < local_8c) {
        *param_2 = param_8;
        param_2[1] = param_9;
        return;
      }
      local_88 = ((bf_002dd4a0_double_from_words(param_10,param_11) - local_88) +
                 (bf_002dd4a0_double_from_words(param_8,param_9) - local_88)) * 0.375 + local_88;
    }
    _Static_assert(sizeof local_88 == sizeof value_words, "64-bit stored double");
    memcpy(value_words,&local_88,sizeof value_words);
    FUN_002b3500(value_words[0],value_words[1]);
    FUN_002b3500(value_words[0],value_words[1]);
    fVar3 = (float10)(**(code **)*param_1)(local_40,local_80);
    if (ABS(fVar3 - (float10)param_3) < (float10)0.003) break;
    local_8c = local_8c + 1;
    if (fVar3 < (float10)param_3) {
      param_5 = (float)fVar3;
      param_10 = value_words[0];
      param_11 = value_words[1];
    }
    else {
      param_4 = (float)fVar3;
      param_8 = value_words[0];
      param_9 = value_words[1];
    }
  }
  param_2[1] = value_words[1];
  *param_2 = value_words[0];
  return;
}
