/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D04D88F616481E71CF5C4996E2F0E575F0588C95ECEAFCEB5F9A099A0851FCE9
 * Entry: 0x000cfad0, Ghidra index: 2564, label: FUN_000cfad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cfad0(undefined4 *param_1,undefined4 *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 1, puVar7 != param_2)) {
    puVar6 = param_1 + 2;
    do {
      pfVar1 = (float *)*puVar7;
      fVar3 = *param_3 - *(float *)*param_1;
      fVar2 = param_3[2] - ((float *)*param_1)[1];
      puVar5 = param_1;
      if (fVar3 * fVar3 + fVar2 * fVar2 <=
          (*param_3 - *pfVar1) * (*param_3 - *pfVar1) +
          (param_3[2] - pfVar1[1]) * (param_3[2] - pfVar1[1])) {
        puVar4 = puVar7;
        do {
          puVar5 = puVar4;
          fVar2 = *param_3 - *(float *)puVar5[-1];
          fVar3 = param_3[2] - ((float *)puVar5[-1])[1];
          puVar4 = puVar5 + -1;
        } while ((param_3[2] - pfVar1[1]) * (param_3[2] - pfVar1[1]) +
                 (*param_3 - *pfVar1) * (*param_3 - *pfVar1) < fVar3 * fVar3 + fVar2 * fVar2);
      }
      if ((puVar5 != puVar7) && (puVar7 != puVar6)) {
        FUN_000d4000(puVar5,0,0);
      }
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (puVar7 != param_2);
  }
  return;
}
