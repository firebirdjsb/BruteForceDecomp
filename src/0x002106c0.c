/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D3B819C9CEA64F2C773CE83FE658089FAF1382F76023903115CC22AA67B1059
 * Entry: 0x002106c0, Ghidra index: 7424, label: FUN_002106c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002106c0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_34 [52];
  
  iVar4 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x80) + 0xb74) + 0x5c);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0xc) != 3) {
      if (*(int *)(iVar4 + 0xc) != -1) {
        FUN_000a61d0(iVar4,unaff_EDI);
      }
      *(undefined4 *)(iVar4 + 0xc) = 3;
      FUN_000a54f0(iVar4,unaff_EDI);
    }
    iVar1 = *(int *)(unaff_EDI + 0x8c);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1 + 0x48;
    }
    puVar5 = local_34;
    uVar3 = 0;
    (**(code **)(*(int *)(iVar1 + 0x48) + 0x14))(0,iVar4);
    FUN_0023d040(iVar2,uVar3,iVar4,unaff_EDI,puVar5);
  }
  return;
}
