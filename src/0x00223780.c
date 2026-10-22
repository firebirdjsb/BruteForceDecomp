/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10551E6452BE8F2779BE31E022F7D7F345C56AD30DADC201CE14E5D5DAC4651A
 * Entry: 0x00223780, Ghidra index: 7604, label: FUN_00223780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00223780(float param_1,float param_2)

{
  int in_EAX;
  float10 fVar1;
  
  if (in_EAX == 1) {
    fVar1 = (float10)param_1 * (float10)param_2;
  }
  else {
    if (in_EAX == 2) {
      return (float10)param_1 * (float10)param_2 * (float10)param_2;
    }
    if (in_EAX != 3) {
      return (float10)param_1;
    }
    fVar1 = (float10)param_1;
    if (param_2 < 0.5) {
      return fVar1 * (float10)param_2 + fVar1 * (float10)param_2;
    }
  }
  return fVar1;
}
