/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15494A69039B381135BDF6E6744AE769AA3FBC56589CF4323378F7D90C123409
 * Entry: 0x001b1890, Ghidra index: 5606, label: FUN_001b1890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1890(void)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x30;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x30;
    }
    FUN_001b6360(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    FUN_000872a0();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x30)) {
      FUN_001b6310(local_4,in_EAX * 0x30 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  FUN_000872a0();
  return;
}
