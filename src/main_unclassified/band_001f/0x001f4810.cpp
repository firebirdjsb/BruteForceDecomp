/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7773539326EF2CFDD30628BC6F18600973CB7E4264FB93048B291329825B8851
 * Entry: 0x001f4810, Ghidra index: 7035, label: FUN_001f4810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f4810(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  
  fVar1 = (float)**(int **)(in_EAX + 0x20) * *(float *)(in_EAX + 0x10);
  fVar2 = (float)(*(int **)(in_EAX + 0x20))[1] * *(float *)(in_EAX + 0x10);
  if ((((-fVar1 < param_1) && (param_1 < fVar1)) && (-fVar2 < param_2)) && (param_2 < fVar2)) {
    return 1;
  }
  return 0;
}
