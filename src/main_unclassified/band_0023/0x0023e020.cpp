/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF0763D4C1E00BA4FC1B448589F6D9AFD566D7A4FF316384031CC5B420B6C114
 * Entry: 0x0023e020, Ghidra index: 7971, label: FUN_0023e020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023e020(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *in_EDX;
  
  if (param_1 != param_2) {
    uVar1 = in_EDX[6];
    uVar2 = in_EDX[7];
    uVar3 = in_EDX[8];
    uVar4 = in_EDX[9];
    uVar5 = in_EDX[10];
    uVar6 = in_EDX[0xb];
    uVar7 = in_EDX[0xc];
    uVar8 = in_EDX[0xd];
    uVar9 = in_EDX[0xe];
    uVar10 = in_EDX[0xf];
    uVar11 = in_EDX[0x10];
    uVar12 = in_EDX[0x11];
    uVar13 = in_EDX[2];
    uVar14 = in_EDX[3];
    uVar15 = in_EDX[4];
    uVar16 = in_EDX[5];
    puVar17 = param_1 + 10;
    do {
      *param_1 = *in_EDX;
      puVar17[-9] = in_EDX[1];
      puVar17[-8] = uVar13;
      puVar17[-7] = uVar14;
      puVar17[-6] = uVar15;
      puVar17[-5] = uVar16;
      puVar17[-4] = uVar1;
      puVar17[-3] = uVar2;
      puVar17[-2] = uVar3;
      puVar17[-1] = uVar4;
      *puVar17 = uVar5;
      puVar17[1] = uVar6;
      puVar17[2] = uVar7;
      puVar17[3] = uVar8;
      param_1 = param_1 + 0x12;
      puVar17[4] = uVar9;
      puVar17[5] = uVar10;
      puVar17[6] = uVar11;
      puVar17[7] = uVar12;
      puVar17 = puVar17 + 0x12;
    } while (param_1 != param_2);
  }
  return;
}
