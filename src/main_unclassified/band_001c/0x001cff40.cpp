/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA34C78B98ACEEC9F3944DF962EA29329BA32969F4877542F403309CA60EDFBC
 * Entry: 0x001cff40, Ghidra index: 6154, label: FUN_001cff40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cff40(undefined4 *param_1,undefined4 *param_2)

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
    FUN_000fdaa0(unaff_EDI + 10);
    if (unaff_EDI[0xb] == 0) {
      if (param_1[0xb] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(param_1[0xb]);
      }
      param_1[0xb] = 0;
    }
    else if (param_1[0xb] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      param_1[0xb] = puVar1;
    }
    if ((undefined4 *)unaff_EDI[0xb] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0xb] = *(undefined4 *)unaff_EDI[0xb];
    }
    param_1 = param_1 + 0xc;
  } while( true );
}
