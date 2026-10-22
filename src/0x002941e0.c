/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0FAA5095BEDAB265EB9B202BC031D381113A157DEB4A6B1845B6B55CD44922F
 * Entry: 0x002941e0, Ghidra index: 9282, label: FUN_002941e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002941e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar2 = 0;
    *(undefined4 *)(unaff_EDI + 4) = 1;
    if (0 < *(int *)(unaff_EDI + 0xc)) {
      iVar1 = 0;
      do {
        iVar3 = *(int *)(unaff_EDI + 8) + iVar1;
        if (*(int *)(*(int *)(unaff_EDI + 8) + iVar1) != -6) {
          FUN_00294270(iVar3);
          FUN_00294270(iVar3 + 0x10);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar2 < *(int *)(unaff_EDI + 0xc));
    }
  }
  return;
}
