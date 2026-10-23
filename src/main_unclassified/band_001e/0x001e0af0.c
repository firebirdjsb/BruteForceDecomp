/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CEC56845DB9738F8A04CE779B526881B89CA4C45973BEAC80D7C7812561A6E1
 * Entry: 0x001e0af0, Ghidra index: 6716, label: FUN_001e0af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001e0af0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return in_EAX;
    }
    *in_EAX = *param_1;
    if (param_1[1] == 0) break;
    if (in_EAX[1] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      in_EAX[1] = puVar1;
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)in_EAX[1] = *(undefined4 *)param_1[1];
    }
    param_1 = param_1 + 2;
    in_EAX = in_EAX + 2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_EAX[1]);
}
