/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 506EF386FA24A1BA12A6AB49E2B5B2E22EE6966105CD2F0A92F9181EA953FFA9
 * Entry: 0x0035f6a0, Ghidra index: 13218, label: FUN_0035f6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035f6a0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  if (*(code **)(param_1 + 0xec) != (code *)0x0) {
    (**(code **)(param_1 + 0xec))(param_1);
  }
  param_3 = param_3 & 0xffffc000;
  *(int *)(param_1 + 100) = param_2;
  *(int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x6c) = param_2;
  *(uint *)(param_1 + 0x68) = param_2 + param_3;
  *(uint *)(param_1 + 0x3c) = param_3;
  *(uint *)(param_1 + 0x5c) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x78) = param_4;
  *(undefined4 *)(param_1 + 0x7c) = param_5;
  if (*(code **)(param_1 + 0xf4) != (code *)0x0) {
    (**(code **)(param_1 + 0xf4))(param_1);
  }
  return;
}
