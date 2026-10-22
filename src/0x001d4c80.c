/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A57947A818D524F9D9110B72167A6EFF8A771CA64037022EACF2659AEB73D9D
 * Entry: 0x001d4c80, Ghidra index: 6333, label: FUN_001d4c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d4c80(int param_1)

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
    uVar2 = (*(int *)(param_1 + 8) - iVar1) / 0x2c;
    if (uVar2 != 0) {
      iVar3 = *(int *)(in_EAX + 4);
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 8) - iVar3) / 0x2c;
      }
      if (uVar2 <= uVar6) {
        iVar3 = FUN_001d7900(iVar1,*(int *)(param_1 + 8),param_1);
        iVar1 = *(int *)(in_EAX + 8);
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0x2c) {
          FUN_0006a470();
        }
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c) * 0x2c + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 0xc) - iVar3) / 0x2c;
      }
      if (uVar2 <= uVar6) {
        iVar4 = FUN_00240d60();
        iVar4 = iVar4 * 0x2c + iVar1;
        FUN_001dca30(iVar1,iVar4,iVar3);
        uVar5 = FUN_001d1900(in_EAX,iVar4,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_EAX + 8) = uVar5;
        return;
      }
      FUN_0006a350(in_EAX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_0006a090();
  return;
}
