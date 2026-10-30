/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9929DC721E398070B48ACD4088C5FD37097BBEFA1CB7A4C04C5C22A076DE9FCF
 * Entry: 0x0012eca0, Ghidra index: 3819, label: FUN_0012eca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012eca0(void)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  
  if (0.0 < in_ECX[2] * in_ECX[2] + in_ECX[1] * in_ECX[1] + *in_ECX * *in_ECX) {
    *unaff_ESI = *in_ECX;
    fVar1 = in_ECX[2];
    fVar2 = in_ECX[1];
    fVar3 = (float10)fcos((float10)fVar2 * (float10)0.017453292);
    fVar4 = (float10)fsin((float10)fVar1 * (float10)0.017453292);
    *in_EDX = (float)(fVar4 * (float10)(float)fVar3);
    fVar4 = (float10)fsin((float10)fVar2 * (float10)0.017453292);
    in_EDX[1] = (float)fVar4;
    fVar4 = (float10)fcos((float10)fVar1 * (float10)0.017453292);
    in_EDX[2] = (float)(fVar4 * (float10)(float)fVar3);
    return;
  }
  *unaff_ESI = 1.55;
  *in_EDX = 0.0;
  in_EDX[1] = 0.0;
  in_EDX[2] = 1.0;
  return;
}
