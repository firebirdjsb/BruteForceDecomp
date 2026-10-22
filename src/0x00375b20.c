/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FCAFBE6FE11122EA7F5CCF612456CA82EB6C7FCD612B17CFF39BF13126D99A6
 * Entry: 0x00375b20, Ghidra index: 13447, label: FUN_00375b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00375b20(int param_1)

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
  float fVar25;
  float *in_EAX;
  uint uVar26;
  uint *in_EDX;
  float *extraout_EDX;
  float10 fVar27;
  
  fVar3 = in_EAX[4];
  fVar1 = *in_EAX;
  fVar2 = in_EAX[1];
  fVar4 = in_EAX[5];
  fVar5 = in_EAX[8];
  fVar6 = in_EAX[9];
  fVar7 = in_EAX[0xc];
  fVar18 = fVar4 * fVar1 - fVar3 * fVar2;
  fVar8 = in_EAX[0xd];
  fVar9 = in_EAX[2];
  fVar10 = in_EAX[3];
  fVar11 = in_EAX[6];
  fVar12 = in_EAX[7];
  fVar22 = fVar6 * fVar1 - fVar5 * fVar2;
  fVar13 = fVar8 * fVar1 - fVar7 * fVar2;
  fVar21 = fVar6 * fVar3 - fVar5 * fVar4;
  fVar1 = in_EAX[10];
  fVar14 = fVar8 * fVar3 - fVar7 * fVar4;
  fVar2 = in_EAX[0xb];
  fVar3 = in_EAX[0xe];
  fVar5 = fVar8 * fVar5 - fVar7 * fVar6;
  fVar4 = in_EAX[0xf];
  fVar20 = fVar1 * fVar18 + (fVar9 * fVar21 - fVar11 * fVar22);
  fVar19 = (fVar11 * fVar13 - fVar3 * fVar18) - fVar9 * fVar14;
  fVar17 = fVar3 * fVar22 + (fVar9 * fVar5 - fVar1 * fVar13);
  fVar16 = (fVar1 * fVar14 - fVar3 * fVar21) - fVar11 * fVar5;
  fVar15 = (fVar22 * fVar12 - fVar18 * fVar2) - fVar21 * fVar10;
  fVar18 = fVar18 * fVar4 + (fVar14 * fVar10 - fVar13 * fVar12);
  fVar13 = (fVar13 * fVar2 - fVar22 * fVar4) - fVar5 * fVar10;
  fVar14 = fVar21 * fVar4 + (fVar5 * fVar12 - fVar14 * fVar2);
  fVar21 = fVar9 * fVar12 - fVar11 * fVar10;
  fVar23 = fVar9 * fVar2 - fVar1 * fVar10;
  fVar22 = fVar9 * fVar4 - fVar3 * fVar10;
  fVar24 = fVar11 * fVar2 - fVar1 * fVar12;
  fVar12 = fVar11 * fVar4 - fVar3 * fVar12;
  fVar5 = *in_EAX;
  fVar6 = in_EAX[4];
  fVar7 = in_EAX[8];
  fVar25 = fVar1 * fVar4 - fVar3 * fVar2;
  fVar4 = in_EAX[0xc];
  fVar1 = in_EAX[1];
  fVar2 = in_EAX[5];
  fVar3 = in_EAX[9];
  fVar8 = in_EAX[0xd];
  fVar11 = (fVar23 * fVar2 - fVar21 * fVar3) - fVar24 * fVar1;
  fVar10 = fVar21 * fVar8 + (fVar12 * fVar1 - fVar22 * fVar2);
  fVar9 = (fVar22 * fVar3 - fVar23 * fVar8) - fVar25 * fVar1;
  fVar8 = fVar24 * fVar8 + (fVar25 * fVar2 - fVar12 * fVar3);
  fVar3 = fVar21 * fVar7 + (fVar24 * fVar5 - fVar23 * fVar6);
  fVar1 = (fVar6 * fVar22 - fVar21 * fVar4) - fVar12 * fVar5;
  fVar2 = fVar23 * fVar4 + (fVar25 * fVar5 - fVar22 * fVar7);
  fVar12 = (fVar12 * fVar7 - fVar24 * fVar4) - fVar25 * fVar6;
  fVar4 = fVar8 * fVar5 + fVar9 * fVar6 + fVar10 * fVar7 + fVar11 * fVar4;
  if (fVar4 == 0.0) {
    return 0xffffffff;
  }
  if (param_1 != 0) {
    fVar27 = (float10)FUN_00375940(fVar4);
    *extraout_EDX = (float)((float10)fVar8 * fVar27);
    extraout_EDX[4] = (float)((float10)fVar12 * fVar27);
    extraout_EDX[1] = (float)((float10)fVar9 * fVar27);
    extraout_EDX[8] = (float)((float10)fVar14 * fVar27);
    extraout_EDX[2] = (float)((float10)fVar10 * fVar27);
    extraout_EDX[0xc] = (float)((float10)fVar16 * fVar27);
    extraout_EDX[3] = (float)((float10)fVar11 * fVar27);
    extraout_EDX[5] = (float)((float10)fVar2 * fVar27);
    extraout_EDX[9] = (float)((float10)fVar13 * fVar27);
    extraout_EDX[6] = (float)((float10)fVar1 * fVar27);
    extraout_EDX[0xd] = (float)((float10)fVar17 * fVar27);
    extraout_EDX[7] = (float)((float10)fVar3 * fVar27);
    extraout_EDX[10] = (float)((float10)fVar18 * fVar27);
    extraout_EDX[0xe] = (float)((float10)fVar19 * fVar27);
    extraout_EDX[0xb] = (float)((float10)fVar15 * fVar27);
    extraout_EDX[0xf] = (float)(fVar27 * (float10)fVar20);
    return 0;
  }
  uVar26 = (uint)fVar4 & 0x80000000;
  *in_EDX = (uint)fVar8 ^ uVar26;
  in_EDX[4] = (uint)fVar12 ^ uVar26;
  in_EDX[1] = (uint)fVar9 ^ uVar26;
  in_EDX[8] = (uint)fVar14 ^ uVar26;
  in_EDX[2] = (uint)fVar10 ^ uVar26;
  in_EDX[0xc] = (uint)fVar16 ^ uVar26;
  in_EDX[3] = (uint)fVar11 ^ uVar26;
  in_EDX[5] = (uint)fVar2 ^ uVar26;
  in_EDX[9] = (uint)fVar13 ^ uVar26;
  in_EDX[6] = (uint)fVar1 ^ uVar26;
  in_EDX[0xd] = (uint)fVar17 ^ uVar26;
  in_EDX[7] = (uint)fVar3 ^ uVar26;
  in_EDX[10] = (uint)fVar18 ^ uVar26;
  in_EDX[0xe] = (uint)fVar19 ^ uVar26;
  in_EDX[0xb] = (uint)fVar15 ^ uVar26;
  in_EDX[0xf] = (uint)fVar20 ^ uVar26;
  return 0;
}
