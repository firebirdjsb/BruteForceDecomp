/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9668D5D5227B224EC6DA01A48E5775D13E7EF8C43715E2304E94BA06DBD2513B
 * Entry: 0x00144b90, Ghidra index: 4171, label: FUN_00144b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00144b90(int param_1)

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
      in_EAX = in_EAX + 0x1c;
      piVar1 = piVar1 + 7;
    } while (in_EAX != param_1);
  }
  return;
}
