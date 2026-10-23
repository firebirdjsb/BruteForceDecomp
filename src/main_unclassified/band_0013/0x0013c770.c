/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B919755A1A057FE53C34BB74BDBAAE565D87FD0A85BE416D2E0643D6A151945A
 * Entry: 0x0013c770, Ghidra index: 4005, label: FUN_0013c770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013c770(int param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x24) = param_2 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x24);
  if (*(float *)(param_1 + 0x24) <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x24) = fVar1;
  return;
}
