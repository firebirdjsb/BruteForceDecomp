/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0272ACD86F01913D7918B09207E2E9EE038D7C2BE0B66000DFE2E3D2D21725D
 * Entry: 0x0025af10, Ghidra index: 8533, label: FUN_0025af10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025af10(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_0025af10(*(undefined4 *)(param_1 + 8));
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
