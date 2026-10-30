/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA165C84791F3F33DACF9E89FCE513329A266F9580533A3E12C76E4D3C4C7393
 * Entry: 0x0004bef0, Ghidra index: 628, label: FUN_0004bef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_002331f0(float param_1);
extern float10 FUN_00233150(float param_1);

void FUN_0004bef0(undefined4 param_1)

{
  undefined4 uVar1;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 extraout_ST0;
  float10 fVar2;
  
  uVar1 = FUN_002331f0(param_1);
  fVar2 = (float10)FUN_00233150(uVar1);
  *unaff_EDI = (float)(fVar2 * (float10)unaff_ESI[2] +
                      (float10)(float)extraout_ST0 * (float10)*unaff_ESI);
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = (float)((float10)(float)extraout_ST0 * (float10)unaff_ESI[2] -
                        fVar2 * (float10)*unaff_ESI);
  return;
}
