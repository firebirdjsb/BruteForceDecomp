/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A9BCB6ED7B9FAA8D8C820DBBF6E2D8FC3A6CCDD0435DDC6B21A2BAA5FD17DBA
 * Entry: 0x001400d0, Ghidra index: 4076, label: FUN_001400d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001400d0(int param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  float10 fVar1;
  
  FUN_0013f5d0(param_1 + 0x10);
  FUN_001403c0(param_1,param_2,param_3,param_5);
  FUN_001401e0(param_1,param_2,param_3,param_5);
  fVar1 = (float10)FUN_00140590(param_1,param_2,param_3,param_5);
  FUN_001406f0(param_1,param_3,(float)fVar1);
  if (param_4 != '\0') {
    *(float *)(param_1 + 0x28) = (float)fVar1 + *(float *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = param_2;
  }
  return;
}
