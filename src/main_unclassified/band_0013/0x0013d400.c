/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0343A322E15B298E7EE2DFC23EDA50D1B1DBD7494ECC480E973704440F78342F
 * Entry: 0x0013d400, Ghidra index: 4014, label: FUN_0013d400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0013d400(void)

{
  float fVar1;
  int in_EAX;
  uint3 uVar2;
  
  fVar1 = *(float *)(in_EAX + 0x20);
  uVar2 = (uint3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                           (ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe) >> 8);
  if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}
