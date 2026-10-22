/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C34C7059E6F03A531810BB5F8989344C5861982CCEA61660E7C60D8F63EA8458
 * Entry: 0x001f8420, Ghidra index: 7064, label: FUN_001f8420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001f8420(float param_1)

{
  float fVar1;
  undefined4 *unaff_ESI;
  float10 fVar2;
  
  fVar2 = (float10)(**(code **)(*(int *)*unaff_ESI + 100))();
  fVar1 = (float)fVar2;
  switch(unaff_ESI[2]) {
  case 1:
    if (param_1 <= fVar1) {
      return ((float10)1.0 - (float10)param_1 / (float10)fVar1) * (float10)(float)unaff_ESI[1];
    }
    break;
  case 2:
    if (param_1 <= fVar1) {
      fVar2 = (float10)1.0 - (float10)param_1 / (float10)fVar1;
      return fVar2 * fVar2 * (float10)(float)unaff_ESI[1];
    }
    break;
  case 3:
    if (fVar1 < param_1) break;
    if (fVar1 * 0.5 < param_1) {
      fVar2 = (float10)param_1 / (float10)fVar1 - (float10)0.5;
      return ((float10)1.0 - (fVar2 + fVar2)) * (float10)(float)unaff_ESI[1];
    }
  case 0:
    return (float10)(float)unaff_ESI[1];
  }
  return (float10)0.0;
}
