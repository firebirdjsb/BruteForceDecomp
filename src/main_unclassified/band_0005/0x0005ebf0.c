/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEBA69C8589306742210940E1415295667FFEC4D57C16303CC2B663D0D49640E
 * Entry: 0x0005ebf0, Ghidra index: 995, label: FUN_0005ebf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0005ec40) */

void FUN_0005ebf0(void)

{
  int unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) != 0) {
    FUN_0008f6a0(*(int *)(unaff_EDI + 4));
  }
  if (*(int *)(unaff_EDI + 4) != *(int *)(unaff_EBX + 4)) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 4));
  }
  if (*(int *)(unaff_EBX + 4) != 0) {
    FUN_0008f6a0(0);
  }
  return;
}
