/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FE083722665395DA432A833C208524BD31F0CD4B6C1502EA040D20F4E3AEF34
 * Entry: 0x00171000, Ghidra index: 4844, label: FUN_00171000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00171000(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 100 != 0) {
      iVar1 = (param_2 - iVar1) / 100;
      goto LAB_00171049;
    }
  }
  iVar1 = 0;
LAB_00171049:
  FUN_00171090(param_2,1);
  *param_1 = iVar1 * 100 + *(int *)(unaff_EDI + 4);
  return param_1;
}
