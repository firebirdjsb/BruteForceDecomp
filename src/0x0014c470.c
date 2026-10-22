/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DF9D896E2E6F3FE29A441AD34BF663778E178FE7381483EFE4C9EEE8E364AEB
 * Entry: 0x0014c470, Ghidra index: 4337, label: FUN_0014c470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014c470(void)

{
  int iVar1;
  uint uVar2;
  uint in_ECX;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_EDX + 8) - iVar1 >> 2;
  }
  if (uVar2 < in_ECX) {
    FUN_000a7d80(*(undefined4 *)(in_EDX + 8),&stack0x00000004);
    return;
  }
  if ((iVar1 != 0) && (in_ECX < (uint)(*(int *)(in_EDX + 8) - iVar1 >> 2))) {
    FUN_0024f210(*(int *)(in_EDX + 4) + in_ECX * 4,*(int *)(in_EDX + 8));
  }
  return;
}
