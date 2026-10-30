/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEED84314191ED1D6102D887FB8741FE2E80D1D5F1FDD6D77DD7E1A8B4B91D05
 * Entry: 0x001d0df0, Ghidra index: 6216, label: FUN_001d0df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0df0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    *param_1 = *unaff_EDI;
    if (unaff_EDI[1] == 0) break;
    if (param_1[1] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      param_1[1] = puVar1;
    }
    if ((undefined4 *)unaff_EDI[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)unaff_EDI[1];
    }
    param_1 = param_1 + 2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_1[1]);
}
