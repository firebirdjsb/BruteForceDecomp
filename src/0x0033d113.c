/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AB12499ED6EF9F1D9AC9381A59B4D76D29C3E08EEA4E0CE248D49F7CF10F2B9
 * Entry: 0x0033d113, Ghidra index: 12573, label: FUN_0033d113
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033d113(int param_1,undefined4 param_2)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc) >> 9;
  FUN_0033ee35(*(undefined4 *)(in_ECX + 4),in_ECX + 0x24,
               (((*(int *)(in_ECX + 0x834) - *(int *)(in_ECX + 0x82c)) - uVar1) + 1) * 0x200,
               (*(int *)(in_ECX + 0x82c) + uVar1) * 0x200,0,*(undefined4 *)(in_ECX + 0x8b8),param_2)
  ;
  FUN_0033edd5(param_2,1);
  return;
}
