/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D69ABBD458BD7FC8AEC5BB9CD9257DC8CAFECA393A741B913436DC857805788
 * Entry: 0x002da910, Ghidra index: 10271, label: FUN_002da910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002da910(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = *(int *)(*(int *)(unaff_ESI + 0x34) + -4 + *(int *)(unaff_ESI + 0x44) * 4);
  if (*(int *)(unaff_ESI + 0x68) == 0) {
    iVar1 = 0;
    if (0 < *(int *)(unaff_ESI + 0x44)) {
      do {
        *(undefined4 *)
         (*(int *)(unaff_ESI + 0x74) +
         (*(int *)(unaff_ESI + 0x90) * *(int *)(unaff_ESI + 0x94) + iVar1) * 4) =
             *(undefined4 *)
              (*(int *)(unaff_ESI + 0x10) +
              (*(int *)(unaff_ESI + 0x40) * iVar2 + *(int *)(*(int *)(unaff_ESI + 0x34) + iVar1 * 4)
              ) * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_ESI + 0x44));
    }
    iVar1 = 0;
    if (*(int *)(unaff_ESI + 0x44) != 1 && -1 < *(int *)(unaff_ESI + 0x44) + -1) {
      do {
        *(undefined4 *)(*(int *)(unaff_ESI + 0x80) + iVar1 * 4) =
             *(undefined4 *)
              (*(int *)(unaff_ESI + 0x10) +
              (*(int *)(*(int *)(unaff_ESI + 0x34) + iVar1 * 4) * *(int *)(unaff_ESI + 0x40) + iVar2
              ) * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_ESI + 0x44) + -1);
    }
    iVar2 = FUN_002dbc30();
    if (iVar2 != 1) {
      *(undefined4 *)(unaff_ESI + 0x68) = 2;
      return;
    }
  }
  else {
    *(int *)(unaff_ESI + 0x94) = *(int *)(unaff_ESI + 0x94) + 1;
  }
  return;
}
