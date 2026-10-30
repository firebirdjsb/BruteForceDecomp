/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D24B5EF6282993AE8D8C4EC1E9197D9340946DA480C28E25ED2C2341283079A0
 * Entry: 0x00375980, Ghidra index: 13444, label: FUN_00375980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00375980(void)

{
  float *in_EDX;
  float *extraout_EDX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_003758d0(in_EDX[2] * in_EDX[2] + in_EDX[1] * in_EDX[1] + *in_EDX * *in_EDX);
  *extraout_EDX = (float)(fVar1 * (float10)*extraout_EDX);
  extraout_EDX[1] = (float)(fVar1 * (float10)extraout_EDX[1]);
  extraout_EDX[2] = (float)(fVar1 * (float10)extraout_EDX[2]);
  return;
}
