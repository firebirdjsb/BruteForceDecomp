/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A935F459279349B15992D4B6F02527339BF145DC227AE66BA7C7354CABF6AF24
 * Entry: 0x001e09b0, Ghidra index: 6714, label: FUN_001e09b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001e09b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  
  do {
    if (param_1 == param_2) {
      return in_EAX;
    }
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[4] = param_1[4];
    if (param_1[5] == 0) {
      if (in_EAX[5] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(in_EAX[5]);
      }
      in_EAX[5] = 0;
    }
    else if (in_EAX[5] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      in_EAX[5] = puVar1;
    }
    if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
      *(undefined4 *)in_EAX[5] = *(undefined4 *)param_1[5];
    }
    FUN_0010bc40();
    FUN_000fdaa0(param_1 + 10);
    if (param_1[0xb] == 0) {
      if (in_EAX[0xb] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(in_EAX[0xb]);
      }
      in_EAX[0xb] = 0;
    }
    else if (in_EAX[0xb] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      in_EAX[0xb] = puVar1;
    }
    if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
      *(undefined4 *)in_EAX[0xb] = *(undefined4 *)param_1[0xb];
    }
    param_1 = param_1 + 0xc;
    in_EAX = in_EAX + 0xc;
  } while( true );
}
