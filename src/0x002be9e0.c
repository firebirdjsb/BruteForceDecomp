/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 398AC1C28A4BBFC942273837770D7E4B3CB2426F0D2E18EEEC2CB98AC39B4DB1
 * Entry: 0x002be9e0, Ghidra index: 9978, label: FUN_002be9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002be9e0(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = (*(uint *)(in_ECX + 8) & 0xffffff) * 2;
  if (iVar4 - *(int *)(in_ECX + 4) != 0 && *(int *)(in_ECX + 4) <= iVar4) {
    FUN_002be930();
  }
  uVar7 = *(uint *)(in_ECX + 4);
  uVar5 = uVar7 & param_2;
  uVar2 = *(uint *)(in_ECX + 8);
  puVar1 = (uint *)(*(int *)(in_ECX + 0xc) + uVar5 * 8);
  *(uint *)(in_ECX + 8) = (uVar2 + 1 ^ uVar2) & 0xffffff ^ uVar2;
  uVar2 = puVar1[1];
  uVar6 = uVar5;
  uVar3 = param_1;
  while (uVar2 != 0) {
    uVar2 = *puVar1;
    uVar7 = uVar2 & uVar7;
    param_1 = uVar3;
    if ((int)uVar6 < (int)uVar7) {
      param_1 = puVar1[1];
      puVar1[1] = uVar3;
      *puVar1 = param_2;
      uVar6 = uVar7;
      param_2 = uVar2;
    }
    uVar7 = *(uint *)(in_ECX + 4);
    uVar5 = uVar5 + 1 & uVar7;
    puVar1 = (uint *)(*(int *)(in_ECX + 0xc) + uVar5 * 8);
    uVar3 = param_1;
    uVar2 = puVar1[1];
  }
  *(uint *)(*(int *)(in_ECX + 0xc) + 4 + uVar5 * 8) = uVar3;
  *(uint *)(*(int *)(in_ECX + 0xc) + uVar5 * 8) = param_2;
  return;
}
