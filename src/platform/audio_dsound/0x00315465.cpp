/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A56CC1DFEAEA537DBC01851BC5886A022055C951BB8D33ABB40AD3308083831B
 * Entry: 0x00315465, Ghidra index: 12101, label: FUN_00315465
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
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
  const uint8_t *matrix_bytes;
  uint32_t source_word, state_word, outer_word, inner_word;
  float matrix_1c, matrix_20, matrix_24;
  float matrix_28, matrix_2c, matrix_30;
  
  /* 0x31546e..0x315476: guest DWORD pointer +0x50, then state at
   * guest address +0x3c. Addition wraps at 32 bits as in ADD EAX,0x3c. */
  memcpy(&source_word, (const uint8_t *)param_1 + 0x50, 4);
  memcpy(&state_word, (const void *)(uintptr_t)(uint32_t)(source_word + 0x3cU), 4);
  if (state_word == 1) {
    matrix_bytes = (const uint8_t *)&DAT_0032f4c0;
    pfVar6 = (float *)&DAT_0031cca8;
  }
  else {
    /* 0x315482/85 reads two 32-bit pointer words; 0x315493 reloads
     * the outer word before forming the separate +4 scalar base. */
    memcpy(&outer_word, (const uint8_t *)param_1 + 0x48, 4);
    memcpy(&inner_word, (const void *)(uintptr_t)outer_word, 4);
    matrix_bytes = (const uint8_t *)(uintptr_t)inner_word;
    memcpy(&outer_word, (const uint8_t *)param_1 + 0x48, 4);
    pfVar6 = (float *)(uintptr_t)(uint32_t)(outer_word + 4U);
  }
  /* Original FLD m32fp operands at +0x24/+0x20/+0x1c are float bits,
   * not numeric conversions from integer DWORD values. Full x87 evaluation
   * order/precision of the surrounding draft expressions remains unverified. */
  memcpy(&matrix_24, matrix_bytes + 0x24, 4);
  memcpy(&matrix_20, matrix_bytes + 0x20, 4);
  memcpy(&matrix_1c, matrix_bytes + 0x1c, 4);
  fVar1 = matrix_1c * *param_1 +
          matrix_20 * param_1[1] + matrix_24 * param_1[2];
  fVar2 = *pfVar6 * *param_1 + pfVar6[1] * param_1[1] + pfVar6[2] * param_1[2];
  if (param_1[3] == 0.0) {
    fVar3 = 0.0;
LAB_0031553b:
    param_1[5] = fVar3;
  }
  else {
    /* 0x3154db..0x3154eb: float operands at +0x30/+0x2c/+0x28. */
    memcpy(&matrix_30, matrix_bytes + 0x30, 4);
    memcpy(&matrix_2c, matrix_bytes + 0x2c, 4);
    memcpy(&matrix_28, matrix_bytes + 0x28, 4);
    fVar4 = *param_1 * matrix_28 +
            matrix_2c * param_1[1] + matrix_30 * param_1[2];
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
