/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF7A2ADFA382724D658359F89D6EEBEF7CF88905F7A24D6437696E548F81F0F5
 * Entry: 0x00060cb0, Ghidra index: 1012, label: FUN_00060cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00060cb0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 == 0xc53b008) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != param_3) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      *(int **)(param_1 + 0x3c) = param_3;
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 4))(param_3);
      }
    }
    return 0;
  }
  return 0x80070005;
}
