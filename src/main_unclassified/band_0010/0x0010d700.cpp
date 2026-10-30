/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D06EFCCC8A421B03620C5AC8B493F5C8B2071091580CA85C6668F0943C1FD25
 * Entry: 0x0010d700, Ghidra index: 3496, label: FUN_0010d700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0010d700(char param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = FUN_0010d600();
  uVar2 = *(uint *)(in_EAX + 0x84);
  iVar3 = *(int *)(in_EAX + 0x88);
  iVar1 = (uint)(param_1 != '\0') * 2 + -1;
  uVar6 = iVar1 + uVar2;
  if ((int)uVar6 < 0) {
    uVar6 = *(int *)(in_EAX + 0x80) - 1;
  }
  iVar4 = *(int *)(in_EAX + 0x80);
  if (iVar4 <= (int)uVar6) {
    uVar6 = 0;
  }
  if (uVar6 != uVar2) {
    do {
      if ((((-1 < (int)uVar6) && ((int)uVar6 < iVar4)) && (-1 < iVar3)) &&
         (((iVar3 < *(int *)(in_EAX + 0x7c) && (iVar7 = iVar4 * iVar3 + uVar6, iVar7 != -1)) &&
          ((iVar7 = *(int *)(*(int *)(in_EAX + 0xac) + iVar7 * 4), iVar7 != 0 && (iVar7 != iVar5))))
         )) {
        uVar6 = FUN_0010d660();
        return uVar6;
      }
      uVar6 = iVar1 + uVar6;
      if ((int)uVar6 < 0) {
        uVar6 = iVar4 - 1;
      }
      if (iVar4 <= (int)uVar6) {
        uVar6 = 0;
      }
    } while (uVar6 != uVar2);
    return uVar6 & 0xffffff00;
  }
  return uVar6 & 0xffffff00;
}
