/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB673243D69EC433A86B048EDCA514E339AC38949917C28776562F776E2319CE
 * Entry: 0x0024bbb0, Ghidra index: 8269, label: FUN_0024bbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; Xbox ABI_UNVERIFIED. */
extern int FUN_00248340(int);
void FUN_0024bbb0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI != 0) {
    FUN_00248340(unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(unaff_EDI + 0x10);
  }
  return;
}
