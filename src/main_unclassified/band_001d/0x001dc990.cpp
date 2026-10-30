/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2BD1AF348B98F175B2A63FA9F59B96AA07F3982594213E7E084E0FD65E03423
 * Entry: 0x001dc990, Ghidra index: 6567, label: FUN_001dc990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc990(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *in_EAX = *param_1;
    in_EAX = in_EAX + 1;
  }
  return;
}
