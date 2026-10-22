/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA502A2640F5662C756727923E690FBE54C44FC22744F69CE94DF56DFD308BF2
 * Entry: 0x00249e60, Ghidra index: 8205, label: FUN_00249e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00249e60(int param_1)

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
    uVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30;
    if (uVar2 != 0) {
      iVar1 = *(int *)(in_EAX + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 8) - iVar1) / 0x30;
      }
      if (uVar2 <= uVar5) {
        FUN_0024c6e0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),uVar2);
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30) * 0x30 + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 0xc) - iVar1) / 0x30;
      }
      if (uVar2 <= uVar5) {
        iVar3 = FUN_001f7510();
        iVar3 = iVar3 * 0x30 + *(int *)(param_1 + 4);
        FUN_0024ba70(*(int *)(param_1 + 4),iVar3,iVar1);
        uVar4 = FUN_0024c540(iVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
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
