/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E96C3386392B0A2303EC57F13288C54E55036D05290592A4A194671787211FE6
 * Entry: 0x00146cb0, Ghidra index: 4231, label: FUN_00146cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00146cb0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint3 uVar6;
  int *in_ECX;
  float *unaff_ESI;
  
  iVar1 = *(int *)(in_ECX[3] + 0x178);
  iVar5 = (**(code **)(*in_ECX + 0x40))();
  fVar4 = *(float *)(iVar5 + 0x2c) - unaff_ESI[2];
  fVar3 = *(float *)(iVar5 + 0x28) - unaff_ESI[1];
  fVar2 = *(float *)(iVar5 + 0x24) - *unaff_ESI;
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
  fVar3 = (float)iVar1 * (float)iVar1;
  uVar6 = (uint3)(CONCAT22((short)((uint)fVar4 >> 0x10),
                           (ushort)(fVar3 < fVar2) << 8 | (ushort)(isnan(fVar3) || isnan(fVar2)) << 10 |
                           (ushort)(fVar3 == fVar2) << 0xe) >> 8);
  if (fVar3 >= fVar2 && (fVar3 == fVar2) == 0) {
    return CONCAT31(uVar6,1);
  }
  return (uint)uVar6 << 8;
}
