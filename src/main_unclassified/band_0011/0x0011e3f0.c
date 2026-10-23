/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC8D595954EF2AF7945A7A25FDF5AD40725970D0145A2FCE4BE191DE12B9CCBF
 * Entry: 0x0011e3f0, Ghidra index: 3627, label: FUN_0011e3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x0011e418: fcomp m32fp [0x003c05fc], a four-byte float.
 * Original file bits 0x40800000 (4.0f); symbol linkage remains ABI_UNVERIFIED. */
extern float DAT_003c05fc;
bool FUN_0011e3f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  int unaff_ESI;
  float local_24;
  undefined1 local_c [12];
  
  bVar6 = 0;
  if (((0.0 <= *(float *)(unaff_ESI + 0x7dc)) && (*(char *)(unaff_ESI + 0x7d8) < '\0')) &&
     (*(float *)(unaff_ESI + 0x7dc) < DAT_003c05fc !=
      (*(float *)(unaff_ESI + 0x7dc) == DAT_003c05fc))) {
    bVar6 = *(byte *)(*(int *)(unaff_ESI + 0x1fc) + 0x250) >> 3 & 1;
  }
  if ((*(int *)(unaff_ESI + 0x684) != 0) ||
     ((((*(int *)(unaff_ESI + 0x214) == 0 && (*(int *)(unaff_ESI + 0x218) == 0)) &&
       ((*(float *)(unaff_ESI + 0x620) < 0.0 || (*(int *)(unaff_ESI + 0x604) == 0)))) &&
      (bVar6 != 0)))) {
    local_24 = -0.4;
    if (0.0 < *(float *)(unaff_ESI + 0x7dc)) {
      local_24 = -0.25;
    }
    iVar4 = *(int *)(unaff_ESI + 0x6c);
    fVar1 = *(float *)(iVar4 + 0x34);
    fVar2 = *(float *)(iVar4 + 0x28);
    fVar3 = *(float *)(iVar4 + 0x1c);
    pfVar5 = (float *)(**(code **)(*(int *)(unaff_ESI + 0x1b4) + 0x30))(local_c);
    fVar1 = -fVar3 * *pfVar5 + -fVar1 * pfVar5[2] + -fVar2 * pfVar5[1];
    if ((fVar1 < local_24 == (fVar1 == local_24)) && ((*(byte *)(unaff_ESI + 0x70) & 1) == 0)) {
      FUN_0011f840(unaff_ESI);
      return *(int *)(unaff_ESI + 0x268) != -1;
    }
  }
  FUN_0011fd20();
  return *(int *)(unaff_ESI + 0x268) != -1;
}
