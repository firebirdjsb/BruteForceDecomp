/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1204B2F58A80A6B6D518BF57F961D7DBBAFA6908D6979F8B8B9220BA8C1AD1F5
 * Entry: 0x0005c550, Ghidra index: 952, label: FUN_0005c550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005c550(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  int iVar4;
  int unaff_EDI;
  
  uVar3 = *(uint *)(unaff_EDI + 4);
  iVar1 = 0;
  uVar2 = 0;
  if (uVar3 != 0) {
    if (uVar3 != 0) goto LAB_0005c565;
    iVar4 = 0;
    while( true ) {
      if (*(int *)(iVar4 + 0x14) != 0) {
        if (uVar2 < uVar3) {
          iVar4 = *(int *)(*(int *)(unaff_EDI + 8) + uVar2 * 4);
        }
        else {
          iVar4 = 0;
        }
        *(undefined4 *)(unaff_EBX + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x14);
        iVar1 = iVar1 + 1;
      }
      uVar3 = *(uint *)(unaff_EDI + 4);
      uVar2 = uVar2 + 1;
      if (uVar3 <= uVar2) break;
LAB_0005c565:
      iVar4 = *(int *)(*(int *)(unaff_EDI + 8) + uVar2 * 4);
    }
  }
  return;
}
