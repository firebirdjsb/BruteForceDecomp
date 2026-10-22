/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3544A46F2795D9A712FC86486E1392C01E7C0C1BF94D7BEE9E0F1E45A9C0B7BC
 * Entry: 0x002f466f, Ghidra index: 10857, label: FUN_002f466f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f466f(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  param_2[4] = *(undefined4 *)(param_1 + 0x14);
  param_2[5] = *(undefined4 *)(param_1 + 0x18);
  param_2[6] = *(undefined4 *)(param_1 + 0x1c);
  param_2[7] = *(undefined4 *)(param_1 + 0x2c);
  param_2[8] = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x3c);
  puVar3 = (undefined4 *)(param_1 + 0x40);
  puVar4 = param_2 + 0xb;
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x2c + (int)param_2) = 0;
  *(undefined1 *)(param_2 + 0x4c) = 0;
  return;
}
