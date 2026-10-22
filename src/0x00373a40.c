/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19FACC6D3F34DD03D6D809D0224BFD94DC5B5C4C7AF2A9FFF5165A72F4287E75
 * Entry: 0x00373a40, Ghidra index: 13411, label: FUN_00373a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00373a86) */

float10 FUN_00373a40(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = ROUND((float10)1.4426950408889634 * (float10)param_1);
  fVar2 = (float10)1.4426950408889634 * (float10)param_1 - fVar1;
  fVar3 = (float10)f2xm1(ABS(fVar2));
  fVar3 = (float10)1 + fVar3;
  if (fVar2 < (float10)0) {
    fVar3 = (float10)1 / fVar3;
  }
  if (fVar1 != (float10)0) {
    fVar3 = (float10)fscale(fVar3,fVar1);
  }
  return fVar3;
}
