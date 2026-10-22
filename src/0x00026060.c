/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41688132890B06BA9FB24CA733161F4F5CE3854D4E5BEF90C2231A0D79789C73
 * Entry: 0x00026060, Ghidra index: 263, label: FUN_00026060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00026060(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int *in_ECX;
  int unaff_EBX;
  float *pfVar11;
  int unaff_EDI;
  ushort uVar12;
  float10 fVar13;
  float10 fVar14;
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  
  iVar9 = (**(code **)(*in_ECX + 0x40))();
  pfVar11 = (float *)(iVar9 + 0x24);
  if ((*(byte *)(unaff_EBX + 0x244) & 1) != 0) {
    fVar1 = *(float *)(unaff_EDI + 0x1c) - *(float *)(iVar9 + 0x2c);
    fVar2 = *(float *)(unaff_EDI + 0x18) - *(float *)(iVar9 + 0x28);
    fVar3 = *(float *)(unaff_EDI + 0x14) - *pfVar11;
    fVar1 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
    if (fVar1 >= 2500.0 && (fVar1 == 2500.0) == 0) {
      return (uint)(ushort)((ushort)(fVar1 < 2500.0) << 8 | (ushort)isnan(fVar1) << 10 |
                           (ushort)(fVar1 == 2500.0) << 0xe);
    }
    if (fVar1 < 25.0) {
      return (uint)(ushort)((ushort)(fVar1 < 25.0) << 8 | (ushort)isnan(fVar1) << 10 |
                           (ushort)(fVar1 == 25.0) << 0xe);
    }
  }
  iVar10 = (**(code **)(**(int **)(unaff_EBX + 0x240) + 0x40))();
  fVar1 = *(float *)(unaff_EDI + 0x1c) - *(float *)(iVar10 + 0x2c);
  fVar2 = *(float *)(unaff_EDI + 0x18) - *(float *)(iVar10 + 0x28);
  fVar3 = *(float *)(unaff_EDI + 0x14) - *(float *)(iVar10 + 0x24);
  fVar4 = *(float *)(iVar9 + 0x2c) - *(float *)(iVar10 + 0x2c);
  fVar5 = *(float *)(iVar9 + 0x28) - *(float *)(iVar10 + 0x28);
  fVar6 = *pfVar11 - *(float *)(iVar10 + 0x24);
  fVar7 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar8 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  if (((fVar8 < fVar7) && (0.0 < fVar8)) && (0.0 < fVar7)) {
    auVar15 = rsqrtss(in_XMM0,fVar8 * fVar7);
    fVar1 = (fVar3 * fVar6 + fVar5 * fVar2 + fVar4 * fVar1) * auVar15._0_4_;
    if (fVar1 >= 0.25 && (fVar1 == 0.25) == 0) {
      return (uint)(ushort)((ushort)(fVar1 < 0.25) << 8 | (ushort)isnan(fVar1) << 10 |
                           (ushort)(fVar1 == 0.25) << 0xe);
    }
  }
  fVar1 = *(float *)(unaff_EBX + 0x248);
  FUN_00023140(unaff_EDI,pfVar11);
  fVar13 = (float10)FUN_00306c80();
  fVar13 = fVar13 * (float10)57.295776;
  fVar14 = (float10)*(float *)(unaff_EDI + 0x5c) * (float10)0.5 + (float10)fVar1;
  uVar12 = (ushort)(fVar13 < fVar14) << 8 | (ushort)(isnan(fVar13) || isnan(fVar14)) << 10 |
           (ushort)(fVar13 == fVar14) << 0xe;
  if (fVar13 >= fVar14) {
    return (uint)uVar12;
  }
  return CONCAT31((uint3)(byte)(uVar12 >> 8),1);
}
