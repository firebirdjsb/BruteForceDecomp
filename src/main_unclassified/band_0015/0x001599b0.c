/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D525D03D9152DD64D18ADA5A971E0AE8D2140653D5EAF9E81E91F3A343EE427
 * Entry: 0x001599b0, Ghidra index: 4506, label: FUN_001599b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001599b0(float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_2c [10];
  uint uStack_4;
  
  FUN_0003d730(in_ECX[0x1b] + 0x14,param_1);
  *(byte *)((int)in_ECX + 0x27) = *(byte *)((int)in_ECX + 0x27) & 0xfe;
  if ((*(byte *)(in_ECX[2] + 0xc50) & 4) == 0) {
    if (((*(int *)(in_ECX[0x1b] + 0x10) != 0) &&
        (iVar4 = *(int *)(*(int *)(in_ECX[0x1b] + 0x10) + 100), iVar4 != 0)) && (iVar4 != -1)) {
      in_ECX[0x11] = *(int *)(*(int *)(iVar4 + 0x5c) + 0x44);
      return;
    }
    iVar4 = (**(code **)(*in_ECX + 0x13c))();
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x1b0);
    }
    if ((iVar4 != 0) && (iVar4 = FUN_0014ab50(), iVar4 != 0)) {
      in_ECX[0x11] = *(int *)(iVar4 + 0x44);
      return;
    }
    iVar4 = (**(code **)(*in_ECX + 0x40))();
    fVar2 = *(float *)(iVar4 + 0x2c) - (float)in_ECX[0x65];
    param_1 = *(float *)(iVar4 + 0x28) - (float)in_ECX[100];
    fVar3 = *(float *)(iVar4 + 0x24) - (float)in_ECX[99];
    if (0.09 < fVar3 * fVar3 + param_1 * param_1 + fVar2 * fVar2) {
      puVar6 = auStack_2c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      FUN_000dddd0(in_ECX[2],&param_1,0x42480000,in_ECX);
      in_ECX[0x11] = 2 - (uint)((uStack_4 & 1) != 0);
      iVar5 = *(int *)(iVar4 + 0x2c);
      iVar1 = *(int *)(iVar4 + 0x28);
      in_ECX[99] = (int)*(float *)(iVar4 + 0x24);
      in_ECX[100] = iVar1;
      in_ECX[0x65] = iVar5;
    }
  }
  return;
}
