/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EF0738D313382F4D87EFD05D43939BF8030A6FA7421FF7A8D4B04176D979E8A
 * Entry: 0x001d8a50, Ghidra index: 6437, label: FUN_001d8a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001d8a50(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x88) {
    FUN_001d2840();
    in_EAX = in_EAX + 0x88;
  }
  return in_EAX;
}
