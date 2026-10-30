/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98FE594FB776CDDA67CA5FA5585048C7E5D9C3500DF41F50E273B1FC3F52AA7B
 * Entry: 0x001d5160, Ghidra index: 6336, label: FUN_001d5160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d5160(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (in_EAX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    uVar3 = (*(int *)(param_1 + 8) - iVar2) / 0x3c;
    if (uVar3 != 0) {
      iVar1 = *(int *)(in_EAX + 4);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 8) - iVar1) / 0x3c;
      }
      if (uVar6 < uVar3) {
        uVar3 = FUN_001b3700();
        uVar6 = FUN_00162850();
        if (uVar3 < uVar6) {
          FUN_0006a3b0(in_EAX);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
        }
        iVar4 = FUN_00162850();
        iVar4 = iVar4 * 0x3c + iVar2;
        FUN_001dca90(iVar2,iVar4,iVar1);
        uVar5 = FUN_001d1960(in_EAX,iVar4,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_EAX + 8) = uVar5;
        return;
      }
      iVar1 = FUN_001d7c40(iVar2,*(int *)(param_1 + 8),param_1);
      iVar2 = *(int *)(in_EAX + 8);
      for (; iVar1 != iVar2; iVar1 = iVar1 + 0x3c) {
        FUN_0006a540();
      }
      iVar2 = FUN_00162850();
      *(int *)(in_EAX + 8) = iVar2 * 0x3c + *(int *)(in_EAX + 4);
      return;
    }
  }
  FUN_0006a150();
  return;
}
