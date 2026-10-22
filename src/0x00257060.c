/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAE7A63C0C5D4A8BA3E3DEEAAEA9C70A03FA10FD373767A895E29489EE74CCEE
 * Entry: 0x00257060, Ghidra index: 8450, label: FUN_00257060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00257060(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar2;
  if (*(char *)(param_1 + 4) == '\0') {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))
                      (*(int **)(param_1 + 0x14),param_2,param_3);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  else if (iVar2 < 2) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_2,param_3);
  return iVar2;
}
