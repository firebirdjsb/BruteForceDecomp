/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF17CB948064F3498CF101EC469D554AB8B273C566B2BC03795A100F6C07514D
 * Entry: 0x001e8b90, Ghidra index: 6843, label: FUN_001e8b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001e8b90(int param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  ushort uVar4;
  
  bVar1 = param_2 < *(float *)(param_1 + 0xc);
  uVar4 = (ushort)((uint)in_EAX >> 0x10);
  uVar3 = (uint)CONCAT21(uVar4,bVar1) << 8;
  if ((!bVar1) && (uVar3 = (uint)uVar4 << 0x10, param_2 < *(float *)(param_1 + 8))) {
    fVar2 = (param_2 - *(float *)(param_1 + 0xc)) /
            (*(float *)(param_1 + 8) - *(float *)(param_1 + 0xc));
    return (int)((float)*(ushort *)(param_1 + 6) * fVar2 +
                (1.0 - fVar2) * (float)*(ushort *)(param_1 + 2));
  }
  return uVar3 & 0xffff0000;
}
