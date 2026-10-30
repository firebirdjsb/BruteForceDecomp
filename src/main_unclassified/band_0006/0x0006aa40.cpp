/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 194CDBBD2FEB1F0784B11BAEAFCA9F9A3C91E8E4641418B26F9C0A895CE6210F
 * Entry: 0x0006aa40, Ghidra index: 1207, label: FUN_0006aa40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0006aa40(void)

{
  int unaff_ESI;
  float10 fVar1;
  
  if ((*(byte *)(unaff_ESI + 0x4c) & 1) == 0) {
    fVar1 = (float10)(**(code **)(*(int *)(unaff_ESI + 0x48) + 0x1c))();
  }
  else {
    fVar1 = (float10)*(float *)(unaff_ESI + 0xcc) * (float10)0.5;
  }
  if (fVar1 != (float10)*(float *)(unaff_ESI + 0x130)) {
    *(float *)(unaff_ESI + 0x130) = (float)fVar1;
    fVar1 = (float10)FUN_00233290((float)(fVar1 * (float10)0.017453292));
    *(float *)(unaff_ESI + 0x134) = (float)fVar1;
    return (float10)*(float *)(unaff_ESI + 0x134);
  }
  return (float10)*(float *)(unaff_ESI + 0x134);
}
