/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21D04DD5A6423D31C56AAD8FF67FA17D5357CE0C52E943B675BE969459883505
 * Entry: 0x0033c130, Ghidra index: 12545, label: FUN_0033c130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 * FUN_0033c130(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = *(uint *)(param_2 + 4);
  puVar1 = (undefined4 *)(*(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc) + param_3);
  uVar3 = 500 - *(int *)(param_2 + 0xc);
  param_2 = uVar2;
  if (uVar3 < uVar2) {
    do {
      puVar4 = (undefined4 *)((int)param_1 + uVar3);
      puVar5 = puVar1;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *param_1;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar2 = param_2 - uVar3;
      puVar1 = (undefined4 *)((int)puVar1 + uVar3 + 0xc);
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      uVar3 = 500;
      param_1 = puVar4;
      param_2 = uVar2;
    } while (500 < uVar2);
  }
  puVar4 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return (undefined1 *)(uVar2 + (int)param_1);
}
