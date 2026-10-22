/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 816143F8032C67EA1293C2BC185DEAA2FEE54CFE988C0433765FA36E9F261698
 * Entry: 0x001cecd0, Ghidra index: 6073, label: FUN_001cecd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cecd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *in_ECX;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(in_ECX + 1);
    param_1[2] = in_ECX[2];
    param_1[3] = in_ECX[3];
  }
  return;
}
