/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1208EDF6A16F032DA5FD16ED1C0A973C1CFBBED3CB46C279FE8ED115A5F699C2
 * Entry: 0x002bfb90, Ghidra index: 10001, label: FUN_002bfb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bfb90(void)

{
  int iVar1;
  int in_EAX;
  int in_EDX;
  
  *(uint *)(in_EAX + 0x14) = *(uint *)(in_EAX + 0x14) & 0xffcbffff | 0x80000;
  iVar1 = *(int *)(in_EDX + 0x18);
  *(int *)(in_EAX + 0x74) = iVar1;
  *(undefined4 *)(in_EAX + 0x78) = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x78) = in_EAX;
  }
  *(int *)(in_EDX + 0x18) = in_EAX;
  iVar1 = *(int *)(*(int *)(in_EAX + 0x28) + 0x20);
  *(int *)(in_EAX + 0x20) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = in_EAX + 0x18;
  }
  *(undefined4 *)(in_EAX + 0x24) = 0;
  *(int *)(*(int *)(in_EAX + 0x28) + 0x20) = in_EAX + 0x18;
  iVar1 = *(int *)(*(int *)(in_EAX + 0x44) + 0x20);
  *(int *)(in_EAX + 0x3c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = in_EAX + 0x34;
  }
  *(undefined4 *)(in_EAX + 0x40) = 0;
  *(int *)(*(int *)(in_EAX + 0x44) + 0x20) = in_EAX + 0x34;
  return;
}
