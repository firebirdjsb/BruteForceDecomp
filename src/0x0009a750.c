/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0079B446A3CA454BB8BDF354E91A5474D8F899F130924D8C14AE2967380C71E0
 * Entry: 0x0009a750, Ghidra index: 1856, label: FUN_0009a750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0009a750(void)

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
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[4];
  uVar2 = in_ECX[5];
  uVar3 = in_ECX[6];
  uVar4 = in_ECX[7];
  uVar5 = in_ECX[1];
  uVar6 = in_ECX[2];
  uVar7 = in_ECX[3];
  uVar8 = in_ECX[0xc];
  uVar9 = in_ECX[0xd];
  uVar10 = in_ECX[0xe];
  uVar11 = in_ECX[0xf];
  uVar12 = in_ECX[8];
  uVar13 = in_ECX[9];
  uVar14 = in_ECX[10];
  uVar15 = in_ECX[0xb];
  *in_EAX = *in_ECX;
  in_EAX[1] = uVar1;
  in_EAX[2] = uVar12;
  in_EAX[3] = uVar8;
  in_EAX[4] = uVar5;
  in_EAX[5] = uVar2;
  in_EAX[6] = uVar13;
  in_EAX[7] = uVar9;
  in_EAX[8] = uVar6;
  in_EAX[9] = uVar3;
  in_EAX[10] = uVar14;
  in_EAX[0xb] = uVar10;
  in_EAX[0xc] = uVar7;
  in_EAX[0xd] = uVar4;
  in_EAX[0xe] = uVar15;
  in_EAX[0xf] = uVar11;
  return;
}
