/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1DF610EB4A570EC0D4D49A51992093EE853FDABE416BE1121AAA953697B5053
 * Entry: 0x00294150, Ghidra index: 9280, label: FUN_00294150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00294150(void)

{
  int iVar1;
  int unaff_ESI;
  int iVar2;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    *(undefined4 *)(unaff_ESI + 4) = 1;
    if (*(int *)(*(int *)(unaff_ESI + 0x18) + 4) == 0) {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 4) = 1;
    }
    iVar2 = 0;
    if (0 < *(int *)(unaff_ESI + 0xc)) {
      iVar1 = 0;
      do {
        FUN_00294270(*(int *)(unaff_ESI + 8) + iVar1);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x10;
      } while (iVar2 < *(int *)(unaff_ESI + 0xc));
    }
  }
  return;
}
