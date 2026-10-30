/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F08FB7E6086EB0F93151B282ABBEB876D095D81175B9C7E71299C06FCCB7BBF7
 * Entry: 0x001b54f0, Ghidra index: 5671, label: FUN_001b54f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b54f0(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x4c;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x4c;
    }
    FUN_001c7480(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    FUN_00087300();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x4c)) {
      FUN_001c7410(in_ECX,local_4,in_EAX * 0x4c + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  FUN_00087300();
  return;
}
