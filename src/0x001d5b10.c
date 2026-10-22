/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6876B80AA70A4288AC08B3AD01B5AAD86E35746FFA680B31ABF588F622045F0
 * Entry: 0x001d5b10, Ghidra index: 6343, label: FUN_001d5b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d5b10(int param_1)

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
    uVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
    if (uVar2 != 0) {
      iVar1 = *(int *)(in_EAX + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 8) - iVar1) / 0x2c;
      }
      if (uVar2 <= uVar5) {
        FUN_001d9150(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),uVar2);
        FUN_000874a0(*(undefined4 *)(in_EAX + 8));
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c) * 0x2c + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 0xc) - iVar1) / 0x2c;
      }
      if (uVar2 <= uVar5) {
        iVar3 = FUN_00240d60();
        iVar3 = iVar3 * 0x2c + *(int *)(param_1 + 4);
        FUN_001dcb90(*(int *)(param_1 + 4),iVar3,iVar1);
        uVar4 = FUN_001d1a20(in_EAX,iVar3,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_EAX + 8) = uVar4;
        return;
      }
      FUN_000874a0(*(undefined4 *)(in_EAX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_000873e0();
  return;
}
