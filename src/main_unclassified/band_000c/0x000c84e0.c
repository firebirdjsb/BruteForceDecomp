/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C0FA6A1E915C6F4409D71A2B8FE26085520831F05597829B4E964B737E29561
 * Entry: 0x000c84e0, Ghidra index: 2462, label: FUN_000c84e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c84e0(void)

{
  int iVar1;
  char cVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  if ((((unaff_EDI != 0) && (*(int *)(unaff_EDI + 0x59c) != 0)) &&
      (cVar2 = FUN_0005c0a0(), cVar2 != '\0')) &&
     ((iVar1 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x150), 0 < iVar1 && (iVar1 < 5)))) {
    if (*(int *)(unaff_EBX + 0x34 + iVar1 * 8) != 0) {
      FUN_000c8530();
    }
    if (*(int *)(unaff_EBX + 0x34 + iVar1 * 8) != unaff_EDI) {
      FUN_0008f6a0();
    }
  }
  return;
}
