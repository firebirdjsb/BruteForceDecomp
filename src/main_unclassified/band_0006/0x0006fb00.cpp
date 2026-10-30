/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C120C45CC52D0F9A615D38626934F7267FC8015AA824A4DF62039C07EB423B62
 * Entry: 0x0006fb00, Ghidra index: 1263, label: FUN_0006fb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006fb00(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,float *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = *(undefined4 *)(param_1 + 0x22c);
  uVar4 = *(undefined4 *)(param_1 + 0x230);
  uVar5 = *(undefined4 *)(param_1 + 0x234);
  uVar1 = *(undefined4 *)(param_1 + 0x248);
  uVar6 = *(undefined4 *)(param_1 + 0x238);
  uVar7 = *(undefined4 *)(param_1 + 0x23c);
  uVar8 = *(undefined4 *)(param_1 + 0x240);
  uVar9 = *(undefined4 *)(param_1 + 0x244);
  *param_4 = *(undefined4 *)(param_1 + 0x228);
  param_4[1] = uVar2;
  param_4[2] = uVar4;
  param_4[3] = uVar5;
  param_4[8] = uVar1;
  param_4[4] = uVar6;
  param_4[5] = uVar7;
  param_4[6] = uVar8;
  param_4[7] = uVar9;
  uVar1 = *(undefined4 *)(param_1 + 0x218);
  uVar2 = *(undefined4 *)(param_1 + 0x214);
  *param_2 = *(undefined4 *)(param_1 + 0x210);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[2] = 0x3f800000;
  *param_5 = 0x3f800000;
  if ((*(byte *)(param_1 + 0x250) & 2) != 0) {
    *param_6 = *(float *)(param_1 + 0x24c);
    return;
  }
  *param_6 = 4.0;
  fVar11 = *(float *)(param_1 + 0x218) - *(float *)(param_1 + 0x224);
  fVar10 = *(float *)(param_1 + 0x214) - *(float *)(param_1 + 0x220);
  fVar3 = *(float *)(param_1 + 0x210) - *(float *)(param_1 + 0x21c);
  fVar11 = SQRT(fVar3 * fVar3 + fVar10 * fVar10 + fVar11 * fVar11) * 0.5;
  fVar10 = 8.0;
  if (fVar11 <= 8.0) {
    fVar10 = fVar11;
  }
  *param_6 = fVar10 + *param_6;
  fVar11 = *param_6;
  if (*param_6 <= *(float *)(param_1 + 0x24c)) {
    fVar11 = *(float *)(param_1 + 0x24c);
  }
  *param_6 = fVar11;
  *(float *)(param_1 + 0x24c) = *param_6;
  return;
}
