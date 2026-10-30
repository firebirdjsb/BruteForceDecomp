/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 055450E1067803C4BC4C69C59829A3E8EBEA65E3481B1EF5C08983FF4801CBC7
 * Entry: 0x0024a7b0, Ghidra index: 8216, label: FUN_0024a7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Free-thunk single guest DWORD is known; full original call ABI is not. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0024a7b0(int param_1)

{
  int in_EAX;
  int *piVar1;
  
  if (in_EAX != param_1) {
    piVar1 = (int *)(in_EAX + 0x44);
    do {
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      in_EAX = in_EAX + 0x50;
      piVar1 = piVar1 + 0x14;
    } while (in_EAX != param_1);
  }
  return;
}
