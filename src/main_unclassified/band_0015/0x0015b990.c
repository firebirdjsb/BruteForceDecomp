/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF0BA43A6A6B5B1794D052C6AA78CB1A5189219DE33CA449FFA9C09A9C851560
 * Entry: 0x0015b990, Ghidra index: 4534, label: FUN_0015b990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015b990(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x20));
  }
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  if (*(int *)(unaff_ESI + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x10));
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  return;
}
