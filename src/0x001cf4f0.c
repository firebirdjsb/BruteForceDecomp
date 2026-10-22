/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFA4F8147B1FEF1D18C366653AE63B29CECD87B451D4F5660B7226B405DD2A85
 * Entry: 0x001cf4f0, Ghidra index: 6114, label: FUN_001cf4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf4f0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *unaff_EDI;
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[1] = 0;
    }
    piVar1 = (int *)unaff_EDI[1];
    param_1[1] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    FUN_001d4410();
  }
  return;
}
