/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7801BBD797982C3FFF19CE1B808FDA67004A74300FCA8A15DC647F49EF22FFEB
 * Entry: 0x00169a30, Ghidra index: 4757, label: FUN_00169a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00169a30(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*(int **)(in_EAX + 4))[3];
  if ((*(uint *)(uVar2 + 0xa8) >> 0xb & 1) != 0) {
    return uVar2 & 0xffffff00;
  }
  iVar1 = *(int *)(uVar2 + 4);
  if (((iVar1 != 2) && (iVar1 != 0x1a)) && (iVar1 != 0x1f)) {
    uVar3 = (**(code **)(**(int **)(in_EAX + 4) + 0x1c))();
    if ((uVar3 != 0) || ((uVar2 = 0, iVar1 != 0x13 && (iVar1 != 0x18)))) {
      return uVar3 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}
