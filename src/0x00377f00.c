/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01D08705B2D28916F79F98EC0F5FD2A650F6FDFE0CBF1F5D061188E27251965C
 * Entry: 0x00377f00, Ghidra index: 13464, label: FUN_00377f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00377f00(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar3 = (uint *)*param_2;
  iVar1 = param_2[1];
  if (puVar3 != (uint *)0x0) {
    uVar5 = *puVar3;
    while (uVar5 != 0xffffffff) {
      puVar6 = puVar3 + 2;
      puVar7 = (uint *)(puVar3[1] + iVar1);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar3 = (uint *)((int)(puVar3 + 2) + uVar5);
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar7 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      uVar5 = *puVar3;
    }
  }
  uVar5 = param_2[3];
  iVar2 = param_2[2];
  *(uint *)(iVar2 + iVar1) = (uVar5 & 0xfffffff) + 1;
  if (param_3 != 0) {
    *(uint *)(*param_1 + 0x324c) = uVar5 & 0xfffffff;
    param_1[0x206] = param_1[0x206] + iVar2;
  }
  return;
}
