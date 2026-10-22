/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48D95F5FC2DFC7CE80144EF7AFC5EC0C489DCCC007F229E361FA99E862972332
 * Entry: 0x0033e9e5, Ghidra index: 12619, label: thunk_FUN_0033e986
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void thunk_FUN_0033e986(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = 0x21882000;
    }
    else {
      param_2 = param_2 | 0x21880000;
    }
    XAPILIB__XMemFree(param_1,param_2);
  }
  return;
}
