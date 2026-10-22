/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 203BA73C7021735BB46F86BC2BBA4B4467A88EA852A3EC47901ADA7AF7612230
 * Entry: 0x002c8d80, Ghidra index: 10130, label: FUN_002c8d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c8d80(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)(param_2 + 0x26);
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x28) + uVar7 * 4);
    fVar3 = *(float *)(iVar1 + 0x10) - *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(iVar1 + 0x14) - *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(iVar1 + 0x18) - *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(iVar1 + 0x20) + *(float *)(param_1 + 0x20);
    if (fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5 <= fVar4 * fVar4) {
      puVar2 = *(ushort **)(in_ECX + 0x174);
      if (*puVar2 <= puVar2[1]) {
        FUN_002ccf80();
      }
      *(int *)(*(int *)(puVar2 + 2) + (uint)puVar2[1] * 4) = iVar1;
      puVar2[1] = puVar2[1] + 1;
    }
  }
  uVar7 = (uint)*(ushort *)(param_2 + 0x1a);
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    FUN_002c8d80(param_1,*(undefined4 *)(*(int *)(param_2 + 0x1c) + uVar7 * 4));
  }
  return;
}
