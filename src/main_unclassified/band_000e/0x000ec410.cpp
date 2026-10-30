/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21E11AB3CB803BB03E8FDD942BC3C58B2BA62E0D77436741FA723B760E73035B
 * Entry: 0x000ec410, Ghidra index: 2926, label: FUN_000ec410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec410(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x78) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_ESI + 0x70) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_ESI + 0x68) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_ESI + 0x60) != 0) {
    FUN_0008f6e0();
  }
  FUN_00059bf0();
  return;
}
