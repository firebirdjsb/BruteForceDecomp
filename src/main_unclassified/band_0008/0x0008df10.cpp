/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9F7EED70E9ABD80DA3E9296302782F9B460989316DC522F1A760D08B2E533EA
 * Entry: 0x0008df10, Ghidra index: 1724, label: FUN_0008df10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original guest32 heap-free dispatch at 0x002EA018; direct caller
 * stack/register preservation and guest-memory ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0008df10(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x2c));
  }
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  if ((undefined4 *)(unaff_ESI + 4) != (undefined4 *)0x0) {
    *(undefined4 *)(unaff_ESI + 4) = 0;
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *(undefined4 *)(unaff_ESI + 0xc) = 0;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
  }
  return;
}
