/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 061F31EFF4177FC0D14C8EE881D3AA1B3BC25641512A06877B9D3D3A71D66998
 * Entry: 0x0024a170, Ghidra index: 8207, label: FUN_0024a170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024a170(int param_1)

{
  uint uVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (in_EAX == param_1) {
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
    if (uVar1 != 0) {
      iVar3 = *(int *)(in_EAX + 4);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_EAX + 8) - iVar3) / 0x2c;
      }
      if (uVar1 <= uVar4) {
        uVar2 = FUN_0024bab0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8));
        FUN_0024a730(uVar2,*(undefined4 *)(in_EAX + 8));
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c) * 0x2c + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_EAX + 0xc) - iVar3) / 0x2c;
      }
      if (uVar1 <= uVar4) {
        iVar3 = FUN_00240d60();
        iVar3 = iVar3 * 0x2c + *(int *)(param_1 + 4);
        FUN_0024bab0(*(int *)(param_1 + 4),iVar3);
        uVar2 = FUN_0024c600(iVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_EAX + 8) = uVar2;
        return;
      }
      FUN_0024a730(iVar3,*(undefined4 *)(in_EAX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_0024a6b0();
  return;
}
