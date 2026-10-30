/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 482F8C6966A4CDD8E5111E4EFF24430ED9579A8845CF9E15F702F2FD6487AB81
 * Entry: 0x001edb00, Ghidra index: 6941, label: FUN_001edb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001edb00(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    FUN_001ed400();
    FUN_001ed440();
    *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x30) = 60000;
    *(undefined4 *)(unaff_ESI + 0x1c) = 3;
  }
  return;
}
