/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F17D33A5E651A3A13C60FE4344CE456B8912F1AE6E4E32E87524C0C4C0D77E7
 * Entry: 0x0021cfe0, Ghidra index: 7535, label: FUN_0021cfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0021cfe0(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2;
  if (*(int *)((int)param_2 + 0x9c) != 0) {
    param_2 = 0.0;
    (**(code **)(**(int **)(param_1 + 4) + 0x6c))(*(int **)(param_1 + 4),&param_2);
    if (*(float *)(*(int *)((int)fVar1 + 0x9c) + 0x44) < param_2) {
      *(float *)(*(int *)((int)fVar1 + 0x9c) + 0x44) = param_2;
    }
  }
  FUN_0021c940();
  return 0;
}
