/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7032448821827ADE090B0E88B39A6DFBEE4B48EBF003467D67E058B2E2659C78
 * Entry: 0x000c4330, Ghidra index: 2404, label: FUN_000c4330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000c4330(int param_1)

{
  float fVar1;
  
  if (((*(float *)(param_1 + 0x3c) != 0.0) && (0.5 < *(float *)(param_1 + 0x3c))) &&
     (1.0 < *(float *)(param_1 + 0x3c))) {
    fVar1 = *(float *)(param_1 + 0x3c) - 1.0;
    fVar1 = fVar1 + fVar1;
    return 0xff - (int)((1.0 - fVar1 * fVar1 * fVar1) * 128.0);
  }
  return 0x80;
}
