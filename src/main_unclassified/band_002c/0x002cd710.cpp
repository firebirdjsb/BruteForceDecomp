/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0342C142434A39984710E57DCF957B826332C97F26B2BA8F47D547EF736F1A6
 * Entry: 0x002cd710, Ghidra index: 10168, label: FUN_002cd710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002cd710(undefined4 *param_1)

{
  float *pfVar1;
  uint *puVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)*(undefined8 *)(param_1 + 0x17);
  fVar4 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x17) >> 0x20);
  fVar5 = fVar5 * fVar5 + fVar4 * fVar4 + (float)param_1[0x16] * (float)param_1[0x16];
  if (1e-12 < fVar5) {
    pfVar1 = (float *)*param_1;
    fVar3 = ((float10)(float)param_1[2] * (float10)(float)param_1[0x16] +
            (float10)(float)param_1[3] * (float10)(float)param_1[0x17] +
            (float10)(float)param_1[4] * (float10)(float)param_1[0x18]) -
            ((float10)*pfVar1 * (float10)(float)param_1[0x16] +
            (float10)pfVar1[1] * (float10)(float)param_1[0x17] +
            (float10)pfVar1[2] * (float10)(float)param_1[0x18]);
    return (fVar3 / (float10)fVar5) * fVar3;
  }
  puVar2 = (uint *)(param_1[0x13] & 0xfffffff0);
  fVar3 = (float10)FUN_002cdf10(puVar2 + (*puVar2 & 0xfff) * -4 + -4,param_1[0x13]);
  return fVar3;
}
