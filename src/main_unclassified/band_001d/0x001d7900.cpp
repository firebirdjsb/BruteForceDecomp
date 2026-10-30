/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC45E8F8D7279AE637E33B361CDDA3E406FD02A07BDFC5F1811724F838C5F2A5
 * Entry: 0x001d7900, Ghidra index: 6405, label: FUN_001d7900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d7900(undefined4 *param_1,undefined4 *param_2)

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
    in_EAX[10] = param_1[10];
    param_1 = param_1 + 0xb;
    in_EAX = in_EAX + 0xb;
  } while( true );
}
