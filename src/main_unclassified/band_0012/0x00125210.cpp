/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A4A2DA98BF891B5A8824583716EC90BEB76E6BC1F3C58E783AAC6103E2CEC18
 * Entry: 0x00125210, Ghidra index: 3694, label: FUN_00125210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++17 source-matched declaration only: FUN_0005c0a0.cpp draft is uint(void).
 * Original Xbox register/stack inputs and runtime ABI remain ABI_UNVERIFIED. */
extern uint FUN_0005c0a0(void);
void FUN_00125210(int param_1,float param_2)

{
  char cVar1;
  float fVar2;
  
  param_2 = param_2 * 0.5;
  if (*(int *)(param_1 + 0x59c) != 0) {
    cVar1 = FUN_0005c0a0();
    if (cVar1 != '\0') goto LAB_00125248;
  }
  param_2 = param_2 * 0.3;
LAB_00125248:
  *(float *)(param_1 + 0x554) = *(float *)(param_1 + 0x554) - param_2;
  fVar2 = *(float *)(param_1 + 0x554);
  if (*(float *)(param_1 + 0x554) <= 0.0) {
    fVar2 = 0.0;
  }
  if (*(float *)(param_1 + 0x50) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x50);
  }
  *(float *)(param_1 + 0x554) = fVar2;
  return;
}
