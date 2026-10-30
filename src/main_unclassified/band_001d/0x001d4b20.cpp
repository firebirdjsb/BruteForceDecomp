/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D7BC7892BD590BC50D9C03C8FF2A14767AF1D178E737116535A77489C628B90
 * Entry: 0x001d4b20, Ghidra index: 6332, label: FUN_001d4b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d4b20(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (in_EAX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    uVar3 = (*(int *)(param_1 + 8) - iVar2) / 0x38;
    if (uVar3 != 0) {
      iVar1 = *(int *)(in_EAX + 4);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 8) - iVar1) / 0x38;
      }
      if (uVar6 < uVar3) {
        uVar3 = FUN_0023c610();
        uVar6 = FUN_00240d90();
        if (uVar3 < uVar6) {
          FUN_0006a330(in_EAX);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
        }
        iVar4 = FUN_00240d90();
        iVar4 = iVar4 * 0x38 + iVar2;
        FUN_001dca10(iVar2,iVar4,iVar1);
        uVar5 = FUN_001d18e0(in_EAX,iVar4,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_EAX + 8) = uVar5;
        return;
      }
      iVar1 = FUN_001e0860(iVar2,*(int *)(param_1 + 8),param_1);
      iVar2 = *(int *)(in_EAX + 8);
      for (; iVar1 != iVar2; iVar1 = iVar1 + 0x38) {
        FUN_0006a540();
      }
      iVar2 = FUN_00240d90();
      *(int *)(in_EAX + 8) = iVar2 * 0x38 + *(int *)(in_EAX + 4);
      return;
    }
  }
  FUN_0006a050();
  return;
}
