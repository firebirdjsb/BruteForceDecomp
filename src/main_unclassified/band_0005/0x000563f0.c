/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F289C37092A111202B56B6983CC062B09059B7E6A58783A7D83E739980A5FF09
 * Entry: 0x000563f0, Ghidra index: 829, label: FUN_000563f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000563f0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  uint local_c;
  
  uVar3 = 0;
  local_c = 0xffffffff;
  local_10 = 0;
  if (*(int *)(in_EAX + 0x10) != 0) {
    iVar2 = *(int *)(in_EAX + 0xc);
    do {
      iVar1 = FUN_00056bc0(iVar2);
      if ((local_10 < iVar1) &&
         (local_c = uVar3, local_10 = iVar1, *(uint *)(in_EAX + 0x10) < (uint)(iVar1 * 2))) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(in_EAX + 0x10));
    if (-1 < (int)local_c) {
      iVar2 = local_c + iVar2;
      uVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
      iVar1 = uVar3 * -4;
      if (*(uint *)(in_EAX + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(in_EAX + 8);
      }
      return *(undefined4 *)(*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) + (iVar2 + iVar1) * 4);
    }
  }
  return 0;
}
