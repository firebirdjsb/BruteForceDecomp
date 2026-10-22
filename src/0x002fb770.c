/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B684B0E33BEEF4F95B9CABED5A1195F1A14E232FB3CC17AEF36571325BBE700
 * Entry: 0x002fb770, Ghidra index: 10979, label: FUN_002fb770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fb770(int param_1,int param_2)

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
  float *pfVar21;
  float *pfVar22;
  float *in_EAX;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *local_2c;
  float *local_28;
  float *local_14;
  int local_10;
  float *local_c;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *in_EAX;
  param_1 = param_1 >> 3;
  fVar3 = in_EAX[param_1 * 4 + 1];
  fVar4 = in_EAX[param_1 * 4];
  fVar5 = in_EAX[1];
  fVar14 = in_EAX[param_1 * 4 + 1] + *in_EAX;
  pfVar27 = in_EAX + param_1 * 6 + 1;
  local_10 = 2;
  fVar6 = in_EAX[1];
  fVar7 = in_EAX[param_1 * 4];
  fVar8 = *pfVar27;
  fVar9 = in_EAX[param_1 * 2];
  fVar10 = in_EAX[param_1 * 2 + 1];
  fVar11 = in_EAX[param_1 * 6];
  fVar12 = ((in_EAX[param_1 * 2] - *pfVar27) - (in_EAX[param_1 * 6] + in_EAX[param_1 * 2 + 1])) *
           fVar1;
  fVar13 = (in_EAX[param_1 * 6] + in_EAX[param_1 * 2 + 1] + (in_EAX[param_1 * 2] - *pfVar27)) *
           fVar1;
  *in_EAX = fVar12 + (fVar2 - fVar3);
  in_EAX[1] = fVar13 + fVar4 + fVar5;
  in_EAX[param_1 * 2] = (fVar2 - fVar3) - fVar12;
  in_EAX[param_1 * 2 + 1] = (fVar4 + fVar5) - fVar13;
  fVar2 = ((fVar8 + fVar9) - (fVar10 - fVar11)) * fVar1;
  fVar1 = ((fVar10 - fVar11) + fVar8 + fVar9) * fVar1;
  in_EAX[param_1 * 4] = fVar14 - fVar1;
  in_EAX[param_1 * 4 + 1] = fVar2 + (fVar6 - fVar7);
  in_EAX[param_1 * 6] = fVar1 + fVar14;
  *pfVar27 = (fVar6 - fVar7) - fVar2;
  if (2 < param_1) {
    local_28 = in_EAX + param_1 * 2 + -2;
    local_14 = in_EAX + param_1 * 4 + -2;
    pfVar27 = in_EAX + param_1 * 2 + 2;
    pfVar26 = in_EAX + param_1 * 4 + 2;
    pfVar24 = in_EAX + param_1 * 8 + -2;
    pfVar25 = (float *)(param_2 + 8);
    pfVar21 = in_EAX + param_1 * 6;
    local_c = (float *)(param_2 + 8 + param_1 * 0x10);
    pfVar22 = in_EAX + param_1 * 6;
    do {
      local_2c = pfVar22 + -2;
      pfVar23 = pfVar21 + 2;
      fVar1 = pfVar25[2];
      fVar2 = pfVar25[3];
      fVar13 = pfVar25[4];
      fVar17 = -pfVar25[5];
      fVar3 = local_c[-6];
      fVar4 = local_c[-5];
      fVar14 = local_c[-4];
      fVar20 = -local_c[-3];
      fVar5 = in_EAX[local_10];
      fVar6 = pfVar26[1];
      fVar7 = in_EAX[local_10 + 1];
      fVar8 = *pfVar26;
      fVar9 = *pfVar27;
      fVar10 = pfVar21[3];
      fVar11 = pfVar27[1];
      fVar12 = *pfVar23;
      fVar16 = fVar1 * (in_EAX[local_10] - pfVar26[1]) - fVar2 * (in_EAX[local_10 + 1] + *pfVar26);
      fVar15 = fVar2 * (in_EAX[local_10] - pfVar26[1]) + fVar1 * (in_EAX[local_10 + 1] + *pfVar26);
      fVar19 = (*pfVar27 - pfVar21[3]) * fVar4 - fVar3 * (*pfVar23 + pfVar27[1]);
      fVar18 = fVar3 * (*pfVar27 - pfVar21[3]) + fVar4 * (*pfVar23 + pfVar27[1]);
      in_EAX[local_10] = fVar19 + fVar16;
      in_EAX[local_10 + 1] = fVar15 + fVar18;
      *pfVar27 = fVar16 - fVar19;
      pfVar27[1] = fVar15 - fVar18;
      fVar15 = fVar13 * (fVar5 + fVar6) + fVar17 * (fVar7 - fVar8);
      fVar5 = fVar13 * (fVar7 - fVar8) - fVar17 * (fVar5 + fVar6);
      fVar6 = fVar20 * (fVar9 + fVar10) + fVar14 * (fVar11 - fVar12);
      fVar7 = fVar20 * (fVar11 - fVar12) - fVar14 * (fVar9 + fVar10);
      *pfVar26 = fVar6 + fVar15;
      pfVar26[1] = fVar7 + fVar5;
      *pfVar23 = fVar15 - fVar6;
      pfVar21[3] = fVar5 - fVar7;
      fVar5 = *local_28;
      fVar6 = pfVar22[-1];
      fVar7 = local_28[1];
      fVar8 = *local_2c;
      fVar9 = *local_14;
      fVar10 = pfVar24[1];
      fVar11 = local_14[1];
      fVar12 = *pfVar24;
      fVar15 = fVar3 * (*local_28 - pfVar22[-1]) - fVar4 * (*local_2c + local_28[1]);
      fVar4 = fVar4 * (*local_28 - pfVar22[-1]) + fVar3 * (*local_2c + local_28[1]);
      pfVar26 = pfVar26 + 2;
      pfVar27 = pfVar27 + 2;
      fVar3 = (*local_14 - pfVar24[1]) * fVar2 - fVar1 * (*pfVar24 + local_14[1]);
      fVar1 = fVar1 * (*local_14 - pfVar24[1]) + fVar2 * (*pfVar24 + local_14[1]);
      *local_28 = fVar3 + fVar15;
      local_28[1] = fVar4 + fVar1;
      *local_14 = fVar15 - fVar3;
      local_14[1] = fVar4 - fVar1;
      fVar1 = fVar14 * (fVar5 + fVar6) + fVar20 * (fVar7 - fVar8);
      fVar3 = fVar14 * (fVar7 - fVar8) - fVar20 * (fVar5 + fVar6);
      fVar2 = fVar17 * (fVar9 + fVar10) + fVar13 * (fVar11 - fVar12);
      fVar4 = fVar17 * (fVar11 - fVar12) - fVar13 * (fVar9 + fVar10);
      *local_2c = fVar2 + fVar1;
      pfVar22[-1] = fVar4 + fVar3;
      local_10 = local_10 + 2;
      *pfVar24 = fVar1 - fVar2;
      local_14 = local_14 + -2;
      local_28 = local_28 + -2;
      pfVar24[1] = fVar3 - fVar4;
      pfVar24 = pfVar24 + -2;
      pfVar25 = pfVar25 + 4;
      pfVar21 = pfVar23;
      local_c = local_c + -4;
      pfVar22 = local_2c;
    } while (local_10 < param_1);
  }
  fVar1 = *(float *)(param_2 + param_1 * 8);
  fVar2 = *(float *)(param_2 + 4 + param_1 * 8);
  pfVar27 = in_EAX + param_1 * 5 + 1;
  pfVar26 = in_EAX + param_1 + 1;
  fVar3 = *pfVar27;
  fVar4 = in_EAX[param_1];
  fVar5 = *pfVar26;
  pfVar21 = in_EAX + param_1 * 7 + 1;
  fVar6 = in_EAX[param_1 * 5];
  fVar7 = *pfVar21;
  fVar8 = in_EAX[param_1 * 3];
  fVar13 = in_EAX[param_1 * 3 + 1] - in_EAX[param_1 * 7];
  fVar12 = fVar1 * (in_EAX[param_1] - *pfVar27) - fVar2 * (in_EAX[param_1 * 5] + *pfVar26);
  fVar11 = fVar2 * (in_EAX[param_1] - *pfVar27) + fVar1 * (in_EAX[param_1 * 5] + *pfVar26);
  fVar10 = fVar2 * (in_EAX[param_1 * 3] - *pfVar21) -
           fVar1 * (in_EAX[param_1 * 3 + 1] + in_EAX[param_1 * 7]);
  fVar9 = fVar1 * (in_EAX[param_1 * 3] - *pfVar21) +
          fVar2 * (in_EAX[param_1 * 3 + 1] + in_EAX[param_1 * 7]);
  in_EAX[param_1] = fVar12 + fVar10;
  *pfVar26 = fVar9 + fVar11;
  in_EAX[param_1 * 3] = fVar12 - fVar10;
  in_EAX[param_1 * 3 + 1] = fVar11 - fVar9;
  fVar9 = (fVar3 + fVar4) * fVar2 - fVar1 * (fVar5 - fVar6);
  fVar4 = fVar1 * (fVar3 + fVar4) + (fVar5 - fVar6) * fVar2;
  fVar3 = fVar1 * (fVar7 + fVar8) - fVar2 * fVar13;
  fVar1 = fVar2 * (fVar7 + fVar8) + fVar1 * fVar13;
  in_EAX[param_1 * 5] = fVar9 - fVar3;
  *pfVar27 = fVar4 - fVar1;
  in_EAX[param_1 * 7] = fVar3 + fVar9;
  *pfVar21 = fVar1 + fVar4;
  return;
}
