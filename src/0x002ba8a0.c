/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1005B2F3BC2D97274109623575848599E18E2D7E61F09E0AE1F69B38CFAD837C
 * Entry: 0x002ba8a0, Ghidra index: 9886, label: FUN_002ba8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002ba8a0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)(param_2 + 1);
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  return ((float10)*(float *)(param_1 + 0x20) *
          (float10)(fVar1 * fVar1 + fVar2 * fVar2 + *param_2 * *param_2) +
         (float10)*param_3 * (float10)*param_3 * (float10)*(float *)(param_1 + 0x14) +
         (float10)param_3[1] * (float10)param_3[1] * (float10)*(float *)(param_1 + 0x18) +
         (float10)param_3[2] * (float10)param_3[2] * (float10)*(float *)(param_1 + 0x1c)) *
         (float10)0.5;
}
