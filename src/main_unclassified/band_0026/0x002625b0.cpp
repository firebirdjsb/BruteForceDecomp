/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32205336E5BAE775DEB650F10B0DF48FA1242D5ACFC71A1DD5DF10B11D36B2EF
 * Entry: 0x002625b0, Ghidra index: 8656, label: FUN_002625b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002625b0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x5c))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x54))(*(int **)(param_1 + 4),uVar1);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002625d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar2 + 0x40))(piVar2);
    return uVar1;
  }
  return 1;
}
