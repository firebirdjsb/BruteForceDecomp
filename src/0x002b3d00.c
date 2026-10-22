/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3846BE74B4C695D66812512AD4952DD95140A0B3B38322918680D1961ED54745
 * Entry: 0x002b3d00, Ghidra index: 9775, label: FUN_002b3d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3d00(void)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = in_ECX[3];
  fVar2 = in_EAX[1];
  fVar3 = in_EAX[3];
  fVar4 = in_ECX[1];
  fVar5 = in_ECX[2];
  fVar6 = *in_EAX;
  fVar7 = in_EAX[2];
  fVar8 = *in_ECX;
  fVar9 = in_ECX[3];
  fVar10 = in_EAX[2];
  fVar11 = *in_ECX;
  fVar12 = in_EAX[1];
  fVar13 = in_ECX[2];
  fVar14 = in_EAX[3];
  fVar15 = *in_EAX;
  fVar16 = in_ECX[1];
  fVar17 = *in_ECX;
  fVar18 = in_EAX[3];
  fVar19 = in_EAX[2];
  fVar20 = in_ECX[1];
  fVar21 = in_ECX[3];
  fVar22 = *in_EAX;
  fVar23 = in_ECX[2];
  fVar24 = in_EAX[1];
  in_EDX[3] = ((in_ECX[3] * in_EAX[3] - *in_ECX * *in_EAX) - in_ECX[1] * in_EAX[1]) -
              in_ECX[2] * in_EAX[2];
  *in_EDX = (fVar21 * fVar22 + fVar19 * fVar20 + fVar17 * fVar18) - fVar23 * fVar24;
  in_EDX[1] = (fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2) - fVar7 * fVar8;
  in_EDX[2] = (fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10) - fVar15 * fVar16;
  return;
}
