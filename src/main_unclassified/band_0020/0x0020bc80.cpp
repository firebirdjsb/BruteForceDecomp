/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1B028A8CE137E430F80E4E1288EFD30F9AEACC9F4807B07BC4E655A7E60BD96
 * Entry: 0x0020bc80, Ghidra index: 7342, label: FUN_0020bc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020bc80(undefined4 param_1)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 1U) {
    FUN_00055ec0();
  }
  iVar2 = *(int *)(in_EAX + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)(in_EAX + 8);
  }
  iVar3 = iVar2 + -1;
  if (*(int *)(*(int *)(in_EAX + 4) + -4 + iVar2 * 4) == 0) {
    uVar1 = FUN_002ea01d(0xa0);
    *(undefined4 *)(*(int *)(in_EAX + 4) + iVar3 * 4) = uVar1;
  }
  if (*(int *)(*(int *)(in_EAX + 4) + iVar3 * 4) != 0) {
    FUN_00055a00(param_1);
  }
  *(int *)(in_EAX + 0xc) = iVar3;
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
