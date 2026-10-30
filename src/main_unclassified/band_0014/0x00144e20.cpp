/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50AE1C70B9296FA83566FBBF307F4CE33E936ABC23FCDF5EAD8434510D509FE8
 * Entry: 0x00144e20, Ghidra index: 4179, label: FUN_00144e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_00144e20(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *in_ECX = *in_ECX + *param_1;
  in_ECX[1] = in_ECX[1] + fVar1;
  in_ECX[2] = in_ECX[2] + fVar2;
  in_ECX[3] = in_ECX[3] + fVar3;
  return in_ECX;
}
