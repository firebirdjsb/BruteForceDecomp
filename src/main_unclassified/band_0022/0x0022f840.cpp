/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56F9F410BB173F5DA3BADE79237D8970EC2FB188BB9618425DE5FC694BAA36F6
 * Entry: 0x0022f840, Ghidra index: 7742, label: FUN_0022f840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0022f840(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  int unaff_EDI;
  
  if ((*(byte *)(unaff_EDI + 0x225) & 1) == 0) {
    FUN_0022e780(unaff_EDI);
  }
  unaff_ESI[5] = 0.0;
  unaff_ESI[2] = 0.0;
  unaff_ESI[7] = 0.0;
  unaff_ESI[6] = 0.0;
  unaff_ESI[3] = 0.0;
  unaff_ESI[1] = 0.0;
  unaff_ESI[8] = 1.0;
  unaff_ESI[4] = 1.0;
  *unaff_ESI = 1.0;
  fVar2 = -*(float *)(unaff_EDI + 0x264);
  fVar3 = -*(float *)(unaff_EDI + 0x260);
  fVar4 = -*(float *)(unaff_EDI + 0x25c);
  unaff_ESI[5] = fVar3;
  unaff_ESI[2] = fVar4;
  unaff_ESI[8] = fVar2;
  if ((*(float *)(unaff_EDI + 0x25c) == 0.0) && (*(float *)(unaff_EDI + 0x264) == 0.0)) {
    unaff_ESI[1] = 1.0;
    unaff_ESI[4] = 0.0;
    unaff_ESI[7] = 0.0;
  }
  else {
    fVar1 = *(float *)(unaff_EDI + 0x25c);
    unaff_ESI[1] = -*(float *)(unaff_EDI + 0x264);
    unaff_ESI[4] = 0.0;
    unaff_ESI[7] = fVar1;
  }
  fVar1 = fVar3 * unaff_ESI[1] - unaff_ESI[4] * fVar4;
  unaff_ESI[3] = unaff_ESI[7] * fVar4 - fVar2 * unaff_ESI[1];
  unaff_ESI[6] = fVar1;
  *unaff_ESI = fVar2 * unaff_ESI[4] - unaff_ESI[7] * fVar3;
  return CONCAT31((int3)((uint)fVar1 >> 8),1);
}
