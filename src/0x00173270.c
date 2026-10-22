/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8ABC5598A26D8256E6EB5BB66A059DD8F5EFE3D2077AC4BA83921C273F849C2B
 * Entry: 0x00173270, Ghidra index: 4877, label: FUN_00173270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00173270(int param_1)

{
  int iVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    iVar1 = *(int *)(*(int *)(unaff_EDI + 8) + 0xbf0);
    if (*(int *)(iVar1 + 0x8c) != unaff_EDI) {
      FUN_0008f6a0();
    }
    *(undefined1 *)(iVar1 + 200) = 1;
    if (param_1 != -1) {
      *(int *)(unaff_EDI + 0xd8) = param_1;
    }
  }
  return;
}
