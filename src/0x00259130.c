/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D16D047A370AB7E6C4517DB52610B2E3AA26D5E5D470E73AE3934BFC5A3BB8CF
 * Entry: 0x00259130, Ghidra index: 8493, label: FUN_00259130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00259130(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  return 0;
}
