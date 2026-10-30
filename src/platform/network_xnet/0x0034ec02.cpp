/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6284CEE87F0CE415E364C3EEA56D159D20AA4EEF6380D7B95F1578573D4F1C1
 * Entry: 0x0034ec02, Ghidra index: 13027, label: FUN_0034ec02
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034ec02(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  piVar2 = *(int **)(param_1 + 0x40);
  iVar3 = *piVar2;
  iVar4 = *(int *)(param_2 + 0x94);
  piVar2[2] = piVar2[2] & 0xfbf4020cU | 0x204;
  *(undefined2 *)(piVar2 + 1) = 0x3c;
  if ((*(int *)(param_1 + 0x54) == 0) || (bVar5 = true, *(char *)(param_2 + 0xc) == '\x05')) {
    bVar5 = false;
  }
  FUN_00347fe3(piVar2,*(undefined4 *)(iVar4 + 4),0);
  *(undefined2 *)(iVar3 + 0x20) = 0x5307;
  *(undefined2 *)(iVar3 + 0x22) = 0x10;
  *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_1 + 8);
  *(short *)(iVar3 + 0x2c) = (short)((param_2 - *(int *)(param_1 + 0x4c)) / 0xac);
  *(undefined1 *)(iVar3 + 0x2e) = *(undefined1 *)(param_2 + 0xa0);
  *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
  *(byte *)(iVar3 + 0x2f) = bVar5 - 1U & 2;
  *(undefined2 *)(param_1 + 0x6a + (uint)*(ushort *)(iVar3 + 0x2c) * 0x18) =
       *(undefined2 *)(param_2 + 0xa0);
  if (bVar5) {
    puVar1[2] = puVar1[2] & 0xfbf4020c | 0x204;
    *(undefined2 *)(puVar1 + 1) = 0x3c;
    puVar6 = (undefined4 *)FUN_0034c841();
    puVar7 = (undefined4 *)FUN_0034c841();
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
    puVar7[2] = puVar6[2];
    *(undefined2 *)(puVar7 + 3) = *(undefined2 *)(puVar6 + 3);
    puVar6 = (undefined4 *)*piVar2;
    puVar7 = (undefined4 *)*puVar1;
    for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar8 = FUN_0034c855();
    *(undefined1 *)(iVar8 + 0x1b) = 1;
    FUN_0034e276(*(int *)(param_2 + 0xa8) + (uint)*(byte *)(iVar3 + 0x2e) * 0x28);
  }
  piVar2[5] = 1;
  FUN_00348e95(piVar2,iVar4,0);
  if (bVar5) {
    puVar1[5] = 1;
    FUN_00348e95(puVar1,iVar4,0);
  }
  return;
}
