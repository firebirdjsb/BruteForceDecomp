/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CA6E7CBF02C4DEBA9E5E6EA610782D91984EBD56323F3852A087E78F4D8C2D2
 * Entry: 0x001e0710, Ghidra index: 6707, label: FUN_001e0710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001e0710(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    FUN_001d3530();
    FUN_0010bc40();
    in_EAX = in_EAX + 0xc;
  }
  return in_EAX;
}
