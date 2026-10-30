/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F46A22CE1402BBEBB9DEEB1CB40627C8173AF810F95811D13679A15457E9A15E
 * Entry: 0x0035327b, Ghidra index: 13082, label: FUN_0035327b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0035327b(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  puVar4 = (undefined4 *)(param_1 + 0x24);
  puVar1 = (undefined4 *)(-(uint)(puVar5 != puVar4) & (uint)puVar5);
  do {
    puVar2 = puVar5;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar1[1];
    }
    puVar1 = (undefined4 *)(-(uint)(puVar2 != puVar4) & (uint)puVar2);
    if (puVar1 == (undefined4 *)0x0) goto LAB_003532b5;
  } while (puVar1[3] != param_2);
  if (puVar1 == (undefined4 *)0x0) {
LAB_003532b5:
    puVar5 = (undefined4 *)*puVar4;
  }
  else {
    puVar5 = (undefined4 *)*puVar1;
  }
  puVar5 = (undefined4 *)(-(uint)(puVar5 != puVar4) & (uint)puVar5);
  iVar3 = (puVar5[2] - puVar5[3]) + param_3[3];
  if (0 < iVar3) {
    param_3[2] = param_3[2] - iVar3;
    param_3[3] = param_3[3] - iVar3;
  }
  FUN_00353125(param_3,puVar1);
  puVar1 = param_3;
  param_2 = param_3[2];
  do {
    puVar2 = puVar5;
    if (puVar1[3] != puVar2[3] - puVar2[2]) break;
    param_2 = param_2 + puVar2[2];
    puVar5 = (undefined4 *)(-(uint)((undefined4 *)*puVar2 != puVar4) & (uint)*puVar2);
    puVar1 = puVar2;
  } while (puVar5 != (undefined4 *)0x0);
  if ((uint)param_3[2] < param_2) {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 0x20000;
  }
  return param_2;
}
