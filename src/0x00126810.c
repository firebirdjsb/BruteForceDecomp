/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48AD32AA1E8A991927674CBDE3DAC4AB3DF6A18F397CAC1F4AC458F36AA0F388
 * Entry: 0x00126810, Ghidra index: 3714, label: FUN_00126810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00126810(void)

{
  float fVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 0x5b8);
  if (uVar2 == 0) {
    uVar2 = 0;
    if (*(char *)(in_ECX + 0x828) == '\0') goto LAB_00126846;
    fVar1 = *(float *)(in_ECX + 0x824);
  }
  else {
    if (*(char *)(uVar2 + 0x54) == '\0') goto LAB_00126846;
    fVar1 = *(float *)(uVar2 + 0x50);
  }
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   (ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                   (ushort)(fVar1 == 0.0) << 0xe);
  if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_00126846:
  return uVar2 & 0xffffff00;
}
