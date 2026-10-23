/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 115FF644CF535D7CDC36556460FF2D0FC624EE6F7B63FEEC9FE088D9A0092338
 * Entry: 0x00126bc0, Ghidra index: 3725, label: FUN_00126bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00126bc0(uint param_1)

{
  float fVar1;
  uint uVar2;
  int in_EDX;
  
  uVar2 = *(uint *)(in_EDX + 0x5e4);
  if ((((uVar2 != 0) && (uVar2 == param_1)) && (*(int *)(*(int *)(uVar2 + 0xc) + 4) == 0x10)) &&
     (*(int *)(uVar2 + 0x148) == in_EDX)) {
    if ((*(byte *)(uVar2 + 0x4c) & 1) == 0) {
      fVar1 = *(float *)(uVar2 + 0x194);
      uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                       (ushort)(fVar1 < 0.15) << 8 | (ushort)isnan(fVar1) << 10 |
                       (ushort)(fVar1 == 0.15) << 0xe);
      if (fVar1 >= 0.15) goto LAB_00126c03;
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_00126c03:
  return uVar2 & 0xffffff00;
}
