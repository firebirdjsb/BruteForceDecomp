/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5FBA4132A4B96CCD4448A6BE641B5224488AC674C2877415AF0E50BB157D39F
 * Entry: 0x001ef8f0, Ghidra index: 6968, label: FUN_001ef8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ef8f0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1c) == 1) {
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    FUN_002e7280(1);
  }
  *(undefined4 *)(unaff_ESI + 0xa4) = 0x80000013;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  if ((*(int *)(unaff_ESI + 0x18) != 0) && (*(int *)(*(int *)(unaff_ESI + 0x18) + 0x4898) == 5)) {
    FUN_002e7070(0);
  }
  FUN_002e7070(1);
  return;
}
