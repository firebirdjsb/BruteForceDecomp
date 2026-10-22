/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C861E7BECADC39AC521F52D12C1D8E910B5F7DC8011636BA43FF85FB61E2937C
 * Entry: 0x00383fdc, Ghidra index: 13637, label: FUN_00383fdc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00383fdc(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 0x1c;
  param_1[1] = 0xc3;
  *(undefined1 **)(param_1 + 8) = &LAB_00383e92;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_00381379(param_1);
  return;
}
