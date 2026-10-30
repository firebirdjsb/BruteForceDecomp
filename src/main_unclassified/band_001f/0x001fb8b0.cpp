/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C5B1ACCB1D8BE235808DD108E6BC09B8FFFA27D1CAA60765DFA70DF17D31A5F
 * Entry: 0x001fb8b0, Ghidra index: 7119, label: FUN_001fb8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001fb8b0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int unaff_ESI;
  
  bVar2 = false;
  bVar3 = false;
  uVar4 = 0;
  do {
    if ((*(int *)(unaff_ESI + 0x10) == 0) ||
       ((uint)(*(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 2) <= uVar4)) {
      if (!bVar2) {
        return 1;
      }
LAB_001fb8ec:
      if (*(char *)(unaff_ESI + 4) == '\0') {
        if (bVar3) {
          return 1;
        }
      }
      else if (!bVar3) {
        return 1;
      }
      return 0;
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x10) + uVar4 * 4);
    if ((iVar1 != 0) && (bVar2 = true, *(int *)(param_1 + 4) == iVar1)) {
      bVar3 = true;
      goto LAB_001fb8ec;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}
