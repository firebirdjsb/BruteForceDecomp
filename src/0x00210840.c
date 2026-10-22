/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3EDF138DF5F8524B743ADB4B59496C79B11E3FB53E16B67613DD4CBA7FD0BA1
 * Entry: 0x00210840, Ghidra index: 7427, label: FUN_00210840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00210840(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int local_80 [32];
  
  iVar2 = FUN_00210740(local_80);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      piVar1 = local_80 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*piVar1 + 4) = unaff_ESI;
    } while (iVar3 < iVar2);
  }
  return;
}
