/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 735B4FCBD5E47185A39AF5DB4E92836203024E307A67E9A0A04D67F6854846D5
 * Entry: 0x000bfeb0, Ghidra index: 2335, label: FUN_000bfeb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000bfeb0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint in_EAX;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int *unaff_EDI;
  
  if ((*(char *)(in_EAX + 0x50) != '\0') && (*(int *)(unaff_EDI[3] + 4) == 3)) {
    iVar4 = (**(code **)(*in_ECX + 0x40))();
    iVar5 = (**(code **)(*unaff_EDI + 0x40))();
    fVar1 = *(float *)(iVar5 + 0x2c) - *(float *)(iVar4 + 0x2c);
    fVar2 = *(float *)(iVar5 + 0x28) - *(float *)(iVar4 + 0x28);
    fVar3 = *(float *)(iVar5 + 0x24) - *(float *)(iVar4 + 0x24);
    fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
    in_EAX = CONCAT22((short)((uint)fVar2 >> 0x10),
                      (ushort)(fVar1 < 5625.0) << 8 | (ushort)isnan(fVar1) << 10 |
                      (ushort)(fVar1 == 5625.0) << 0xe);
    if (fVar1 < 5625.0) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}
