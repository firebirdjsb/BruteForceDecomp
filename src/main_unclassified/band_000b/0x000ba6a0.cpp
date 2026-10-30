/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B88AA83B847A1A9F8B34E7E538E90CB1854021262CB3737E1F2DF4541733CEE
 * Entry: 0x000ba6a0, Ghidra index: 2263, label: FUN_000ba6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000ba6a0(void)

{
  int *piVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI == *(int **)(unaff_EDI + 0x20)) {
    return 0;
  }
  piVar1 = *(int **)(unaff_EDI + 0x20);
  if (piVar1 != unaff_ESI) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_EDI + 0x20) = 0;
    }
    *(int **)(unaff_EDI + 0x20) = unaff_ESI;
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 4))();
    }
  }
  return 1;
}
