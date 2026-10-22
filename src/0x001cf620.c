/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F33FC9E28AE0D030E73344BBC891B777A7221C28E2165C9B3124019EC691FC5
 * Entry: 0x001cf620, Ghidra index: 6120, label: FUN_001cf620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cf620(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_001d4590();
    in_EAX = in_EAX + 0x10;
  }
  return in_EAX;
}
