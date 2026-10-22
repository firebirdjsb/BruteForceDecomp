/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F789465E6B1855E0526A8A7C9DB0B7AC7C858FD624C5DF7437653584B7AD5A5E
 * Entry: 0x001b2540, Ghidra index: 5622, label: FUN_001b2540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b2540(void)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(in_ECX + 8) - iVar1) / 0x34;
  }
  if (uVar2 < in_EAX) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar1) / 0x34;
    }
    FUN_001b9a10(*(undefined4 *)(in_ECX + 8),in_EAX - iVar1);
    return;
  }
  if (iVar1 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar1) / 0x34)) {
      FUN_001b99c0(in_ECX,&stack0x00000004,in_EAX * 0x34 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8)
                  );
    }
  }
  return;
}
