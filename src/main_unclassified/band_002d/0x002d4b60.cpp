/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 821DBC8A23F6194140FC18B0B754F10694AA833F8B12C509E8C5C2872E3D8A83
 * Entry: 0x002d4b60, Ghidra index: 10211, label: FUN_002d4b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002d4b60(void)

{
  float *pfVar1;
  int unaff_ESI;
  float10 fVar2;
  
  FUN_002d4a10(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x108));
  pfVar1 = *(float **)(unaff_ESI + 0x108);
  fVar2 = -((float10)*pfVar1 * (float10)*(float *)(unaff_ESI + 0xa4) +
           (float10)pfVar1[1] * (float10)*(float *)(unaff_ESI + 0xa8) +
           (float10)pfVar1[2] * (float10)*(float *)(unaff_ESI + 0xac)) *
          (float10)*(float *)(unaff_ESI + 8);
  return ((float10)1.0 / ((float10)*(float *)(unaff_ESI + 4) + (float10)*(float *)(unaff_ESI + 8)))
         * (((float10)*(float *)(unaff_ESI + 4) - (float10)*(float *)(unaff_ESI + 8)) * (float10)0.0
           + fVar2 + fVar2) * (float10)*(float *)(unaff_ESI + 4);
}
