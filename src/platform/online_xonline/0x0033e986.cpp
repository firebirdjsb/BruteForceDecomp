/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10AD1A7C5BE12027D1444F9C3FDEF1A83802311A473E0FAD71EBE9FAA65DFC1C
 * Entry: 0x0033e986, Ghidra index: 12616, label: FUN_0033e986
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033e986(int param_1,uint param_2)

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
