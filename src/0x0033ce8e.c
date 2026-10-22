/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1748168B3C42EFFD5311937FFBA1F44B12AE211C1A61FC1F77A7855B911CC6DA
 * Entry: 0x0033ce8e, Ghidra index: 12568, label: FUN_0033ce8e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033ce8e(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0033ee35(*(undefined4 *)(in_ECX + 4),in_ECX + 0x24,
               ((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) + 1) * 0x200,
               *(int *)(param_1 + 8) << 9,0,*(undefined4 *)(in_ECX + 0x8b8),param_2);
  FUN_0033edd5(param_2,1);
  return;
}
