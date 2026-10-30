/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE42CF40D01E05F3D0894B9204A1AE9ADC9245C267B45C484500D123255AC564
 * Entry: 0x00073710, Ghidra index: 1305, label: FUN_00073710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra scalar RCPSS low-lane opcode model; upper lanes omitted.
 * Original x86 ABI/behavior still ABI_UNVERIFIED. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00073710(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  __m128 auVar8;
  
  fVar4 = param_1[5] - *param_3;
  fVar5 = param_1[6] - param_3[1];
  fVar6 = param_1[7] - param_3[2];
  fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  if (*param_1 < fVar2) {
    if (*(char *)(param_1 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      param_1[9] = 0.0;
    }
    param_1[9] = param_2 + param_1[9];
    pfVar1 = param_1 + 2;
    if (param_1[9] < 0.5) {
      fVar7 = param_1[9] + param_1[9];
      fVar3 = 1.0 - fVar7;
      *pfVar1 = fVar7 * *param_3 + fVar3 * *pfVar1;
      param_1[3] = fVar7 * param_3[1] + fVar3 * param_1[3];
      param_1[4] = fVar7 * param_3[2] + fVar3 * param_1[4];
    }
    else {
      fVar7 = param_3[2];
      fVar3 = param_3[1];
      *pfVar1 = *param_3;
      param_1[3] = fVar3;
      param_1[4] = fVar7;
    }
    auVar8 = _mm_rcp_ss(_mm_set_ss(fVar2));
    fVar7 = _mm_cvtss_f32(auVar8);
    fVar2 = *param_1;
    param_1[5] = fVar4 * fVar7 * fVar2 + param_1[2];
    param_1[6] = fVar5 * fVar7 * fVar2 + param_1[3];
    param_1[7] = fVar6 * fVar7 * fVar2 + param_1[4];
    return;
  }
  if (*(char *)(param_1 + 1) == '\x01') {
    if (param_2 + param_1[8] <= 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = param_1[8] / (param_2 + param_1[8]);
    }
    fVar5 = 1.0 - fVar4;
    param_1[2] = fVar4 * param_1[2] + fVar5 * *param_3;
    param_1[3] = fVar5 * param_3[1] + fVar4 * param_1[3];
    param_1[4] = fVar5 * param_3[2] + fVar4 * param_1[4];
    param_1[5] = fVar4 * param_1[5] + fVar5 * param_1[2];
    param_1[6] = fVar5 * param_1[3] + fVar4 * param_1[6];
    param_1[7] = fVar5 * param_1[4] + fVar4 * param_1[7];
    param_1[8] = param_2 + param_1[8];
    if (6.0 < param_1[8]) {
      param_1[8] = 6.0;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[8] = 0.0;
    fVar4 = param_3[2];
    fVar5 = param_3[1];
    param_1[2] = *param_3;
    param_1[3] = fVar5;
    param_1[4] = fVar4;
  }
  return;
}
