/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 065967D57EEF8A4E31F84D835575A1990A0724C25314AD814F9537DD11B29460
 * Entry: 0x0005be20, Ghidra index: 935, label: FUN_0005be20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005be20(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EDI;
  
  uVar1 = *(uint *)(in_EAX + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 != 0) goto LAB_0005be34;
    iVar3 = 0;
    while (*(int *)(iVar3 + 4) != unaff_EDI) {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        return;
      }
LAB_0005be34:
      iVar3 = *(int *)(*(int *)(in_EAX + 8) + uVar2 * 4);
    }
    if (uVar2 != 0xffffffff) {
      if (uVar2 < uVar1) {
        iVar3 = *(int *)(*(int *)(in_EAX + 8) + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x14) != unaff_EBX) {
        FUN_0008f6a0();
      }
    }
  }
  return;
}
