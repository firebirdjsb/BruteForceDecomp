/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71895D0437287FA6AF80BE365333EAEE3B7F58C7BF5CE847FA0601B6DB3166A4
 * Entry: 0x0029e2f0, Ghidra index: 9472, label: FUN_0029e2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029e2f0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  *(uint *)(param_1 + 0x10) =
       (((int)(*param_2 * 255.0) & 0xffU) << 8 | (int)(param_2[1] * 255.0) & 0xffU) << 8 |
       (int)(param_2[2] * 255.0) & 0xffU;
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  *(float *)(param_1 + 4) = *param_2;
  *(float *)(param_1 + 8) = fVar2;
  *(float *)(param_1 + 0xc) = fVar1;
  return;
}
