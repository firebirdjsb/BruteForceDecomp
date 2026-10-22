/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 531F1340793AE0AAD570147590B40F79B23F9E2EFC027D22188AA155703EDDCF
 * Entry: 0x00065760, Ghidra index: 1106, label: FUN_00065760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00065760(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x94);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xdc))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x94);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    *(int **)(param_1 + 0x94) = param_2;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  piVar1 = *(int **)(param_1 + 0x94);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xd8))(piVar1);
  }
  return 0;
}
