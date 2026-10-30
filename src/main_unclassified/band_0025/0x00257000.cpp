/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE2DCE602E661FF3E79D12E48338C1EFBA0A8F35133CE930115BB82E56A2F85E
 * Entry: 0x00257000, Ghidra index: 8449, label: FUN_00257000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00257000(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(int **)(param_1 + 0x1c) = param_2;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  return 0;
}
