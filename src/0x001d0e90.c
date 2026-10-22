/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5889E997496FC79DD2A1CC68A08DC0C8B325C0E9E619109B6E55FCD239626187
 * Entry: 0x001d0e90, Ghidra index: 6218, label: FUN_001d0e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0e90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    if (unaff_EDI[2] == 0) break;
    if (param_1[2] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      param_1[2] = puVar1;
    }
    if ((undefined4 *)unaff_EDI[2] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[2] = *(undefined4 *)unaff_EDI[2];
    }
    param_1 = param_1 + 3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_1[2]);
}
