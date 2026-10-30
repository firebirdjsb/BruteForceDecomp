/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 659885E046E2CB2F23BC344A17D881856C486D201D562189D4967AEA1186EC5C
 * Entry: 0x001d8830, Ghidra index: 6433, label: FUN_001d8830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001d8830(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x144) {
    FUN_001d2580();
    FUN_0001f4f0(param_1 + 0x128,0,0xffffffff);
    in_EAX = in_EAX + 0x144;
  }
  return in_EAX;
}
