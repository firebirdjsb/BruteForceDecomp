/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E934FE160786272A3A255B1B213981E889B91C8A0CED887DFFF6D456839D488
 * Entry: 0x0005ebc0, Ghidra index: 994, label: FUN_0005ebc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005ebc0(int param_1,int param_2,int *param_3)

{
  int *in_EAX;
  
  if (param_1 != param_2) {
    do {
      if (*(int *)(param_1 + 4) == *param_3) break;
      param_1 = param_1 + 8;
    } while (param_1 != param_2);
  }
  *in_EAX = param_1;
  return;
}
