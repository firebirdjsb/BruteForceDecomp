/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3390FB1ED3FEA952FF931A93E5242E744B0E629D800FEFD1A56789D824F7901C
 * Entry: 0x00254210, Ghidra index: 8408, label: FUN_00254210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00254210(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x18);
  if (piVar1 != param_1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
    *(int **)(in_ECX + 0x18) = param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x18) + 0xc))(*(int **)(in_ECX + 0x18));
  return 0;
}
