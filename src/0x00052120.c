/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9BB04FF684DF913B8D6F81E92E4D06B88773586B58567CF41746BE7570BEA45
 * Entry: 0x00052120, Ghidra index: 753, label: FUN_00052120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00052120(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  ushort uVar5;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_28 [8];
  float fStack_20;
  undefined1 local_18 [4];
  float fStack_14;
  
  puStack_30 = local_28;
  puStack_2c = local_18;
  (**(code **)(*unaff_ESI + 0x20))();
  (**(code **)(*unaff_ESI + 0x20))();
  iVar4 = (**(code **)(*unaff_EBX + 0x40))();
  fVar1 = (float)puStack_2c + *(float *)(iVar4 + 0x28);
  fVar2 = (fVar1 - (float)unaff_EDI) - fStack_14;
  fVar1 = fVar1 + (float)unaff_EDI + fStack_14;
  iVar4 = (**(code **)(*unaff_EDI + 0x40))();
  fStack_20 = fStack_20 + *(float *)(iVar4 + 0x28);
  fVar3 = (float)&puStack_30 + fStack_20 + fStack_14;
  uVar5 = (ushort)(fVar3 < fVar2) << 8 | (ushort)(isnan(fVar3) || isnan(fVar2)) << 10 |
          (ushort)(fVar3 == fVar2) << 0xe;
  if (fVar3 >= fVar2) {
    fStack_14 = (fStack_20 - (float)&puStack_30) - fStack_14;
    uVar5 = (ushort)(fVar1 < fStack_14) << 8 | (ushort)(isnan(fVar1) || isnan(fStack_14)) << 10 |
            (ushort)(fVar1 == fStack_14) << 0xe;
    if (fVar1 >= fStack_14) {
      return CONCAT31((uint3)(byte)(uVar5 >> 8),1);
    }
  }
  return (uint)uVar5;
}
