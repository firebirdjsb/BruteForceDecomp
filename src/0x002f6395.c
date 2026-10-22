/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 182D2A1B93E3DD2A2B421343A1DC4D327A5035E9927AB817C973390A0E937141
 * Entry: 0x002f6395, Ghidra index: 10913, label: FUN_002f6395
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f6395(int param_1,ushort *param_2,uint param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  int *piVar10;
  
  uVar7 = param_2[2];
  uVar8 = param_2[1];
  iVar4 = *(int *)(param_1 + 0x60 + (uint)(byte)uVar7 * 4);
  bVar3 = *(byte *)((int)param_2 + 5);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
  uVar6 = (uint)uVar8;
  do {
    if (param_3 == 0) {
      if ((bVar3 & 0x10) != 0) {
        return;
      }
      param_2[1] = uVar8;
      return;
    }
    if (param_3 < 0xff01) {
      *(byte *)((int)param_2 + 5) = bVar3;
      uVar9 = param_3;
    }
    else {
      uVar9 = 0xff00;
      if (param_3 == 0xff01) {
        uVar9 = 0xfef0;
      }
      *(undefined1 *)((int)param_2 + 5) = 0;
    }
    *(byte *)((int)param_2 + 5U) = *(byte *)((int)param_2 + 5U) & 0xf8;
    uVar8 = (ushort)uVar9;
    param_2[1] = (ushort)uVar6;
    *(byte *)(param_2 + 2) = (byte)uVar7;
    *param_2 = uVar8;
    if (uVar8 < 0x80) {
      piVar10 = (int *)(param_1 + 0x180 + (uVar9 & 0xffff) * 8);
      if ((int *)*piVar10 == piVar10) {
        pbVar2 = (byte *)(((uVar9 & 0xffff) >> 3) + 0x160 + param_1);
        *pbVar2 = *pbVar2 | '\x01' << ((byte)uVar9 & 7);
      }
    }
    else {
      for (piVar10 = *(int **)(param_1 + 0x180);
          ((int *)(param_1 + 0x180) != piVar10 && (*(ushort *)(piVar10 + -2) < uVar8));
          piVar10 = (int *)*piVar10) {
      }
    }
    piVar5 = (int *)piVar10[1];
    puVar1 = param_2 + 4;
    *(int **)puVar1 = piVar10;
    *(int **)(param_2 + 6) = piVar5;
    *piVar5 = (int)puVar1;
    piVar10[1] = (int)puVar1;
    param_3 = param_3 - (uVar9 & 0xffff);
    param_2 = param_2 + (uVar9 & 0xffff) * 8;
    uVar6 = uVar9;
  } while (param_2 < *(ushort **)(iVar4 + 0x2c));
  return;
}
