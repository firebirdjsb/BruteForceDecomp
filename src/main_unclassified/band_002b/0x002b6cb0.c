/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64FE773443E59FE7F9864D88CEBF9D799523137A0CD95243D8C44236092573D8
 * Entry: 0x002b6cb0, Ghidra index: 9835, label: FUN_002b6cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6cb0(void)

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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  undefined4 *puVar49;
  int iVar50;
  undefined4 local_24 [9];
  
  puVar49 = (undefined4 *)&stack0xffffffcc;
  iVar50 = 3;
  do {
    puVar49 = puVar49 + 4;
    *puVar49 = 0;
    iVar50 = iVar50 + -1;
  } while (iVar50 != 0);
  fVar1 = *in_EAX;
  fVar2 = *in_ECX;
  fVar3 = in_EAX[2];
  fVar4 = in_ECX[2];
  fVar5 = in_EAX[1];
  fVar6 = in_ECX[1];
  fVar7 = in_EAX[6];
  fVar8 = in_ECX[2];
  fVar9 = in_EAX[4];
  fVar10 = *in_ECX;
  fVar11 = in_ECX[1];
  fVar12 = in_EAX[5];
  fVar13 = *in_EAX;
  fVar14 = in_ECX[4];
  fVar15 = in_EAX[2];
  fVar16 = in_ECX[6];
  fVar17 = in_EAX[1];
  fVar18 = in_ECX[5];
  fVar19 = in_EAX[6];
  fVar20 = in_ECX[6];
  fVar21 = in_EAX[4];
  fVar22 = in_ECX[4];
  fVar23 = in_EAX[5];
  fVar24 = in_ECX[5];
  fVar25 = in_EAX[9];
  fVar26 = in_ECX[5];
  fVar27 = in_EAX[10];
  fVar28 = in_ECX[6];
  fVar29 = in_ECX[4];
  fVar30 = in_EAX[8];
  fVar31 = in_EAX[2];
  fVar32 = in_ECX[10];
  fVar33 = in_EAX[1];
  fVar34 = in_ECX[9];
  fVar35 = *in_EAX;
  fVar36 = in_ECX[8];
  fVar37 = in_EAX[6];
  fVar38 = in_ECX[10];
  fVar39 = in_EAX[4];
  fVar40 = in_ECX[8];
  fVar41 = in_EAX[5];
  fVar42 = in_ECX[9];
  fVar43 = in_EAX[9];
  fVar44 = in_ECX[9];
  fVar45 = in_ECX[8];
  fVar46 = in_EAX[8];
  fVar47 = in_EAX[10];
  fVar48 = in_ECX[10];
  in_EDX[2] = in_ECX[2] * in_EAX[10] + *in_ECX * in_EAX[8] + in_EAX[9] * in_ECX[1];
  *in_EDX = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  in_EDX[1] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  in_EDX[4] = fVar17 * fVar18 + fVar15 * fVar16 + fVar13 * fVar14;
  in_EDX[5] = fVar23 * fVar24 + fVar21 * fVar22 + fVar19 * fVar20;
  in_EDX[6] = fVar29 * fVar30 + fVar27 * fVar28 + fVar25 * fVar26;
  in_EDX[8] = fVar35 * fVar36 + fVar33 * fVar34 + fVar31 * fVar32;
  in_EDX[9] = fVar41 * fVar42 + fVar39 * fVar40 + fVar37 * fVar38;
  in_EDX[10] = fVar47 * fVar48 + fVar45 * fVar46 + fVar43 * fVar44;
  return;
}
