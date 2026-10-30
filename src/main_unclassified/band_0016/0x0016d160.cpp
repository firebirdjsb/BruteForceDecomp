/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD22B15E51041ED7F349CCDCCB4CA18D3A912EF624F32F4B2091FF85185EEB08
 * Entry: 0x0016d160, Ghidra index: 4790, label: FUN_0016d160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016d160(int param_1)

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
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
    if (uVar2 != 0) {
      iVar1 = *(int *)(in_EAX + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 8) - iVar1) / 0x34;
      }
      if (uVar2 <= uVar5) {
        FUN_001d92e0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),uVar2);
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) * 0x34 + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 0xc) - iVar1) / 0x34;
      }
      if (uVar2 <= uVar5) {
        iVar3 = FUN_0016d2e0();
        iVar3 = iVar3 * 0x34 + *(int *)(param_1 + 4);
        FUN_0015ea00(*(int *)(param_1 + 4),iVar3,iVar1);
        uVar4 = FUN_0016db10(in_EAX,iVar3,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_EAX + 8) = uVar4;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  if (*(int *)(in_EAX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 4));
  }
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  return;
}
