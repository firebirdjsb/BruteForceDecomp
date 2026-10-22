/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23A7B79A54B785C2C1A0E4182EC28E1FDE382CF3CDB9F2571D61C7BDA7BCAC96
 * Entry: 0x0020c3d0, Ghidra index: 7352, label: FUN_0020c3d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c3d0(undefined4 param_1,int param_2)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x24;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x24;
    }
    FUN_0020caf0(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&param_1);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x24)) {
      FUN_0020caa0(local_4,*(int *)(in_ECX + 4) + in_EAX * 0x24,*(int *)(in_ECX + 8));
    }
  }
  if (param_2 != 0) {
    FUN_0008f6e0();
  }
  return;
}
