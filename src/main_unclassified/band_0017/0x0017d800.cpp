/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FEFF3E4C54A249035C9454216A301D3E5C49A4F0D43E2237A0525A2E071EBF7
 * Entry: 0x0017d800, Ghidra index: 5081, label: FUN_0017d800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original guest32 free-dispatch argument; caller ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0017d800(int param_1)

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
      in_EAX = in_EAX + 0x18;
      piVar1 = piVar1 + 6;
    } while (in_EAX != param_1);
  }
  return;
}
