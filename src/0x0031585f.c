/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB43BEA8329BD7BDAF956FA56380F395B4452C71B8EE06501981234DF3128200
 * Entry: 0x0031585f, Ghidra index: 12106, label: FUN_0031585f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031585f(uint param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0) {
    param_1 = *(uint *)(in_ECX + 0x18);
    param_2 = *(uint *)(in_ECX + 0x1c);
    if (param_1 == 0x8000) {
      return;
    }
    if (param_2 == 0) {
      return;
    }
  }
  iVar1 = **(int **)(*(int *)(in_ECX + 8) + 0x10);
  do {
  } while (*(int *)(iVar1 + 0x810) != 0);
  *(uint *)(iVar1 + 0x800) = ((param_1 >> 2) - *(int *)(iVar1 + 0x804)) + -0x206;
  *(uint *)(iVar1 + 0x808) = param_1;
  *(uint *)(iVar1 + 0x80c) = param_2 >> 2;
  *(undefined4 *)(iVar1 + 0x810) = 2;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0x8000;
  return;
}
