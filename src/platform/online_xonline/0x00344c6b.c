/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09B00A2CC4D86C9422F00F3B07FE6792882077819766596D5AF63694446401B4
 * Entry: 0x00344c6b, Ghidra index: 12750, label: FUN_00344c6b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344c6b(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0034470a(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_003447d5(param_1,param_3), iVar1 != 0)) {
    puVar3 = *(undefined4 **)(param_1 + 0x24);
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_3;
    return 1;
  }
  return 0;
}
