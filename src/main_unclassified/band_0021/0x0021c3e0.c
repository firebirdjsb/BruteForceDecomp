/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B328298A1A4CCB06922EF816C26175B7F26ED2107CC015CA2D1376FEFA221AFF
 * Entry: 0x0021c3e0, Ghidra index: 7527, label: FUN_0021c3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021c3e0(float param_1,float param_2)

{
  char in_AL;
  undefined4 *in_ECX;
  byte bVar1;
  int unaff_ESI;
  
  if (param_2 < 0.01) {
    FUN_0021c380(param_1);
    *(byte *)(unaff_ESI + 0x10c) =
         (in_AL << 4 ^ *(byte *)(unaff_ESI + 0x10c)) & 0x10 ^ *(byte *)(unaff_ESI + 0x10c) | 0xc;
    *(float *)(unaff_ESI + 0xb0) = param_1;
    return;
  }
  if (in_ECX != (undefined4 *)0x0) {
    FUN_0021c380(*in_ECX);
  }
  bVar1 = (in_AL << 4 ^ *(byte *)(unaff_ESI + 0x10c)) & 0x10 ^ *(byte *)(unaff_ESI + 0x10c);
  *(float *)(unaff_ESI + 0xb0) = param_1;
  *(byte *)(unaff_ESI + 0x10c) = bVar1 | 4;
  if (param_1 < *(float *)(unaff_ESI + 0xbc)) {
    bVar1 = bVar1 & 0xf7 | 4;
  }
  else {
    bVar1 = bVar1 | 0xc;
  }
  *(byte *)(unaff_ESI + 0x10c) = bVar1;
  *(float *)(unaff_ESI + 0xb4) = (param_1 - *(float *)(unaff_ESI + 0xbc)) / param_2;
  return;
}
