/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44AB29887061E90B1B2DA1E007A210B5308424C5A316F58103252C34E76C51FC
 * Entry: 0x001d4e20, Ghidra index: 6334, label: FUN_001d4e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d4e20(int param_1)

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
    uVar2 = (*(int *)(param_1 + 8) - iVar1) / 0x28;
    if (uVar2 != 0) {
      iVar3 = *(int *)(in_EAX + 4);
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 8) - iVar3) / 0x28;
      }
      if (uVar2 <= uVar6) {
        iVar3 = FUN_001e0910(iVar1,*(int *)(param_1 + 8),param_1);
        iVar1 = *(int *)(in_EAX + 8);
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0x28) {
          FUN_0006a470();
        }
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             *(int *)(in_EAX + 4) + ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28) * 0x28;
        return;
      }
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 0xc) - iVar3) / 0x28;
      }
      if (uVar2 <= uVar6) {
        iVar4 = FUN_0008ebb0();
        iVar4 = iVar1 + iVar4 * 0x28;
        FUN_001dca50(iVar1,iVar4,iVar3);
        uVar5 = FUN_001e0370(iVar4,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_EAX + 8) = uVar5;
        return;
      }
      FUN_0006a370(in_EAX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_0006a0d0();
  return;
}
