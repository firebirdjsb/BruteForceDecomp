/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8C5B42B105BCDA56E20F4D440A020EEE0D5E56897323548B8C3827F8E83BC90
 * Entry: 0x001d6330, Ghidra index: 6349, label: FUN_001d6330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Reuse original one-DWORD free-thunk interface; caller ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_001d6330(int param_1)

{
  int in_EAX;
  uint *puVar1;
  
  if (in_EAX != param_1) {
    puVar1 = (uint *)(in_EAX + 0x1c);
    do {
      if (7 < *puVar1) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar1[-5]);
      }
      *puVar1 = 7;
      puVar1[-1] = 0;
      *(undefined2 *)(puVar1 + -5) = 0;
      in_EAX = in_EAX + 0x20;
      puVar1 = puVar1 + 8;
    } while (in_EAX != param_1);
  }
  return;
}
