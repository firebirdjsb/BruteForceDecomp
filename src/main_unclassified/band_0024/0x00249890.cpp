/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75B7BEC3CB2A9388935C55BA50A743BF91CA1CAEBC087DD2B4E9E8974EB3BAB7
 * Entry: 0x00249890, Ghidra index: 8190, label: FUN_00249890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00249890(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_00249a90(in_EAX,param_1);
    in_EAX = in_EAX + 0x2c;
  }
  return in_EAX;
}
