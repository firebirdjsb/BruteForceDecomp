/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9626BEB9DBFF58C7606A238B94246E9A6D4F21BB477794A3327B5AAFD3AF0D84
 * Entry: 0x0025b820, Ghidra index: 8543, label: FUN_0025b820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0025b820(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    return '\0';
  }
  cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
  if ((*(int *)(param_1 + 8) == -1) && (cVar2 != '\0')) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x34))(*(int **)(param_1 + 0x10));
    *(uint *)(param_1 + 8) = (uVar3 & 0xff) >> 2 & 1;
  }
  return cVar2;
}
