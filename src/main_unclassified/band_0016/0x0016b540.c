/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83B41140955E5A9F9FDCBFC964804A28C5C759C312974EC444CED17CFD4AC325
 * Entry: 0x0016b540, Ghidra index: 4775, label: FUN_0016b540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016b540(void)

{
  undefined4 in_EAX;
  int unaff_ESI;
  
  FUN_0016d0d0(in_EAX);
  FUN_0016dbe0(*(int *)(unaff_ESI + 4),*(int *)(unaff_ESI + 8),
               (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x14);
  if (*(int *)(unaff_ESI + 4) == 0) {
    *(undefined4 *)(unaff_ESI + 0x10) = 0xfffffffe;
    *(undefined1 *)(unaff_ESI + 0x24) = 0;
    return;
  }
  *(int *)(unaff_ESI + 0x10) = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x14 + -2;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
  return;
}
