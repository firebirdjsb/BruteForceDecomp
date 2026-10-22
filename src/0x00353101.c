/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AC7EEF6FD7151AA8AB1EF7ECF11B0455DBAD5E1A9EEE96A27460D843BD56479
 * Entry: 0x00353101, Ghidra index: 13077, label: FUN_00353101
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353101(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = (int *)(param_1 + 100);
  iVar2 = *piVar1;
  piVar3 = *(int **)(param_1 + 0x68);
  *piVar3 = iVar2;
  *(int **)(iVar2 + 4) = piVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int **)(param_1 + 0x68) = piVar1;
  *piVar1 = (int)piVar1;
  *(char *)(in_ECX + 0x7d) = *(char *)(in_ECX + 0x7d) + -1;
  return;
}
