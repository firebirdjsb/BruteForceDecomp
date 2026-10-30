/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83AC04E709D458A14AFDF08E8753D5F04B0B69EC17EDF29A678A5F4A8A031AD8
 * Entry: 0x00100f60, Ghidra index: 3229, label: FUN_00100f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00100f60(void)

{
  undefined1 uVar1;
  int unaff_ESI;
  
  uVar1 = 0;
  if (*(int **)(unaff_ESI + 0x94) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x94) + 0x24))();
    if (*(int **)(unaff_ESI + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_ESI + 0xac) + 0xc))();
    }
  }
  return uVar1;
}
