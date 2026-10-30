/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D3B28EE3BBC4A8E3C202B94CF795836A4017B34F3C4BD7795527179EFE90486
 * Entry: 0x002815d0, Ghidra index: 9044, label: FUN_002815d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002815d0(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int unaff_EBX;
  int unaff_EDI;
  
  iVar2 = in_EDX * 0xc;
  *(undefined4 *)(unaff_EDI * 0xc + *(int *)(unaff_EBX + 0x2824)) =
       *(undefined4 *)(*(int *)(unaff_EBX + 0x2824) + iVar2);
  iVar1 = *(int *)(unaff_EBX + 0x2824) +
          *(int *)(unaff_EDI * 0xc + *(int *)(unaff_EBX + 0x2824)) * 0xc;
  if (*(int *)(iVar1 + 8) == in_EDX) {
    *(int *)(iVar1 + 8) = unaff_EDI;
    *(undefined4 *)(iVar2 + *(int *)(unaff_EBX + 0x2824)) = 0;
    return;
  }
  *(int *)(iVar1 + 4) = unaff_EDI;
  *(undefined4 *)(iVar2 + *(int *)(unaff_EBX + 0x2824)) = 0;
  return;
}
