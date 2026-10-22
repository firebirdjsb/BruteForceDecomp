/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8C4C088E6CC04704028E36864EA03F079FB086E86E9BED635FF9E09EF0118BE
 * Entry: 0x00300b60, Ghidra index: 11074, label: FUN_00300b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00300b60(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  
  puVar5 = unaff_EBX;
  puVar6 = (undefined4 *)(param_1 + 0x14);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x44) = unaff_EBX[0xc];
  *(undefined4 *)(param_1 + 0x48) = unaff_EBX[0xd];
  *(undefined4 *)(param_1 + 0x4c) = unaff_EBX[0xe];
  puVar5 = unaff_EBX + 0x10;
  puVar6 = (undefined4 *)(param_1 + 0x54);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x84) = unaff_EBX[0x1c];
  *(undefined4 *)(param_1 + 0x88) = unaff_EBX[0x1d];
  *(undefined4 *)(param_1 + 0x8c) = unaff_EBX[0x1e];
  *(undefined4 *)(param_1 + 0xf0) = unaff_EBX[0x33];
  *(undefined4 *)(param_1 + 0xec) = unaff_EBX[0x32];
  if (param_2 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = 0.2;
  }
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(unaff_EBX + 0x20);
  *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)((int)unaff_EBX + 0x81);
  *(undefined4 *)(param_1 + 0x98) = unaff_EBX[0x21];
  *(undefined4 *)(param_1 + 0x9c) = unaff_EBX[0x22];
  *(undefined4 *)(param_1 + 0xa0) = unaff_EBX[0x23];
  *(float *)(param_1 + 0xa4) = fVar1 * (float)unaff_EBX[0x24];
  *(float *)(param_1 + 0xa8) = fVar1 * (float)unaff_EBX[0x25];
  if (6.2831855 < *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x98)) {
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(unaff_EBX + 0x26);
  *(undefined1 *)(param_1 + 0xb1) = *(undefined1 *)((int)unaff_EBX + 0x99);
  *(undefined4 *)(param_1 + 0xb4) = unaff_EBX[0x27];
  *(undefined4 *)(param_1 + 0xb8) = unaff_EBX[0x28];
  *(undefined4 *)(param_1 + 0xbc) = unaff_EBX[0x29];
  *(float *)(param_1 + 0xc0) = fVar1 * (float)unaff_EBX[0x2a];
  *(float *)(param_1 + 0xc4) = fVar1 * (float)unaff_EBX[0x2b];
  if (6.2831855 < *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(unaff_EBX + 0x2c);
  *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)((int)unaff_EBX + 0xb1);
  *(undefined4 *)(param_1 + 0xd0) = unaff_EBX[0x2d];
  *(undefined4 *)(param_1 + 0xd4) = unaff_EBX[0x2e];
  *(undefined4 *)(param_1 + 0xd8) = unaff_EBX[0x2f];
  *(float *)(param_1 + 0xdc) = fVar1 * (float)unaff_EBX[0x30];
  *(float *)(param_1 + 0xe0) = fVar1 * (float)unaff_EBX[0x31];
  if (6.2831855 < *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xd0)) {
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  fVar3 = ((float)unaff_EBX[0x27] + (float)unaff_EBX[0x28]) * 0.5;
  fVar1 = (float)unaff_EBX[0x28];
  fVar2 = (float)unaff_EBX[0x27];
  if (0.001 < ABS(fVar3)) {
    FUN_00304d70(fVar3);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0x42c80000;
  fVar7 = (float10)fcos((float10)(fVar1 - fVar2) * (float10)0.5);
  *(float *)(param_1 + 0xb4) = (float)fVar7;
  fVar7 = (float10)fsin((float10)(float)unaff_EBX[0x2e]);
  *(float *)(param_1 + 0xd0) = (float)-fVar7;
  fVar7 = (float10)fsin((float10)(float)unaff_EBX[0x2d]);
  *(float *)(param_1 + 0xd4) = (float)-fVar7;
  return;
}
