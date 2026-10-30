/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B510B3AB06AA2A8561EBD6790851D6F08EB939BFC9DC5B9506D827D45ADB899
 * Entry: 0x001cf890, Ghidra index: 6133, label: FUN_001cf890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EDI;
      FUN_0003d730(param_1 + 1,unaff_EDI + 1);
      param_1[0xd] = unaff_EDI[0xd];
      param_1[0xe] = unaff_EDI[0xe];
      param_1[0xf] = unaff_EDI[0xf];
      if (unaff_EDI[0x10] == 0) {
        if (param_1[0x10] != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(param_1[0x10]);
        }
        param_1[0x10] = 0;
      }
      else if (param_1[0x10] == 0) {
        puVar1 = (undefined4 *)FUN_002ea01d(4);
        if (puVar1 == (undefined4 *)0x0) {
          puVar1 = (undefined4 *)0x0;
        }
        else {
          *puVar1 = 0;
        }
        param_1[0x10] = puVar1;
      }
      if ((undefined4 *)unaff_EDI[0x10] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x10] = *(undefined4 *)unaff_EDI[0x10];
      }
      param_1 = param_1 + 0x11;
    } while (param_1 != param_2);
  }
  return;
}
