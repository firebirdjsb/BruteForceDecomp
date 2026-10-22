/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D87E670F2AD6B66E4E513C16607C10AF3F3E7D6572B873ED806EF30AB6A67B8
 * Entry: 0x0034e8a9, Ghidra index: 13025, label: FUN_0034e8a9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034e8a9(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  
  piVar1 = *(int **)(param_1 + 0x44);
  puVar2 = *(undefined4 **)(param_1 + 0x40);
  puVar3 = (undefined4 *)*puVar2;
  puVar2[2] = puVar2[2] & 0xfbf4000b | 3;
  if ((*(int *)(param_1 + 0x54) == 0) || (bVar5 = true, *(char *)(param_2 + 0xc) == '\x05')) {
    bVar5 = false;
  }
  *(undefined2 *)(puVar2 + 1) = 0x6e;
  FUN_00347fe3(puVar2,0,0x11);
  if ((*(byte *)(param_2 + 0x18) & 0xc0) == 0x80) {
    puVar3[3] = *(undefined4 *)(in_ECX + 0x268);
    puVar3[4] = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(puVar3 + 5) = *(undefined2 *)(in_ECX + 0x8c6);
    *(undefined2 *)((int)puVar3 + 0x16) = *(undefined2 *)(param_2 + 0xe);
  }
  else {
    *(byte *)((int)puVar2 + 0xb) = *(byte *)((int)puVar2 + 0xb) | 4;
    puVar6 = (undefined4 *)FUN_0034c841();
    *puVar6 = *(undefined4 *)(param_2 + 0x52);
    *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(param_2 + 0x56);
    *(undefined4 *)((int)puVar6 + 6) = *(undefined4 *)(in_ECX + 0x1e0);
    *(undefined2 *)((int)puVar6 + 10) = *(undefined2 *)(in_ECX + 0x1e4);
    *(undefined2 *)(puVar6 + 3) = 8;
    puVar3[3] = 0x1000000;
    puVar3[4] = 0x1000000;
    *(undefined2 *)(puVar3 + 5) = 0x20c;
    *(undefined2 *)((int)puVar3 + 0x16) = 0x20c;
  }
  puVar3[7] = 0;
  *(undefined2 *)(puVar3 + 9) = 0;
  *(undefined2 *)((int)puVar3 + 0x22) = 0x4e;
  *(undefined2 *)(puVar3 + 8) = 0x5806;
  *(undefined4 *)((int)puVar3 + 0x26) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)puVar3 + 0x2a) = *(undefined4 *)(param_1 + 8);
  *(short *)((int)puVar3 + 0x2e) = (short)((param_2 - *(int *)(param_1 + 0x4c)) / 0xac);
  *(undefined1 *)(puVar3 + 0xc) = *(undefined1 *)(param_2 + 0xa0);
  *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
  *(byte *)((int)puVar3 + 0x31) = bVar5 - 1U & 2;
  *(undefined4 *)((int)puVar3 + 0x32) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((int)puVar3 + 0x36) = *(undefined4 *)(param_2 + 0x1c);
  puVar6 = (undefined4 *)(param_2 + 0x6c);
  puVar7 = (undefined4 *)((int)puVar3 + 0x3a);
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)((int)puVar3 + 0x5e) = *(undefined4 *)(param_2 + 0x90);
  *(undefined2 *)(param_1 + 0x6a + (uint)*(ushort *)((int)puVar3 + 0x2e) * 0x18) =
       *(undefined2 *)(param_2 + 0xa0);
  FUN_0034c461(param_2 + 0x20,0x10,puVar3 + 8,0x42,(undefined2 *)((int)puVar3 + 0x6e),
               *(ushort *)((int)puVar3 + 0x22) - 0x4e,(undefined2 *)((int)puVar3 + 0x62),0xc);
  if (bVar5) {
    uVar4 = piVar1[2];
    piVar1[2] = uVar4 & 0xfbf4000b | 3;
    *(undefined2 *)(piVar1 + 1) = 0x6e;
    if ((puVar2[2] & 0x4000000) != 0) {
      piVar1[2] = uVar4 & 0xfbf4000b | 0x4000003;
      puVar6 = (undefined4 *)FUN_0034c841();
      puVar7 = (undefined4 *)FUN_0034c841();
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      puVar7[2] = puVar6[2];
      *(undefined2 *)(puVar7 + 3) = *(undefined2 *)(puVar6 + 3);
    }
    puVar6 = puVar3;
    puVar7 = (undefined4 *)*piVar1;
    for (iVar8 = 0x1b; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
    iVar8 = *piVar1;
    *(undefined1 *)(iVar8 + 0x31) = 1;
    FUN_0034c461(param_2 + 0x20,0x10,iVar8 + 0x20,0x42,iVar8 + 0x6e,*(ushort *)(iVar8 + 0x22) - 0x4e
                 ,iVar8 + 0x62,0xc);
    FUN_0034e276(*(int *)(param_2 + 0xa8) + (uint)*(byte *)(puVar3 + 0xc) * 0x28);
  }
  puVar2[5] = 1;
  FUN_00348b9a(puVar2,0);
  if (bVar5) {
    piVar1[5] = 1;
    FUN_00348b9a(piVar1,0);
  }
  return;
}
