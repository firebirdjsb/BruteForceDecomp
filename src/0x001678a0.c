/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC4EBEC84CE968B4E0FB9EAC59DE0A372FB64C9F6E5A714791AAA2E144B683F5
 * Entry: 0x001678a0, Ghidra index: 4730, label: FUN_001678a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001678a0(void)

{
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *in_EDX;
  float *unaff_ESI;
  float *unaff_EDI;
  
  if ((*unaff_ESI - *unaff_EDI) * *in_EDX +
      (unaff_ESI[1] - unaff_EDI[1]) * in_EDX[1] + (unaff_ESI[2] - unaff_EDI[2]) * in_EDX[2] < 0.0) {
    FUN_00167810();
    *extraout_ECX = *unaff_EDI + *extraout_ECX;
    extraout_ECX[1] = unaff_EDI[1] + extraout_ECX[1];
    extraout_ECX[2] = unaff_EDI[2] + extraout_ECX[2];
    return;
  }
  FUN_00167810();
  *extraout_ECX_00 = *unaff_ESI + *extraout_ECX_00;
  extraout_ECX_00[1] = unaff_ESI[1] + extraout_ECX_00[1];
  extraout_ECX_00[2] = unaff_ESI[2] + extraout_ECX_00[2];
  return;
}
