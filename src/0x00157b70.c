/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28F9EA79A15F70C0C23BB4E3CEAD074E720DF03464308A3C69B4985FB58F5428
 * Entry: 0x00157b70, Ghidra index: 4489, label: FUN_00157b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00157b70(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  byte bVar8;
  undefined1 *puVar9;
  undefined1 auStack_34 [52];
  
  iVar7 = *(int *)(param_1 + 0x8c);
  *(byte *)(in_ECX + 0x71) = *(byte *)(in_ECX + 0x71) | 0x80;
  iVar3 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x10);
  if (((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 100), iVar3 == 0)) || (iVar3 == -1)) {
    bVar2 = *(byte *)(param_1 + 0x84);
    piVar1 = (int *)(iVar7 + 0x48);
    uVar5 = (**(code **)(*piVar1 + 0x14))();
    puVar9 = auStack_34;
    *(int *)(param_1 + 0x990) = in_ECX;
    uVar6 = FUN_000e7320(0);
    iVar7 = FUN_00236a50(piVar1,uVar5,~((uint)bVar2 << 0xb) & 0x8000,uVar6,param_1,puVar9);
    bVar2 = *(byte *)(in_ECX + 0x70);
    if ((iVar7 == 3) || (iVar7 == 4)) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\0';
    }
    bVar8 = *(byte *)(in_ECX + 0x70) ^ (cVar4 << 2 ^ *(byte *)(in_ECX + 0x70)) & 4;
    *(byte *)(in_ECX + 0x70) = bVar8;
    if (((bVar2 >> 2 & 1) == 0) && ((bVar8 & 4) != 0)) {
      *(byte *)(in_ECX + 0x70) = bVar8 | 2;
    }
  }
  return;
}
