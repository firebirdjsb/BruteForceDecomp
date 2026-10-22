/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A18DBAAC064FED6F108674452E5BD4B790FAA9528F3F103226020BEF10435AA
 * Entry: 0x001d4fc0, Ghidra index: 6335, label: FUN_001d4fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d4fc0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (in_EAX == param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar2 = (*(int *)(param_1 + 8) - iVar1) / 0x30;
    if (uVar2 != 0) {
      iVar3 = *(int *)(in_EAX + 4);
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 8) - iVar3) / 0x30;
      }
      if (uVar2 <= uVar6) {
        iVar3 = FUN_001e09b0(iVar1,*(int *)(param_1 + 8),param_1);
        iVar1 = *(int *)(in_EAX + 8);
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0x30) {
          FUN_0006a4c0();
        }
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30) * 0x30 + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 0xc) - iVar3) / 0x30;
      }
      if (uVar2 <= uVar6) {
        iVar4 = FUN_001f7510();
        iVar4 = iVar4 * 0x30 + iVar1;
        FUN_001dca70(iVar1,iVar4,iVar3);
        uVar5 = FUN_001d1940(in_EAX,iVar4,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_EAX + 8) = uVar5;
        return;
      }
      FUN_0006a390(in_EAX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_0006a110();
  return;
}
