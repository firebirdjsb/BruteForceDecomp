/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D8750B2523F7BDBC5C0B09B8CB8F6EFB3E3FEF33A7F388AD978C6FA978FB2AD
 * Entry: 0x0005b950, Ghidra index: 926, label: FUN_0005b950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005b950(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    if (*(int *)(unaff_ESI + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = **(int **)(unaff_ESI + 8);
    }
    for (iVar1 = *(int *)(iVar1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_000db3e0(iVar1);
      if (*(int *)(unaff_ESI + 4) == 0) {
        return;
      }
      if (*(int *)(unaff_ESI + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = **(int **)(unaff_ESI + 8);
      }
    }
  }
  return;
}
