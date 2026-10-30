/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE32BA1039C9AA0F3CDE0C123114B2A49C4D9E409CBA37FAB5D9429AA82EE92D
 * Entry: 0x001b1810, Ghidra index: 5605, label: FUN_001b1810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x001b1854 RET 4 and the direct caller 0x001a6835-0x001a6843
 * establish one incoming guest DWORD, initialized to zero by that caller.
 * 0x001b183c addresses the same word at entry ESP+4. ECX receiver and
 * EAX element count remain implicit x86 inputs (ABI_UNVERIFIED). */
void FUN_001b1810(undefined4 fill_word)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 2;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 2;
    }
    /* 0x001b1840 pushes &fill_word as the third stack word. The callee
     * 0x000757a3-0x000757a8 reads one DWORD through that pointer. */
    FUN_00075780(*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&fill_word);
    return;
  }
  if ((iVar2 != 0) && (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 2))) {
    FUN_0024f210(*(int *)(in_ECX + 4) + in_EAX * 4,*(int *)(in_ECX + 8));
  }
  return;
}
