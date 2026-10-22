/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2607CFADC35AD1BA0B8CD05471CFDA675195235BBD3C5A6CD7579B2B2EC31AA
 * Entry: 0x00139470, Ghidra index: 3952, label: FUN_00139470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00139470(int *param_1,int *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}
