/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3483E1F1EDBD56970BF809FCB30B3C6B7CECBCFE1FD0D480A64BB4498FBC12BB
 * Entry: 0x000c9690, Ghidra index: 2489, label: FUN_000c9690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c9690(int *param_1,float param_2)

{
  float fVar1;
  
  if ((float)param_1[0x13] == 0.0) {
    *(byte *)((int)param_1 + 0x13) = *(byte *)((int)param_1 + 0x13) | 1;
  }
  else {
    *(byte *)((int)param_1 + 0x13) = *(byte *)((int)param_1 + 0x13) & 0xfe;
    param_1[0x13] = (int)((float)param_1[0x13] - param_2);
    if ((float)param_1[0x13] < 0.0) {
      param_1[0x13] = 0;
    }
  }
  fVar1 = (float)param_1[0x13] / (float)param_1[0x15];
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *(char *)(param_1 + 4) = (char)(int)(fVar1 * (float)param_1[0x16] * 255.0);
  fVar1 = (float)param_1[0x13] / (float)param_1[0x15];
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  fVar1 = 1.0 - fVar1;
  (**(code **)(*param_1 + 0x1c))
            (fVar1 * (float)param_1[0x18] * fVar1 * fVar1 + (float)param_1[0x17]);
  return;
}
