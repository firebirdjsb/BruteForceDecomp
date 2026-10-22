/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B148CBFEBD5EB12B317567B5FEC19A7CA30FAAEFD20460BC33B6A0C138E1273B
 * Entry: 0x00253400, Ghidra index: 8397, label: FUN_00253400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00253400(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    param_1[2] = unaff_EDI[2];
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[3] = 0;
    }
    piVar1 = (int *)unaff_EDI[3];
    param_1[3] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  return;
}
