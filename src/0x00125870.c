/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF226C0873817719305012A0AD6B38C2172F81F8FA83DFD77900A87F67167C0B
 * Entry: 0x00125870, Ghidra index: 3696, label: FUN_00125870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00125870(int param_1,undefined4 param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x494) = param_2;
  fVar1 = *(float *)(param_1 + 0x494);
  if (*(float *)(param_1 + 0x490) <= *(float *)(param_1 + 0x494)) {
    fVar1 = *(float *)(param_1 + 0x490);
  }
  *(float *)(param_1 + 0x490) = fVar1;
  return (float10)*(float *)(param_1 + 0x490);
}
