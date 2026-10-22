/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBAB2494B20C05F814075CF894B198CE3D01FE5E11ACE084314A0C5BBC5DFF68
 * Entry: 0x0013ea90, Ghidra index: 4035, label: FUN_0013ea90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0013ea90(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  
  uVar4 = *(uint *)(unaff_ESI + 0x18);
  if ((((*(byte *)(uVar4 + 0x70) & 1) == 0) && ((*(byte *)(uVar4 + 0x748) & 8) == 0)) &&
     (*(int *)(uVar4 + 0x1f8) != 0)) {
    iVar2 = *(int *)(uVar4 + 0x1fc);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0x4c4);
    }
    if ((iVar5 != 0) &&
       (((((iVar2 == 0 || ((*(byte *)(iVar2 + 0x250) & 4) != 0)) ||
          (((*(byte *)(iVar2 + 0x252) & 2) == 0 ||
           ((*(int *)(uVar4 + 0x214) == 0 || ((*(byte *)(*(int *)(uVar4 + 0x214) + 0x3c) & 1) != 0))
           )))) || (*(int *)(uVar4 + 0x218) == 0)) ||
        ((*(byte *)(*(int *)(uVar4 + 0x218) + 0x3c) & 1) != 0)))) {
      fVar1 = *(float *)(uVar4 + 0x490);
      fVar3 = *(float *)(unaff_ESI + 0x30) * *(float *)(unaff_ESI + 4);
      uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                       (ushort)(fVar3 < fVar1) << 8 | (ushort)(isnan(fVar3) || isnan(fVar1)) << 10 |
                       (ushort)(fVar3 == fVar1) << 0xe);
      if (fVar3 < fVar1) {
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffff00;
}
