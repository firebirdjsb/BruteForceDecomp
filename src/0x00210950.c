/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A253F8A947B32EEA712B5607F00F54602216060C9CA9EA8592966BF9A8120C6
 * Entry: 0x00210950, Ghidra index: 7430, label: FUN_00210950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00210950(float param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int local_80 [32];
  
  if (2e-05 <= ABS(*(float *)(unaff_ESI + 0x18) - param_1)) {
    iVar2 = FUN_00210740(local_80);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        piVar1 = local_80 + iVar3;
        iVar3 = iVar3 + 1;
        *(float *)(*piVar1 + 0x1c) = param_1;
      } while (iVar3 < iVar2);
    }
    *(float *)(unaff_ESI + 0x18) = param_1;
  }
  return;
}
