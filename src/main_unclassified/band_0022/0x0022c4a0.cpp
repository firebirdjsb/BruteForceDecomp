/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84813A404845880E09F52A82C3636320E5131965CFB5522FF2EAB08B32423F9C
 * Entry: 0x0022c4a0, Ghidra index: 7694, label: FUN_0022c4a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0022c4a0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) == 0) {
    return *(int *)(in_ECX + 0x44);
  }
  piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x9c);
  iVar2 = *piVar1;
  if ((iVar2 != 1) && (iVar2 != 0)) {
    return 0;
  }
  return piVar1[1];
}
