/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73D4757EFE26E7E2520D3548205221E923D33162AF56D30041C2903F99F98F51
 * Entry: 0x001b27f0, Ghidra index: 5626, label: FUN_001b27f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b27f0(void)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
    }
    FUN_001baa20(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    FUN_000e3680();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x18)) {
      FUN_001ba9d0(local_4,*(int *)(in_ECX + 4) + in_EAX * 0x18,*(int *)(in_ECX + 8));
    }
  }
  FUN_000e3680();
  return;
}
