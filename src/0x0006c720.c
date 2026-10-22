/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E6C8851BE557CAFF8D0FB3FEB654F10686B73915EF711B0F2682180F838FAE1
 * Entry: 0x0006c720, Ghidra index: 1228, label: FUN_0006c720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006c720(float param_1)

{
  int unaff_ESI;
  float10 fVar1;
  
  if (param_1 == 1.0) {
    *(undefined4 *)(unaff_ESI + 0xcc) = *(undefined4 *)(unaff_ESI + 200);
    return;
  }
  fVar1 = (float10)FUN_00233290(*(float *)(unaff_ESI + 200) * 0.008726646);
  fVar1 = (float10)FUN_00232be0((float)(fVar1 / (float10)param_1));
  *(float *)(unaff_ESI + 0xcc) = (float)(fVar1 * (float10)114.59155);
  return;
}
