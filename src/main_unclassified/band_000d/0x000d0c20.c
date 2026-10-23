/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71D8C7BB9D95913384304E77FE83833A2DFCF86074E7F9705FF48011548B9F2E
 * Entry: 0x000d0c20, Ghidra index: 2584, label: FUN_000d0c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d0c20(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  int in_stack_00000010;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 4;
    }
    FUN_000d0d20(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&stack0x00000004);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 4)) {
      FUN_000d0cb0(local_4,in_EAX * 0x10 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (in_stack_00000010 != 0) {
    FUN_0008f6e0();
  }
  return;
}
