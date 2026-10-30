/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F46413B5A58A46374035B6DB35606689FB5D1F74B37E16C6999C54F6069B9375
 * Entry: 0x001e0760, Ghidra index: 6708, label: FUN_001e0760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e0760(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *in_EAX = *param_1;
    *(undefined1 *)(in_EAX + 1) = *(undefined1 *)(param_1 + 1);
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX = in_EAX + 4;
  }
  return;
}
