/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2049B00C4A103CC279CAED3E066D47C90386107F58D87410A6C8677783DDC4C2
 * Entry: 0x000dff80, Ghidra index: 2739, label: FUN_000dff80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6e0(std::uint32_t guest_edx);

void FUN_000dff80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 8) != 0) {
    piVar1 = *(int **)(unaff_EBX + 4);
    if (piVar1 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*piVar1;
    }
    while (piVar2 = piVar3, piVar2 != piVar1) {
      if (piVar2[3] == param_1) {
        piVar3 = (int *)*piVar2;
        if (piVar2 != *(int **)(unaff_EBX + 4)) {
          *(int **)piVar2[1] = (int *)*piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
          if (piVar2[3] != 0) {
            FUN_0008f6e0();
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar2);
        }
      }
      else {
        piVar3 = (int *)*piVar2;
      }
    }
  }
  return;
}
