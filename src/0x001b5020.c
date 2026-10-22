/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CCE56C5F731CBE37C4C706884D1959A38959C6C9F630A75106FC01BDA79AD32
 * Entry: 0x001b5020, Ghidra index: 5666, label: FUN_001b5020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5020(void)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x70;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x70;
    }
    FUN_001c6060(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    FUN_00051630();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x70)) {
      FUN_001c5fa0(in_ECX,local_4,in_EAX * 0x70 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  FUN_00051630();
  return;
}
