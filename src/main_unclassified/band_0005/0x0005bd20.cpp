/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 462CA057B536B25A633FE7F01946F9E4B51A1F9F8C9DEB5B32E0B513129D8502
 * Entry: 0x0005bd20, Ghidra index: 933, label: FUN_0005bd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005bd20(int param_1)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 4) == 0) goto LAB_0005bd81;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != unaff_EBX)) {
        if (*(int *)(iVar1 + 0x14) == 0) {
          if (unaff_EBX == 0) {
            if (*(int *)(iVar1 + 0xc) != *(int *)(iVar1 + 4)) goto LAB_0005bd75;
          }
          else if (*(int *)(iVar1 + 0xc) != unaff_EBX) {
LAB_0005bd75:
            FUN_0008f6a0();
          }
          *(byte *)(iVar1 + 0x20) = *(byte *)(iVar1 + 0x20) & 0xfe;
        }
        else if (*(int *)(iVar1 + 0xc) != *(int *)(iVar1 + 4)) {
          FUN_0008f6a0(*(int *)(iVar1 + 4));
        }
      }
LAB_0005bd81:
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}
