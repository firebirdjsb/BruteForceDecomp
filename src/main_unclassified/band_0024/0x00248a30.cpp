/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 828454130D08435AEF4E7D14BD9A306F2E76CF40CED3A060A104E34A1929D6E6
 * Entry: 0x00248a30, Ghidra index: 8135, label: FUN_00248a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00248a30(int param_1)

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
    uVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50;
    if (uVar2 != 0) {
      iVar1 = *(int *)(in_EAX + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 8) - iVar1) / 0x50;
      }
      if (uVar2 <= uVar5) {
        FUN_0024b9f0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),uVar2);
        FUN_0024a7b0(*(undefined4 *)(in_EAX + 8));
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50) * 0x50 + *(int *)(in_EAX + 4);
        return;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 0xc) - iVar1) / 0x50;
      }
      if (uVar2 <= uVar5) {
        iVar3 = FUN_002421c0();
        iVar3 = iVar3 * 0x50 + *(int *)(param_1 + 4);
        FUN_002499e0(*(int *)(param_1 + 4),iVar3,iVar1);
        uVar4 = FUN_0024bf70(iVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_EAX + 8) = uVar4;
        return;
      }
      FUN_0024a7b0(*(undefined4 *)(in_EAX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_00245ae0();
  return;
}
