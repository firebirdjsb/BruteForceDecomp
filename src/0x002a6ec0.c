/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8218DE1B6793D4D200279D6D0079A031845B7D5BFBF95559E7E52AAB73E97C4
 * Entry: 0x002a6ec0, Ghidra index: 9592, label: FUN_002a6ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a6ec0(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x14);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = (*param_2)(piVar2,param_3);
    if (iVar1 != 0) break;
    piVar2 = (int *)(**(code **)(*piVar2 + 0x38))(piVar2);
  }
  return 0;
}
