/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D8D8597D3F0542662A0C8F82222FA97173D73B6D28A78DCE9CA1513FAC1E7B0
 * Entry: 0x001f3900, Ghidra index: 7025, label: FUN_001f3900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f3900(undefined4 *param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_2 = *param_1;
  param_2[1] = (*(float *)(param_1[0xe] + 8) + *(float *)(param_1[0xe] + 4)) * 0.5;
  param_2[2] = param_1[1];
  fVar1 = *(float *)(param_1[6] + 0x10);
  fVar2 = (*(float *)(param_1[0xe] + 4) - *(float *)(param_1[0xe] + 8)) * 0.5;
  fVar3 = *(float *)(param_1[6] + 0x10) + 2.0;
  *param_3 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  return;
}
