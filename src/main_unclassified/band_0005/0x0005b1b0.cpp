/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10C46673119F7F11651945F240EED3464016CBB8232C2F6C0687A6AAC59C897A
 * Entry: 0x0005b1b0, Ghidra index: 917, label: FUN_0005b1b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0005b1b0(float param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int unaff_EBX;
  int iVar6;
  
  fVar2 = 0.0;
  iVar6 = *(int *)(unaff_EBX + 0x98) + -1;
  if (-1 < iVar6) {
    do {
      uVar5 = *(int *)(unaff_EBX + 0x94) + iVar6;
      if (*(uint *)(unaff_EBX + 0x90) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(unaff_EBX + 0x90);
      }
      pfVar1 = *(float **)(*(int *)(unaff_EBX + 0x8c) + uVar5 * 4);
      fVar2 = fVar2 + *pfVar1;
      if (param_1 < fVar2) {
        fVar2 = pfVar1[3];
        fVar3 = pfVar1[2];
        fVar4 = pfVar1[1];
        param_2[1] = fVar3;
        *param_2 = fVar4;
        param_2[2] = fVar2;
        return CONCAT31((int3)((uint)fVar3 >> 8),1);
      }
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  fVar2 = *(float *)(unaff_EBX + 0x44);
  fVar3 = *(float *)(unaff_EBX + 0x40);
  fVar4 = *(float *)(unaff_EBX + 0x3c);
  param_2[2] = fVar2;
  *param_2 = fVar4;
  param_2[1] = fVar3;
  return (uint)fVar2 & 0xffffff00;
}
