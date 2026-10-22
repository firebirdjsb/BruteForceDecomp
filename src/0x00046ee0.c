/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4125D4C075E683B58C86EBCE2EA0CB53EE80A9A3AB6BD4641C8646D5E7082C7E
 * Entry: 0x00046ee0, Ghidra index: 553, label: FUN_00046ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00046ee0(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  undefined1 uVar4;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(unaff_ESI + 4);
  iVar1 = *(int *)(unaff_ESI + 8);
  uVar4 = 0;
  do {
    if (iVar2 == iVar1) {
LAB_00046f00:
      for (iVar3 = 2; (iVar2 != iVar1 && (iVar3 != 0)); iVar3 = iVar3 + -1) {
        iVar2 = iVar2 + 0x18;
      }
      FUN_00047640(unaff_ESI,local_4,iVar2,iVar1);
      return uVar4;
    }
    if (in_EDX == *(int *)(iVar2 + 0x14)) {
      uVar4 = 1;
      goto LAB_00046f00;
    }
    iVar2 = iVar2 + 0x18;
  } while( true );
}
