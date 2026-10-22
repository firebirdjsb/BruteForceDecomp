/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EBB02B6A69BBF459F8B77BDC1B2600FBE762F480F6090A3C5704C3015795A6A
 * Entry: 0x001e0b70, Ghidra index: 6717, label: FUN_001e0b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001e0b70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return in_EAX;
    }
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    if (param_1[2] == 0) break;
    if (in_EAX[2] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      in_EAX[2] = puVar1;
    }
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      *(undefined4 *)in_EAX[2] = *(undefined4 *)param_1[2];
    }
    param_1 = param_1 + 3;
    in_EAX = in_EAX + 3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_EAX[2]);
}
