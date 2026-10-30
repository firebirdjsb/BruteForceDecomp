/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03792039CDB083E5929B15EE5524EAAD35B607C1E22F977F30B53FF70EC6ACA8
 * Entry: 0x001d4970, Ghidra index: 6331, label: FUN_001d4970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d4970(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (in_EAX == param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar2 = (*(int *)(param_1 + 8) - iVar1) / 0x50;
    if (uVar2 != 0) {
      iVar3 = *(int *)(in_EAX + 4);
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 8) - iVar3) / 0x50;
      }
      if (uVar2 <= uVar5) {
        iVar3 = FUN_001dc9e0(iVar1,*(int *)(param_1 + 8));
        iVar1 = *(int *)(in_EAX + 8);
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0x50) {
          FUN_0006a3d0();
        }
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50) * 0x50 + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 0xc) - iVar3) / 0x50;
      }
      if (uVar2 <= uVar5) {
        iVar3 = FUN_002421c0();
        iVar3 = iVar3 * 0x50 + iVar1;
        FUN_001dc9e0(iVar1,iVar3);
        uVar4 = FUN_001e01c0(iVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_EAX + 8) = uVar4;
        return;
      }
      FUN_0006a310(in_EAX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_0006a010();
  return;
}
