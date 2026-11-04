/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9E68012143532535841C862707635035869CAB4371B48C09E151FB84274319B
 * Entry: 0x001d0640, Ghidra index: 6179, label: FUN_001d0640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra callee 0x001C9990 has no explicit source parameters.
 * Implicit guest registers and C++ object ABI remain ABI_UNVERIFIED. */
extern void FUN_001c9990(void);
int FUN_001d0640(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x5c) {
    FUN_001c9990();
    in_EAX = in_EAX + 0x5c;
  }
  return in_EAX;
}
