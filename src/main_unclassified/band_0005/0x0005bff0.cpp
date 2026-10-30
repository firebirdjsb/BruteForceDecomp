/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46D5705B32769B8255C9B08203F627694E227DE56540A6ED343CBA5D7C194474
 * Entry: 0x0005bff0, Ghidra index: 939, label: FUN_0005bff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005bff0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    FUN_0005b5d0(1);
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
  }
  if (*(int *)(unaff_ESI + 0x14) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_ESI + 0xc) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_0008f6e0();
    return;
  }
  return;
}
