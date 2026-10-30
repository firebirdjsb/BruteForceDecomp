/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1C3A7471607BD1D9ED0156007C0612400981E2E15CE9C0B7DA4F2E07CA395C9
 * Entry: 0x001377b0, Ghidra index: 3910, label: FUN_001377b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001377b0(int param_1)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (in_EAX == param_1) {
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
    if (uVar1 != 0) {
      iVar2 = *(int *)(in_EAX + 4);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_EAX + 8) - iVar2) / 0x2c;
      }
      if (uVar1 <= uVar4) {
        FUN_00139300(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8));
        FUN_00137da0(in_EAX);
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c) * 0x2c + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_EAX + 0xc) - iVar2) / 0x2c;
      }
      if (uVar1 <= uVar4) {
        iVar2 = FUN_00240d60();
        iVar2 = iVar2 * 0x2c + *(int *)(param_1 + 4);
        FUN_00139300(*(int *)(param_1 + 4),iVar2);
        uVar3 = FUN_00139330(in_EAX,iVar2,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_EAX + 8) = uVar3;
        return;
      }
      FUN_00137da0(in_EAX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_00137dc0();
  return;
}
