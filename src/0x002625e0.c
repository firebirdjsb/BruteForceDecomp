/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5F57DB307B006D0502945F0A78784A6F033DCD03A0BD01E410A70BA3273E03A
 * Entry: 0x002625e0, Ghidra index: 8657, label: FUN_002625e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002625e0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x5c))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x54))(*(int **)(param_1 + 4),uVar1);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00262607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar2 + 0x44))(piVar2);
    return uVar1;
  }
  return 1;
}
