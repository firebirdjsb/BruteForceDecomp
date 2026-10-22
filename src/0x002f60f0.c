/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95958B7300259CA987107A606C8B6DAD8BE25CF456AC948F8667E7F242A68853
 * Entry: 0x002f60f0, Ghidra index: 10912, label: FUN_002f60f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort * FUN_002f60f0(int param_1,ushort *param_2,ushort *param_3,char param_4)

{
  byte *pbVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  ushort *puVar7;
  
  puVar7 = param_2 + (uint)param_2[1] * -8;
  if (((puVar7 != param_2) && ((*(byte *)((int)puVar7 + 5) & 1) == 0)) &&
     ((uint)*puVar7 + *(int *)param_3 < 0xff01)) {
    if (param_4 != '\0') {
      piVar3 = *(int **)(param_2 + 4);
      piVar4 = *(int **)(param_2 + 6);
      *piVar4 = (int)piVar3;
      piVar3[1] = (int)piVar4;
      if ((piVar3 == piVar4) && (uVar2 = *param_2, uVar2 < 0x80)) {
        pbVar1 = (byte *)((uVar2 >> 3) + 0x160 + param_1);
        *pbVar1 = *pbVar1 ^ '\x01' << ((byte)uVar2 & 7);
      }
      if ((*(byte *)((int)param_2 + 5) & 4) != 0) {
        uVar5 = (uint)*param_2 * 0x10 - 0x18;
        if (((*(byte *)((int)param_2 + 5) & 2) != 0) && (4 < uVar5)) {
          uVar5 = (uint)*param_2 * 0x10 - 0x1c;
        }
        RtlCompareMemoryUlong(param_2 + 0xc,uVar5,0xfeeefeee);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*param_2;
      param_4 = '\0';
    }
    piVar3 = *(int **)(puVar7 + 4);
    piVar4 = *(int **)(puVar7 + 6);
    *piVar4 = (int)piVar3;
    piVar3[1] = (int)piVar4;
    if ((piVar3 == piVar4) && (uVar2 = *puVar7, uVar2 < 0x80)) {
      pbVar1 = (byte *)((uVar2 >> 3) + 0x160 + param_1);
      *pbVar1 = *pbVar1 ^ '\x01' << ((byte)uVar2 & 7);
    }
    if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
      uVar5 = (uint)*puVar7 * 0x10 - 0x18;
      if (((*(byte *)((int)puVar7 + 5) & 2) != 0) && (4 < uVar5)) {
        uVar5 = (uint)*puVar7 * 0x10 - 0x1c;
      }
      RtlCompareMemoryUlong(puVar7 + 0xc,uVar5,0xfeeefeee);
    }
    bVar6 = *(byte *)((int)param_2 + 5) & 0x10;
    *(byte *)((int)puVar7 + 5) = bVar6;
    if (bVar6 != 0) {
      *(ushort **)(*(int *)(param_1 + 0x60 + (uint)(byte)puVar7[2] * 4) + 0x40) = puVar7;
    }
    *(uint *)param_3 = *(int *)param_3 + (uint)*puVar7;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*puVar7;
    *puVar7 = *param_3;
    param_2 = puVar7;
    if ((*(byte *)((int)puVar7 + 5) & 0x10) == 0) {
      puVar7[*(int *)param_3 * 8 + 1] = *param_3;
    }
  }
  if ((*(byte *)((int)param_2 + 5) & 0x10) == 0) {
    puVar7 = param_2 + *(int *)param_3 * 8;
    if (((*(byte *)((int)puVar7 + 5) & 1) == 0) && ((uint)*puVar7 + *(int *)param_3 < 0xff01)) {
      if (param_4 != '\0') {
        piVar3 = *(int **)(param_2 + 4);
        piVar4 = *(int **)(param_2 + 6);
        *piVar4 = (int)piVar3;
        piVar3[1] = (int)piVar4;
        if ((piVar3 == piVar4) && (uVar2 = *param_2, uVar2 < 0x80)) {
          pbVar1 = (byte *)((uVar2 >> 3) + 0x160 + param_1);
          *pbVar1 = *pbVar1 ^ '\x01' << ((byte)uVar2 & 7);
        }
        if ((*(byte *)((int)param_2 + 5) & 4) != 0) {
          uVar5 = (uint)*param_2 * 0x10 - 0x18;
          if (((*(byte *)((int)param_2 + 5) & 2) != 0) && (4 < uVar5)) {
            uVar5 = (uint)*param_2 * 0x10 - 0x1c;
          }
          RtlCompareMemoryUlong(param_2 + 0xc,uVar5,0xfeeefeee);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*param_2;
      }
      bVar6 = *(byte *)((int)puVar7 + 5) & 0x10;
      *(byte *)((int)param_2 + 5) = bVar6;
      if (bVar6 != 0) {
        *(ushort **)(*(int *)(param_1 + 0x60 + (uint)(byte)param_2[2] * 4) + 0x40) = param_2;
      }
      piVar3 = *(int **)(puVar7 + 4);
      piVar4 = *(int **)(puVar7 + 6);
      *piVar4 = (int)piVar3;
      piVar3[1] = (int)piVar4;
      if ((piVar3 == piVar4) && (uVar2 = *puVar7, uVar2 < 0x80)) {
        pbVar1 = (byte *)((uVar2 >> 3) + 0x160 + param_1);
        *pbVar1 = *pbVar1 ^ '\x01' << ((byte)uVar2 & 7);
      }
      if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
        uVar5 = (uint)*puVar7 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar7 + 5) & 2) != 0) && (4 < uVar5)) {
          uVar5 = (uint)*puVar7 * 0x10 - 0x1c;
        }
        RtlCompareMemoryUlong(puVar7 + 0xc,uVar5,0xfeeefeee);
      }
      *(uint *)param_3 = *(int *)param_3 + (uint)*puVar7;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*puVar7;
      *param_2 = *param_3;
      if ((*(byte *)((int)param_2 + 5) & 0x10) == 0) {
        param_2[*(int *)param_3 * 8 + 1] = *param_3;
      }
    }
  }
  return param_2;
}
