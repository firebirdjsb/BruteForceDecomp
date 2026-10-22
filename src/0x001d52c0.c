/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86371447FC0D83AAED941C646897C3EA458517CF565ADAEFA4086CAE31EB30B5
 * Entry: 0x001d52c0, Ghidra index: 6337, label: FUN_001d52c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d52c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (in_EAX == param_1) {
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44;
    if (uVar2 != 0) {
      iVar1 = *(int *)(in_EAX + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 8) - iVar1) / 0x44;
      }
      if (uVar2 <= uVar5) {
        uVar3 = FUN_001d7e60(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),uVar2);
        FUN_00132c50(uVar3,*(undefined4 *)(in_EAX + 8));
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44) * 0x44 + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 0xc) - iVar1) / 0x44;
      }
      if (uVar2 <= uVar5) {
        iVar4 = FUN_000e0c50();
        iVar4 = iVar4 * 0x44 + *(int *)(param_1 + 4);
        FUN_001dcae0(*(int *)(param_1 + 4),iVar4,iVar1);
        uVar3 = FUN_001de220(iVar4,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_EAX + 8) = uVar3;
        return;
      }
      FUN_00132c50(iVar1,*(undefined4 *)(in_EAX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_00132bf0();
  return;
}
