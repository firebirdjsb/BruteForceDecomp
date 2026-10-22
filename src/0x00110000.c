/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BE980180C4C201052B754D40986F9AC901918B8AF84BDA17E50727386FE1D3C
 * Entry: 0x00110000, Ghidra index: 3550, label: FUN_00110000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00110000(void)

{
  float fVar1;
  uint in_EAX;
  
  if ((*(byte *)(in_EAX + 0x224) & 2) != 0) {
    fVar1 = *(float *)(in_EAX + 0x218);
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                      (ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                      (ushort)(fVar1 == 0.0) << 0xe);
    if (!isnan(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}
