/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BA369E2109CA7871E44B5CBE0610BB5BFD6E0155B1FAB87C91BB9197CADBDED
 * Entry: 0x002c6290, Ghidra index: 10081, label: FUN_002c6290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002c6290(float param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6)

{
  float fVar1;
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = param_1 * param_4 - param_2 * param_3;
  if (fVar1 * fVar1 < 1.00000005e-20) {
    return 0;
  }
  fVar1 = 1.0 / fVar1;
  *param_5 = param_4 * fVar1;
  *in_ECX = -(param_3 * fVar1);
  *in_EDX = -(param_2 * fVar1);
  *param_6 = fVar1 * param_1;
  return 1;
}
