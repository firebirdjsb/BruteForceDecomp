/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F889E70BA315193904CB6D6E1F16D0EE9FAD3D2DE747C0FC6C2DBE561354CAA7
 * Entry: 0x00169550, Ghidra index: 4749, label: FUN_00169550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00169550(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(byte **)(unaff_ESI + 4) + 0x48);
  if ((iVar1 == 0) || (*(int *)(*(int *)(iVar1 + 0xc) + 4) != 3)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  if ((**(byte **)(unaff_ESI + 4) & 1) == 0) {
    uVar3 = *(uint *)(iVar1 + 0x6c);
    if (*(int *)(uVar3 + 0x10) != 0) {
      uVar3 = *(uint *)(uVar3 + 8);
    }
    uVar2 = *(uint *)(*(int *)(in_EAX + 4) + 0x6c);
    if (*(int *)(uVar2 + 0x10) != 0) {
      uVar2 = *(uint *)(uVar2 + 8);
    }
    if (uVar2 == uVar3) {
      return uVar2 & 0xffffff00;
    }
  }
  uVar3 = (**(code **)(**(int **)(*(int *)(in_EAX + 4) + 0x5a4) + 0xdc))();
  return uVar3;
}
