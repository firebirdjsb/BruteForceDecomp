/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BDACDB8BFF7C1398AAA93AA70CDEDE06D339EAC94A0FE5CB45DC388E4BF661C
 * Entry: 0x0017d620, Ghidra index: 5077, label: FUN_0017d620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EDX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *in_EDX;
    param_1[1] = in_EDX[1];
    param_1[2] = in_EDX[2];
    param_1[3] = in_EDX[3];
  }
  return;
}
