/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64D14AC627AF72F16D34CF406054F151251811B672AF54694087774F948DE260
 * Entry: 0x001e07a0, Ghidra index: 6709, label: FUN_001e07a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e07a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(param_1 + 3);
    in_EAX = in_EAX + 4;
  }
  return;
}
