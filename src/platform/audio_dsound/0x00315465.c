/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A56CC1DFEAEA537DBC01851BC5886A022055C951BB8D33ABB40AD3308083831B
 * Entry: 0x00315465, Ghidra index: 12101, label: FUN_00315465
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0031cca8;
extern uint32_t DAT_0032f4c0;
void FUN_00315465(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 *puVar7;
  
  if (*(int *)((int)param_1[0x14] + 0x3c) == 1) {
    puVar7 = &DAT_0032f4c0;
    pfVar6 = (float *)&DAT_0031cca8;
  }
  else {
    puVar7 = *(undefined4 **)param_1[0x12];
    pfVar6 = (float *)((int)param_1[0x12] + 4);
  }
  fVar1 = (float)puVar7[7] * *param_1 +
          (float)puVar7[8] * param_1[1] + (float)puVar7[9] * param_1[2];
  fVar2 = *pfVar6 * *param_1 + pfVar6[1] * param_1[1] + pfVar6[2] * param_1[2];
  if (param_1[3] == 0.0) {
    fVar3 = 0.0;
LAB_0031553b:
    param_1[5] = fVar3;
  }
  else {
    fVar4 = *param_1 * (float)puVar7[10] +
            (float)puVar7[0xb] * param_1[1] + (float)puVar7[0xc] * param_1[2];
    fVar3 = ABS(fVar4);
    fVar5 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar5 <= fVar3) {
      param_1[5] = 90.0 - (fVar5 / fVar3) * 45.0;
    }
    else {
      param_1[5] = (fVar3 / fVar5) * 45.0;
    }
    if (fVar4 < 0.0) {
      fVar3 = -param_1[5];
      goto LAB_0031553b;
    }
  }
  if (param_1[3] != 0.0) {
    fVar3 = ABS(fVar1);
    fVar4 = ABS(fVar2);
    if (fVar4 < fVar3) {
      param_1[4] = (fVar4 / fVar3) * 45.0;
      goto LAB_0031557f;
    }
    if (fVar4 != 0.0) {
      param_1[4] = 90.0 - (fVar3 / fVar4) * 45.0;
      goto LAB_0031557f;
    }
  }
  param_1[4] = 0.0;
LAB_0031557f:
  if (fVar1 < 0.0) {
    param_1[4] = 180.0 - param_1[4];
  }
  if (fVar2 < 0.0) {
    param_1[4] = -param_1[4];
  }
  DSOUND__CFullHrtfSource_GetHrtfFilterPair(param_1);
  return;
}
