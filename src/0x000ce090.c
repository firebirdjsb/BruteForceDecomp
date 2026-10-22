/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF3EFA2FDA417FFF5F928D04BB897A7272D2258BA27CB86D55E493775480B7E5
 * Entry: 0x000ce090, Ghidra index: 2548, label: FUN_000ce090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ce090(byte param_1)

{
  undefined4 *in_EAX;
  
  FUN_00234470();
  *in_EAX = 0;
  if (in_EAX[4] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[4]);
  }
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
