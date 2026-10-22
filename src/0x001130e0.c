/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F953931C31DC526601210479131A479E1C94445FD5963580F58F33A160075E72
 * Entry: 0x001130e0, Ghidra index: 3564, label: FUN_001130e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001130e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  int iVar3;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)(unaff_EDI + 4);
  iVar2 = unaff_EDI - (int)unaff_EBX;
  iVar3 = 2;
  do {
    *(undefined4 *)(iVar2 + (int)unaff_EBX) = *unaff_EBX;
    *puVar1 = unaff_EBX[1];
    unaff_EBX = unaff_EBX + 2;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_001cca00(unaff_EDI + 0x10);
  return;
}
