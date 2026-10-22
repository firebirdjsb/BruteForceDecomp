/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6E1B0208C670C58607EADA111E2407708D45859564B73521C881B557A3DEF91
 * Entry: 0x000c6400, Ghidra index: 2437, label: FUN_000c6400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c6400(int *param_1)

{
  short sVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x68) + 0xa8) + 0x5a4) + 0x30))();
  if ((cVar2 == '\0') && (*(char *)(in_ECX + 100) == '\0')) {
    in_ECX = *(int *)(in_ECX + 0x68);
  }
  sVar1 = *(short *)(in_ECX + 10);
  *param_1 = (int)*(short *)(in_ECX + 8);
  param_1[1] = (int)sVar1;
  return;
}
