/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95D71FE75FF804684E9322D6EB9DC671A8FF1A575FCDB19F5FE6B9CDB9F8AC99
 * Entry: 0x001e9bf0, Ghidra index: 6863, label: FUN_001e9bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e9bf0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_34 [4];
  undefined2 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = param_2 - param_1 >> 5;
  if (1 < iVar1) {
    puVar2 = (undefined4 *)(param_2 + -0x20);
    if (iVar1 < 2) goto LAB_001e9c64;
    do {
      uVar3 = *puVar2;
      uStack_14 = 0;
      uStack_18 = param_3;
      local_1c = 7;
      local_20 = 0;
      local_30 = 0;
      FUN_00087940(local_34,0,0xffffffff);
      FUN_001ea0f0(param_1,puVar2,puVar2,uVar3);
LAB_001e9c64:
      puVar2 = puVar2 + -8;
    } while (1 < (0x20 - param_1) + (int)puVar2 >> 5);
  }
  return;
}
