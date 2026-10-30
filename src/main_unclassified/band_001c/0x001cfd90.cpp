/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8ECE726A704CA694E5E6CC20459EBD6745C946E9D5393BDB7F4C1947C8E23E1
 * Entry: 0x001cfd90, Ghidra index: 6150, label: FUN_001cfd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cfd90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    param_1[2] = unaff_EDI[2];
    param_1[3] = unaff_EDI[3];
    param_1[4] = unaff_EDI[4];
    if (unaff_EDI[5] == 0) {
      if (param_1[5] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(param_1[5]);
      }
      param_1[5] = 0;
    }
    else if (param_1[5] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      param_1[5] = puVar1;
    }
    if ((undefined4 *)unaff_EDI[5] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[5] = *(undefined4 *)unaff_EDI[5];
    }
    FUN_0010bc40();
    param_1[10] = unaff_EDI[10];
    param_1 = param_1 + 0xb;
  } while( true );
}
