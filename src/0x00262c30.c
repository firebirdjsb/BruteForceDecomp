/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 722D6CADECA5061627806734652F82BB034D39FC1B7D3F879BFFACB0E693E838
 * Entry: 0x00262c30, Ghidra index: 8664, label: FUN_00262c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00262c30(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = param_2;
    if (param_2 < (uint)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x14)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 0x14);
      *puVar1 = param_3;
      puVar1[1] = param_4;
      puVar1[2] = param_5;
      puVar1[3] = param_6;
      return CONCAT31((int3)((uint)puVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}
