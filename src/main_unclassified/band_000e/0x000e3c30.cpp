/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCC02B2D4C65901C69A750AD32DB6FAF9EB66CBD4219939D6A72DD0A6B94A60B
 * Entry: 0x000e3c30, Ghidra index: 2828, label: FUN_000e3c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3c30(int param_1)

{
  int in_EAX;
  int *piVar1;
  
  if (in_EAX != param_1) {
    piVar1 = (int *)(in_EAX + 8);
    do {
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      in_EAX = in_EAX + 0x14;
      piVar1 = piVar1 + 5;
    } while (in_EAX != param_1);
  }
  return;
}
