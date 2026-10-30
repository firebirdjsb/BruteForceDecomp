/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 402C2804434DA61ED4DF361A312D3890FD245C8CCDC87765832C44C578C6B515
 * Entry: 0x001d4290, Ghidra index: 6326, label: FUN_001d4290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d4290(int param_1)

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
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
    if (uVar1 != 0) {
      iVar2 = *(int *)(in_EAX + 4);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_EAX + 8) - iVar2) / 0x34;
      }
      if (uVar1 <= uVar4) {
        FUN_001dc940(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8));
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) * 0x34 + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_EAX + 0xc) - iVar2) / 0x34;
      }
      if (uVar1 <= uVar4) {
        iVar2 = FUN_0016d2e0();
        iVar2 = iVar2 * 0x34 + *(int *)(param_1 + 4);
        FUN_001dc940(*(int *)(param_1 + 4),iVar2);
        uVar3 = FUN_001d1840(in_EAX,iVar2,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_EAX + 8) = uVar3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
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
