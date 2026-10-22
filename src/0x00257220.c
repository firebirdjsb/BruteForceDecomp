/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F38EB94004EF4527F922EBA41F932543BCF11D639C3AC56FA216AAB125C70FA3
 * Entry: 0x00257220, Ghidra index: 8451, label: FUN_00257220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00257220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EBP;
  
  if (*(char *)(param_1 + 4) == '\0') {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x34))
                      (*(int **)(param_1 + 0x14),param_2,param_3,param_4,param_5);
    if (-1 < iVar2) {
      piVar1 = *(int **)(param_1 + 0x1c);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,unaff_EBP,param_3,param_4,param_5);
        return iVar2;
      }
      iVar2 = 0;
    }
    return iVar2;
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_2,param_3,param_4,param_5);
    return iVar2;
  }
  return 0;
}
