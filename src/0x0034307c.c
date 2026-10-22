/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 137E7409A6B4DE1095A70714FC26075594D7B9BA8F67A8C7BE4D20ADC5D1154B
 * Entry: 0x0034307c, Ghidra index: 12699, label: FUN_0034307c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034307c(int param_1)

{
  if ((param_1 != 0) && (param_1 != *(int *)(param_1 + 0x34))) {
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x38) = 0;
  }
  return;
}
