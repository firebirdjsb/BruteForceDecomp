/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7B4E75376A0CD086B1B6E0D628D67CCD703F304FA29E0169B9AA0BC8E767454
 * Entry: 0x00225c90, Ghidra index: 7632, label: FUN_00225c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00225c90(void)

{
  float fVar1;
  int iVar2;
  undefined4 in_EAX;
  byte *unaff_ESI;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_10 [16];
  
  if (*(float *)(unaff_ESI + 0x28) < 0.0 != (*(float *)(unaff_ESI + 0x28) == 0.0)) {
    fVar1 = *(float *)(unaff_ESI + 0x2c);
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *unaff_ESI = *unaff_ESI | 4;
      return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                      (ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                                      (ushort)(fVar1 == 0.0) << 0xe) >> 8),1);
    }
  }
  iVar2 = *(int *)(*(int *)(unaff_ESI + 0x34) + 0x14);
  FUN_002b3590(*(int *)(unaff_ESI + 0x34),local_10,*(undefined4 *)(iVar2 + 0x108),
               *(undefined4 *)(iVar2 + 0x10c));
  *(uint *)(unaff_ESI + 4) = local_20;
  *(undefined4 *)(unaff_ESI + 8) = local_1c;
  *(undefined4 *)(unaff_ESI + 0xc) = local_18;
  return local_20 & 0xffffff00;
}
