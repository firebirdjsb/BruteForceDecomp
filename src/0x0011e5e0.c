/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F42B7B045624FEC2ACC45A4F4D36B491F1A9D5B579AFC3A676707FA9AF77EC5
 * Entry: 0x0011e5e0, Ghidra index: 3629, label: FUN_0011e5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0011e5e0(float param_1)

{
  int in_EAX;
  float10 fVar1;
  
  *(float *)(in_EAX + 0x600) = param_1;
  if ((*(int *)(in_EAX + 0x604) == 0) && (*(int *)(in_EAX + 0x638) == 0)) {
    fVar1 = (float10)*(float *)(*(int *)(in_EAX + 0xc) + 0x2d0) * (float10)param_1;
    *(float *)(in_EAX + 0x5f8) = (float)fVar1;
    return fVar1;
  }
  return (float10)0.0;
}
