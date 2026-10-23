/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A88B77BF202F1842E05B17B876FD498CBD3F1579D86656CCB3F0AD4B90B7576F
 * Entry: 0x0034bf1f, Ghidra index: 12950, label: FUN_0034bf1f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_00347ae8(int param_1);
void FUN_0034bf1f(undefined4 param_1,undefined4 *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  uVar4 = *(ushort *)((int)param_2 + 6);
  uVar5 = (ushort)(uVar4 >> 8 | uVar4 << 8) & 0x1fff;
  piVar7 = *(int **)(in_ECX + 0x8b4);
  uVar11 = ((uint)(ushort)(*(ushort *)(param_2 + 1) << 8) << 8 |
           *(ushort *)(param_2 + 1) & 0xffffff00) << 8 | (uint)*(byte *)((int)param_2 + 9);
  if (piVar7 == (int *)0x0) {
LAB_0034bfa6:
    if ((uint)*(byte *)(in_ECX + 8) <= *(uint *)(in_ECX + 0x8bc)) {
      return;
    }
    uVar6 = ((int)(((ulonglong)*(byte *)(in_ECX + 9) << 8) / 8) + 7U) / 8 + 0x47 & 0xfffffffc;
    piVar7 = (int *)FUN_0034cb5a(0x6c54454e,0x40001,(uint)*(byte *)(in_ECX + 9) << 8,0,uVar6,
                                 FUN_00347ae8);
    if (piVar7 == (int *)0x0) {
      return;
    }
    piVar7[7] = -1;
    piVar7[5] = 0;
    piVar7[8] = (int)&LAB_00347b1c;
    piVar7[9] = param_2[3];
    iVar8 = param_2[4];
    piVar7[0xc] = 0;
    piVar7[0xd] = 0;
    piVar7[0xe] = 0;
    piVar7[0xf] = 0;
    piVar7[0x10] = 0;
    piVar7[10] = iVar8;
    piVar7[0xb] = uVar11;
    piVar12 = piVar7 + 0x11;
    for (uVar11 = uVar6 - 0x44 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *piVar12 = 0;
      piVar12 = piVar12 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)piVar12 = 0;
      piVar12 = (int *)((int)piVar12 + 1);
    }
    FUN_0034c35a(piVar7 + 5,(uint)*(byte *)(in_ECX + 0x15) * 5 + *(int *)(in_ECX + 0x1d8));
    FUN_0034c2f0(piVar7);
    *(int *)(in_ECX + 0x8bc) = *(int *)(in_ECX + 0x8bc) + 1;
  }
  else {
    do {
      if (((piVar7[0xb] == uVar11) && (piVar7[9] == param_2[3])) && (piVar7[10] == param_2[4]))
      break;
      piVar7 = (int *)piVar7[3];
    } while (piVar7 != (int *)0x0);
    if (piVar7 == (int *)0x0) goto LAB_0034bfa6;
  }
  if (uVar4 >> 8 == 0 && (uVar4 << 8 & 0x1fff) == 0) {
    if (piVar7[0xc] != 0) {
      if (piVar7[0xc] == param_3) {
        return;
      }
      goto LAB_0034c1ed;
    }
    puVar10 = param_2;
    puVar13 = (undefined4 *)((*piVar7 - param_3) + 0x3c);
    for (uVar11 = param_3 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar11 = param_3 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    piVar7[0xc] = param_3;
  }
  uVar11 = param_4 - param_3;
  if (uVar11 != 0) {
    iVar8 = uVar11 + uVar5 * 8;
    uVar6 = (uVar11 + 7 >> 3) + uVar5;
    if ((uint)*(ushort *)(piVar7 + 1) < iVar8 + 0x3cU) goto LAB_0034c1ed;
    if (((uVar4 & 0xff) >> 5 & 1) == 0) {
      if (piVar7[0xd] != 0) {
        bVar14 = piVar7[0xd] == iVar8;
        goto LAB_0034c11a;
      }
      if (uVar6 <= (uint)piVar7[0x10]) goto LAB_0034c1ed;
      piVar7[0xd] = iVar8;
      piVar7[0xf] = uVar6;
    }
    else {
      bVar14 = (uVar11 & 7) == 0;
LAB_0034c11a:
      if (!bVar14) goto LAB_0034c1ed;
    }
    puVar10 = (undefined4 *)((int)param_2 + param_3);
    puVar13 = (undefined4 *)(uVar5 * 8 + 0x3c + *piVar7);
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    if ((piVar7[0xf] != 0) && ((uint)piVar7[0xf] < uVar6)) goto LAB_0034c1ed;
    if ((uint)piVar7[0x10] < uVar6) {
      piVar7[0x10] = uVar6;
    }
    for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
      pbVar1 = (byte *)((uVar5 >> 3) + 0x44 + (int)piVar7);
      bVar3 = (byte)(1 << ((byte)uVar5 & 7));
      piVar7[0xe] = piVar7[0xe] + (uint)((*pbVar1 & bVar3) == 0);
      *pbVar1 = *pbVar1 | bVar3;
    }
  }
  iVar8 = piVar7[0xc];
  if (iVar8 == 0) {
    return;
  }
  if (piVar7[0xd] == 0) {
    return;
  }
  if (piVar7[0xe] != piVar7[0xf]) {
    return;
  }
  *piVar7 = *piVar7 + (0x3c - iVar8);
  iVar2 = *piVar7;
  iVar8 = iVar8 + piVar7[0xd];
  piVar7[2] = piVar7[2] & 0xfffffff9U | 1;
  *(short *)(piVar7 + 1) = (short)iVar8;
  *(undefined2 *)(iVar2 + 6) = 0;
  *(undefined2 *)(iVar2 + 10) = 0;
  *(ushort *)(iVar2 + 2) = CONCAT11((char)iVar8,(char)((uint)iVar8 >> 8));
  uVar4 = FUN_0035628c(0,iVar2,piVar7[0xc]);
  *(ushort *)(iVar2 + 10) = ~uVar4;
  FUN_0034bd47(piVar7);
LAB_0034c1ed:
  FUN_00347ae8(piVar7);
  return;
}
