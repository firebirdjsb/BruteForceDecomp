/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58468D1AD44CF0935EAAECAA6DFBA8CB2DE7C58D21B61D5BAC7B9119150CAA05
 * Entry: 0x00169500, Ghidra index: 4748, label: FUN_00169500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00169500(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int iVar3;
  
  uVar1 = *(uint *)(*(int *)(in_EDX + 4) + 0x48);
  if ((*(uint *)(*(int *)(*(int *)(in_EAX + 4) + 0xc) + 0xa8) >> 0xb & 1) != 0) {
    return uVar1 & 0xffffff00;
  }
  if (uVar1 != 0) {
    iVar3 = *(int *)(uVar1 + 0x6c);
    if (*(int *)(iVar3 + 0x10) != 0) {
      iVar3 = *(int *)(iVar3 + 8);
    }
    iVar2 = *(int *)(*(int *)(in_EAX + 4) + 0x6c);
    if (*(int *)(iVar2 + 0x10) != 0) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != iVar3);
  }
  return 1;
}
