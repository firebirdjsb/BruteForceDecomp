/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB72B7D3EA3C8061A674D70A90C740EEC4A18B58E2E66B30DD01B9D26F188B75
 * Entry: 0x001d3cf0, Ghidra index: 6322, label: FUN_001d3cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d3cf0(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    uVar2 = (*(int *)(in_EAX + 8) - iVar1) / 0x1c;
    if (uVar2 != 0) {
      if (*(int *)(in_ECX + 4) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
      }
      if (uVar2 <= uVar5) {
        FUN_001d6750(iVar1,*(undefined4 *)(in_EAX + 8),uVar2);
        iVar1 = FUN_0015e840();
        *(int *)(in_ECX + 8) = iVar1 * 0x1c + *(int *)(in_ECX + 4);
        return;
      }
      uVar2 = FUN_0015e840();
      uVar5 = FUN_0015e810();
      if (uVar2 <= uVar5) {
        iVar3 = FUN_0015e840();
        iVar3 = iVar3 * 0x1c + iVar1;
        FUN_001dc8c0(iVar1,iVar3,*(undefined4 *)(in_ECX + 4));
        uVar4 = FUN_001d17e0(in_ECX,iVar3,*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar4;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}
