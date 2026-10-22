/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4538969E96C3B5ADB2FE7D0CD6CB2D5B5642FF7D474EFD4E9E46D686C76EB877
 * Entry: 0x001d3530, Ghidra index: 6316, label: FUN_001d3530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d3530(void)

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
        FUN_001d6370(iVar1,*(undefined4 *)(in_EAX + 8),uVar2);
        FUN_00087460();
        iVar1 = FUN_0015e840();
        *(int *)(in_ECX + 8) = iVar1 * 0x1c + *(int *)(in_ECX + 4);
        return;
      }
      uVar2 = FUN_0015e810();
      uVar5 = FUN_0015e840();
      if (uVar5 <= uVar2) {
        iVar3 = FUN_0015e840();
        iVar3 = iVar3 * 0x1c + iVar1;
        FUN_001dc7e0(iVar1,iVar3,*(undefined4 *)(in_ECX + 4));
        uVar4 = FUN_001dd350(iVar3,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar4;
        return;
      }
      FUN_00087460();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  FUN_000873a0();
  return;
}
