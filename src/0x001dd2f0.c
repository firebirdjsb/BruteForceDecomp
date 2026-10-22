/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9822F50E0FC17D21B90D8E6624966E0F64808D988653F17EEEC54D372A61C5E2
 * Entry: 0x001dd2f0, Ghidra index: 6623, label: FUN_001dd2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd2f0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_EDX;
    in_EAX[7] = 7;
    in_EAX[6] = 0;
    *(undefined2 *)(in_EAX + 2) = 0;
    FUN_00087940(in_EAX + 1,0,0xffffffff);
  }
  return;
}
