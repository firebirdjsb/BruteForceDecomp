/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09BA9D8C5787C8EC949867185252139A2E5F5A91A68578EA3464E301147E8051
 * Entry: 0x0029c850, Ghidra index: 9446, label: FUN_0029c850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029c850(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = FUN_0029c5b0();
  uVar2 = FUN_0029c5b0();
  uVar2 = uVar2 | iVar1 << 0x10;
  if (uVar2 != 0) {
    uVar3 = FUN_00294b90(0,uVar2 * 8 + 8);
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (0 < (int)uVar2) {
      do {
        iVar4 = FUN_0029c5b0();
        uVar5 = FUN_0029c5b0();
        *(uint *)(*(int *)(param_1 + 0x1c) + 4 + iVar1 * 8) = uVar5 | iVar4 << 0x10;
        uVar3 = FUN_0029c7a0();
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 8) = uVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)uVar2);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + iVar1 * 8) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 8) = 0;
  }
  return;
}
