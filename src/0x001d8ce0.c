/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8BE99A8EC15D805E9758702BB7C9892B1B6317BE2BF0AE81FD93CD99AD00AA3
 * Entry: 0x001d8ce0, Ghidra index: 6444, label: FUN_001d8ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001d8ce0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x344) {
    FUN_001d2af0(param_1);
    in_EAX = in_EAX + 0x344;
  }
  return in_EAX;
}
