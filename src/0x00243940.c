/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A179A3C2D24976F70D0DD1666B9E5985537FC6EF5CDB93BBD10A0D79091CE5D9
 * Entry: 0x00243940, Ghidra index: 8057, label: FUN_00243940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243940(void)

{
  uint in_EAX;
  uint uVar1;
  int in_EDX;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_EDX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EDX + 8) - iVar2 >> 6;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar2 >> 6;
    }
    FUN_002465d0(in_EDX,*(undefined4 *)(in_EDX + 8),in_EAX - iVar2);
    FUN_00243040(&stack0x00000004);
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_EDX + 8) - iVar2 >> 6)) {
      FUN_00246560(in_EDX,local_4,in_EAX * 0x40 + *(int *)(in_EDX + 4),*(int *)(in_EDX + 8));
    }
  }
  FUN_00243040(&stack0x00000004);
  return;
}
