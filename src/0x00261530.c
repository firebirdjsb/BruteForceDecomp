/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FDC6C1E6C180B67A31B926A48963CF88F8F08E3723A8670E9A12025438013BD
 * Entry: 0x00261530, Ghidra index: 8636, label: FUN_00261530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00261530(int param_1)

{
  int in_EAX;
  int *piVar1;
  
  if (in_EAX != param_1) {
    piVar1 = (int *)(in_EAX + 8);
    do {
      FUN_0023c430(in_EAX);
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      in_EAX = in_EAX + 0x18;
      piVar1 = piVar1 + 6;
    } while (in_EAX != param_1);
  }
  return;
}
