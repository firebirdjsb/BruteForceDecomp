/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8CBDCFBF474163D25F8869DF7273D668502A031F8CA27C52868B322942D9D1B
 * Entry: 0x001b1bd0, Ghidra index: 5610, label: FUN_001b1bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1bd0(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x1c;
    }
    FUN_001b7380(*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x1c)) {
      FUN_001b7330(in_ECX,&stack0x00000004,in_EAX * 0x1c + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8)
                  );
    }
  }
  return;
}
