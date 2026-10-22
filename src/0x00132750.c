/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02612D7ABBF323CB5CAC631C88C442D5B7FED38421398D15CFC4E156A73D7082
 * Entry: 0x00132750, Ghidra index: 3850, label: FUN_00132750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00132750(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    param_1[3] = in_ECX[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(in_ECX + 4);
  }
  return;
}
