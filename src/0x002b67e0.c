/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22873E1A6CA59653BC1C0107CEE1D8E7BC5B71D094471979B18A561E6FB45BA0
 * Entry: 0x002b67e0, Ghidra index: 9829, label: FUN_002b67e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002b67e0(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)(param_1 + 1);
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  return (float10)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + *param_1 * *param_1);
}
