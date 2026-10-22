/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A877B1547F7B3E5046AB2A45488DED20A3148F1C4205DDEDD2E077B56701508
 * Entry: 0x002593b0, Ghidra index: 8497, label: FUN_002593b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002593b0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *unaff_ESI;
  undefined4 local_10;
  char local_4;
  
  local_10 = param_2;
  FUN_00135410(&local_10);
  if (local_4 == '\0') {
    return 0x80004005;
  }
  piVar1 = (int *)unaff_ESI[3];
  if (piVar1 != param_1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[3] = 0;
    }
    unaff_ESI[3] = (int)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
  }
  (**(code **)(*unaff_ESI + 4))();
  unaff_ESI[1] = (int)param_1;
  return 0;
}
