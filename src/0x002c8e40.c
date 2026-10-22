/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77F6B1AD80E44088E6CA5055910C44EEA2B23B52C2BA3F9E58929481BCCAA3B9
 * Entry: 0x002c8e40, Ghidra index: 10131, label: FUN_002c8e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c8e40(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  
  iVar8 = param_2;
  uVar10 = (uint)*(ushort *)(param_2 + 0x26);
  while (uVar10 = uVar10 - 1, -1 < (int)uVar10) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x28) + uVar10 * 4);
    fVar4 = *(float *)(iVar2 + 0x10) - *(float *)(param_1 + 0x10);
    fVar7 = *(float *)(iVar2 + 0x14) - *(float *)(param_1 + 0x14);
    fVar6 = *(float *)(iVar2 + 0x18) - *(float *)(param_1 + 0x18);
    fVar5 = *(float *)(iVar2 + 0x20) + *(float *)(param_1 + 0x20);
    if (fVar4 * fVar4 + fVar7 * fVar7 + fVar6 * fVar6 <= fVar5 * fVar5) {
      puVar3 = *(ushort **)(in_ECX + 0x174);
      if (*puVar3 <= puVar3[1]) {
        FUN_002ccf80();
      }
      *(int *)(*(int *)(puVar3 + 2) + (uint)puVar3[1] * 4) = iVar2;
      puVar3[1] = puVar3[1] + 1;
    }
  }
  piVar1 = (int *)(param_2 + 0x10);
  param_2 = 0;
  if (*(int *)(param_3 + 0x10) < *piVar1 + -1) {
    if (*(short *)(iVar8 + 0x1a) != 0) {
      do {
        iVar2 = *(int *)(*(int *)(iVar8 + 0x1c) + param_2 * 4);
        if (iVar2 == param_3) {
          FUN_002c8d80(param_1,iVar2);
        }
        else {
          iVar9 = FUN_002c88d0(in_ECX);
          if (iVar9 == 1) {
            FUN_002c8e40(param_1,iVar2,param_3);
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 < (int)(uint)*(ushort *)(iVar8 + 0x1a));
      return;
    }
  }
  else if (*(short *)(iVar8 + 0x1a) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(iVar8 + 0x1c) + param_2 * 4);
      if (iVar2 == param_3) {
        FUN_002c8d80(param_1,iVar2);
      }
      else {
        iVar9 = FUN_002c88d0(in_ECX);
        if (iVar9 == 1) {
          FUN_002c8e40(param_1,iVar2,param_3);
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < (int)(uint)*(ushort *)(iVar8 + 0x1a));
  }
  return;
}
