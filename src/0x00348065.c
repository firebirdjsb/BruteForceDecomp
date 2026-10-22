/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96FD9B33ACF743F70CE9B9B3A49F26AE9F0F02730CEBC3CFA254B97940250420
 * Entry: 0x00348065, Ghidra index: 12888, label: FUN_00348065
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00348065(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xa80) = 0;
  *(undefined4 *)(in_ECX + 0xa84) = 0;
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
  FUN_00347b2c(param_1);
  return;
}
