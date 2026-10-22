/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8148D58910F054889B6FEA0F28C96F78A5AD101F02C5ABF0AC694F357774AC7
 * Entry: 0x0006a9f0, Ghidra index: 1206, label: FUN_0006a9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0006a9f0(void)

{
  int unaff_ESI;
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*(int *)(unaff_ESI + 0x48) + 0x1c))();
  if (fVar1 != (float10)*(float *)(unaff_ESI + 0x128)) {
    *(float *)(unaff_ESI + 0x128) = (float)fVar1;
    fVar1 = (float10)FUN_00233290((float)(fVar1 * (float10)0.017453292));
    *(float *)(unaff_ESI + 300) = (float)fVar1;
    return (float10)*(float *)(unaff_ESI + 300);
  }
  return (float10)*(float *)(unaff_ESI + 300);
}
