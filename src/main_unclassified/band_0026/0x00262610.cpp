/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64C8BB0E6DB7625A07233874E423D1C55FA4743F02A8F4B6DFA67C871B3EF93D
 * Entry: 0x00262610, Ghidra index: 8658, label: FUN_00262610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00262610(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x5c))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x54))(*(int **)(param_1 + 4),uVar1);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00262637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar2 + 0x48))(piVar2);
    return uVar1;
  }
  return 1;
}
