/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 834F61D38D2B614A09B8325EA0AB186187C7C3C1D39DFBD70FF81C156F806726
 * Entry: 0x000d1a00, Ghidra index: 2606, label: FUN_000d1a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000d1a00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  if (iVar1 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = unaff_ESI[2];
    if (iVar2 < iVar1) {
      iVar2 = (iVar2 - iVar1) + 1 + *unaff_ESI;
    }
    else {
      iVar2 = (iVar2 - iVar1) + 1;
    }
  }
  iVar2 = iVar2 + -1;
  iVar3 = 0;
  if (-1 < iVar2) {
    uVar5 = iVar1 + iVar2;
    while( true ) {
      if (iVar1 == -1) {
        iVar3 = 0;
      }
      else {
        iVar3 = unaff_ESI[2];
        if (iVar3 < iVar1) {
          iVar3 = (iVar3 - iVar1) + 1 + *unaff_ESI;
        }
        else {
          iVar3 = (iVar3 - iVar1) + 1;
        }
      }
      if ((((iVar2 < iVar3) && (-1 < iVar2)) && (-1 < iVar1)) &&
         (uVar4 = *unaff_ESI - 1U & uVar5, uVar4 != 0xffffffff)) {
        iVar3 = unaff_ESI[4] + uVar4 * 0x18;
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 4) == param_1) break;
      iVar2 = iVar2 + -1;
      uVar5 = uVar5 - 1;
      if (iVar2 < 0) {
        return 0;
      }
    }
  }
  return iVar3;
}
