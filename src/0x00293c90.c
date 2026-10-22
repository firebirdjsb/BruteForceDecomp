/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 556279184343BEC8CB8C21FE76ECCACB94FCAA9D9CC039DBD8111D97FCDF430E
 * Entry: 0x00293c90, Ghidra index: 9269, label: FUN_00293c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00293c90(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  uVar3 = FUN_00293c30();
  iVar5 = (int)uVar3 % iVar1;
  iVar2 = *(int *)(in_EAX + 8);
  while( true ) {
    piVar6 = (int *)(iVar5 * 0x20 + iVar2);
    iVar4 = *piVar6;
    if (iVar4 == *param_1) {
      iVar4 = FUN_002955a0();
      bVar7 = iVar4 == 0;
    }
    else {
      bVar7 = iVar4 != -6;
    }
    if (!bVar7) break;
    iVar5 = iVar5 + 1 + (iVar1 - 2U & uVar3);
    if (iVar1 <= iVar5) {
      iVar5 = iVar5 - iVar1;
    }
  }
  return piVar6;
}
