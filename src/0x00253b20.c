/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5C00AB6BB0F1FCDD53BAF03FFF61B7C7E0A2A258222CA8303D4A433247A9AD5
 * Entry: 0x00253b20, Ghidra index: 8403, label: FUN_00253b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00253b20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    *(int *)(param_1 + 0xc) = iVar1;
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return iVar1;
}
