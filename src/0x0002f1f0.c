/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0A17DAC7B86DFEC75A99B933B31205F47C1796FA6CF13EBA1668AE722A9FDBD
 * Entry: 0x0002f1f0, Ghidra index: 310, label: FUN_0002f1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0002f1f0(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar2 = (**(code **)(*param_1 + 0xf4))();
  if (iVar2 == 0) {
    return 1;
  }
  fVar1 = *(float *)(in_ECX + 4);
  uVar3 = CONCAT31((int3)(CONCAT22((short)((uint)iVar2 >> 0x10),
                                   (ushort)(fVar1 < 1.1920929e-07) << 8 | (ushort)isnan(fVar1) << 10 |
                                   (ushort)(fVar1 == 1.1920929e-07) << 0xe) >> 8),1);
  if ((uVar3 & 0x4100) == 0) {
    *(float *)(iVar2 + 0x568) = fVar1;
    *(float *)(iVar2 + 0x560) = fVar1;
    *(byte *)(iVar2 + 0x564) = *(byte *)(iVar2 + 0x564) & 0xf9 | 1;
    return uVar3;
  }
  return uVar3;
}
