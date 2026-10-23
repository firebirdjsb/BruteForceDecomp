/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BADDFC4FFC44895A0A75726BC8C96F98C88C42B072A5727E44BA51C9B579AADE
 * Entry: 0x000d2da0, Ghidra index: 2623, label: FUN_000d2da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d2da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_EAX;
  
  *in_EAX = param_1;
  in_EAX[1] = param_2;
  in_EAX[2] = param_3;
  in_EAX[3] = param_4;
  return;
}
