/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F67C35F8563D133313B950E5C44A25FCA17971BF2C694C09C84428AA3E8D136
 * Entry: 0x0006ac90, Ghidra index: 1210, label: FUN_0006ac90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0006ac90(undefined4 param_1)

{
  int unaff_ESI;
  float10 fVar1;
  
  *(undefined4 *)(unaff_ESI + 0x1c) = param_1;
  fVar1 = ((float10)*(float *)(unaff_ESI + 0x14) + (float10)*(float *)(unaff_ESI + 0x14)) *
          (float10)0.5;
  *(float *)(unaff_ESI + 0x14) = (float)fVar1;
  fVar1 = (float10)fptan(fVar1 * (float10)0.017453292);
  *(float *)(unaff_ESI + 0x24) = (float)fVar1;
  FUN_0006ad00();
  *(float *)(unaff_ESI + 0x2c) = *(float *)(unaff_ESI + 0x24) / *(float *)(unaff_ESI + 0x28);
  fVar1 = ((float10)*(float *)(unaff_ESI + 0x18) + (float10)*(float *)(unaff_ESI + 0x18)) *
          (float10)0.5;
  *(float *)(unaff_ESI + 0x18) = (float)fVar1;
  fVar1 = (float10)fptan(fVar1 * (float10)0.017453292);
  *(float *)(unaff_ESI + 0x28) = (float)fVar1;
  FUN_0006ad90();
  *(float *)(unaff_ESI + 0x2c) = *(float *)(unaff_ESI + 0x24) / *(float *)(unaff_ESI + 0x28);
  return 0;
}
