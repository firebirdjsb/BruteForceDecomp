/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 153A536ABB604B33EC66141340E7BD6DEA34875EDEC5339BE97CFBB71B659EDD
 * Entry: 0x00259c40, Ghidra index: 8511, label: FUN_00259c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00259c40(char param_1)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*in_EAX + 0x3c))();
  if (cVar1 == '\0') {
    return -0x7fffbffb;
  }
  iVar3 = in_EAX[3];
  iVar2 = FUN_002594b0();
  if (-1 < iVar2) {
    if ((param_1 == '\0') || (iVar3 == 0)) {
LAB_00259c8c:
      iVar2 = 0;
    }
    else {
      do {
        if ((*(int *)(iVar3 + 0x18) != 0) || (iVar3 = *(int *)(iVar3 + 0xc), iVar3 == 0))
        goto LAB_00259c8c;
        iVar2 = FUN_002594b0();
      } while (-1 < iVar2);
    }
  }
  return iVar2;
}
