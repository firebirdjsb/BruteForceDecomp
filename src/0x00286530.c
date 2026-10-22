/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F041DB02652ED81D7B8B6A5140D3114D987E29215F210C25B11C80DF832542E
 * Entry: 0x00286530, Ghidra index: 9080, label: FUN_00286530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00286530(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x14);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
  }
  if (piVar2 != piVar1) {
    do {
      if (piVar2[2] == param_1) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
    if ((piVar2 != piVar1) && (piVar2 != *(int **)(in_ECX + 0x14))) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar2);
    }
  }
  return;
}
