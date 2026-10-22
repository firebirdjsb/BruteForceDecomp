/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EE7C0978BD374E2B2BAE93D9863E55A0C4F71BABC40DE126335863F1BDC94DF
 * Entry: 0x00217430, Ghidra index: 7464, label: FUN_00217430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00217430(uint param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (uVar4 = param_1, *(int *)(param_1 + 4) == 0)) {
LAB_00217443:
    return uVar4 & 0xffffff00;
  }
  *(float *)(param_1 + 0x1c) = param_3 + *(float *)(param_1 + 0x1c);
  iVar5 = CONCAT31((int3)(param_1 >> 8),*(char *)(param_2 + 0x20));
  if (*(char *)(param_2 + 0x20) == '\0') {
    fVar3 = *(float *)(param_2 + 0x18) + *(float *)(param_2 + 0x1c);
    fVar1 = *(float *)(param_1 + 0x1c);
    uVar6 = (undefined2)(param_1 >> 0x10);
    uVar4 = CONCAT22(uVar6,(ushort)(fVar1 < fVar3) << 8 | (ushort)(isnan(fVar1) || isnan(fVar3)) << 10 |
                           (ushort)(fVar1 == fVar3) << 0xe);
    if (fVar1 >= fVar3) goto LAB_00217443;
    fVar1 = *(float *)(param_1 + 0x1c);
    fVar2 = *(float *)(param_2 + 0x18);
    iVar5 = CONCAT22(uVar6,(ushort)(fVar1 < fVar2) << 8 | (ushort)(isnan(fVar1) || isnan(fVar2)) << 10 |
                           (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 < fVar2 == 0 && (fVar1 == fVar2) == 0) {
      iVar5 = (int)(((fVar3 - *(float *)(param_1 + 0x1c)) / *(float *)(param_2 + 0x1c)) *
                   (float)*(byte *)(param_2 + 0x27));
      *(char *)(param_1 + 0x24) = (char)iVar5;
    }
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}
