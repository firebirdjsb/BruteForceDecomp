/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99889A3BC153EBEA2BB38B05453ADAC8D8BAA8A37508EA9B3C08A3BCB1E92D91
 * Entry: 0x002b68d0, Ghidra index: 9831, label: FUN_002b68d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002b68d0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *in_ECX;
  
  fVar11 = in_ECX[5] * in_ECX[10] - in_ECX[6] * in_ECX[9];
  fVar12 = in_ECX[8] * in_ECX[6] - in_ECX[4] * in_ECX[10];
  fVar13 = in_ECX[4] * in_ECX[9] - in_ECX[8] * in_ECX[5];
  fVar1 = *in_ECX;
  fVar2 = in_ECX[8];
  fVar3 = in_ECX[1];
  fVar4 = in_ECX[8];
  fVar5 = *in_ECX;
  fVar6 = in_ECX[1];
  fVar7 = in_ECX[5];
  fVar8 = in_ECX[4];
  fVar9 = in_ECX[2];
  fVar10 = *in_ECX;
  fVar15 = fVar11 * *in_ECX + fVar12 * in_ECX[1] + fVar13 * in_ECX[2];
  if (ABS(fVar15) < param_1) {
    return 0;
  }
  fVar15 = 1.0 / fVar15;
  fVar14 = (in_ECX[5] * *in_ECX - in_ECX[4] * in_ECX[1]) * fVar15;
  *in_ECX = fVar11 * fVar15;
  in_ECX[4] = fVar12 * fVar15;
  in_ECX[8] = fVar13 * fVar15;
  in_ECX[1] = (in_ECX[9] * in_ECX[2] - in_ECX[10] * in_ECX[1]) * fVar15;
  in_ECX[5] = (in_ECX[10] * fVar1 - in_ECX[2] * fVar2) * fVar15;
  in_ECX[9] = (fVar3 * fVar4 - in_ECX[9] * fVar5) * fVar15;
  in_ECX[2] = (fVar6 * in_ECX[6] - in_ECX[2] * fVar7) * fVar15;
  in_ECX[6] = (fVar8 * fVar9 - fVar10 * in_ECX[6]) * fVar15;
  in_ECX[10] = fVar14;
  fVar1 = in_ECX[0xc];
  fVar2 = in_ECX[0xd];
  fVar3 = in_ECX[0xc];
  in_ECX[0xc] = -(in_ECX[1] * in_ECX[0xd] + *in_ECX * in_ECX[0xc] + in_ECX[0xe] * in_ECX[2]);
  in_ECX[0xd] = -(in_ECX[4] * fVar1 + in_ECX[5] * in_ECX[0xd] + in_ECX[6] * in_ECX[0xe]);
  in_ECX[0xe] = -(in_ECX[8] * fVar3 + in_ECX[9] * fVar2 + fVar14 * in_ECX[0xe]);
  return 1;
}
