/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 210AAF3A4C6B735C0FD4180C6EADE3EDC32D3DBBDDCA3A4F5CBE7C91423FA0E7
 * Entry: 0x001cd500, Ghidra index: 5974, label: FUN_001cd500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cd500(void)

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
        FUN_001e2a80(iVar1,*(undefined4 *)(in_EAX + 8),uVar2);
        FUN_000762d0();
        iVar1 = FUN_0015e840();
        *(int *)(in_ECX + 8) = iVar1 * 0x1c + *(int *)(in_ECX + 4);
        return;
      }
      uVar2 = FUN_0015e840();
      uVar5 = FUN_0015e810();
      if (uVar2 <= uVar5) {
        iVar3 = FUN_0015e840();
        iVar3 = iVar3 * 0x1c + iVar1;
        FUN_001d1a80(iVar1,iVar3,*(undefined4 *)(in_ECX + 4));
        uVar4 = FUN_000763a0(iVar3,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar4;
        return;
      }
      FUN_000762d0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  FUN_001cdab0();
  return;
}
