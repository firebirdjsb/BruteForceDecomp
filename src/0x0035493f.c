/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17058C133E8CCC1446FB3FA652D6C0A3934498B412C4F1E2A288A7B2AA2520D6
 * Entry: 0x0035493f, Ghidra index: 13113, label: FUN_0035493f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0035493f(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int in_ECX;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint local_c;
  
  iVar6 = param_1;
  uVar12 = *param_2;
  local_c = (uVar12 & 0xff0000 | uVar12 >> 0x10) >> 8 | (uVar12 << 0x10 | uVar12 & 0xff00) << 8;
  if ((*(byte *)((int)param_2 + 9) & 0x10) != 0) {
    uVar12 = param_2[1];
    uVar12 = (uVar12 & 0xff0000 | uVar12 >> 0x10) >> 8 | (uVar12 << 0x10 | uVar12 & 0xff00) << 8;
    if (-1 < (int)(uVar12 - *(int *)(param_1 + 0x9c))) {
      if (uVar12 != *(uint *)(param_1 + 0xa0) && -1 < (int)(uVar12 - *(uint *)(param_1 + 0xa0))) {
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 0x20000;
        return param_1;
      }
      if (((int)(*(uint *)(param_1 + 0xa8) - local_c) < 0) ||
         ((*(uint *)(param_1 + 0xa8) == local_c &&
          (*(uint *)(param_1 + 0xac) == uVar12 || (int)(*(uint *)(param_1 + 0xac) - uVar12) < 0))))
      {
        uVar3 = *(ushort *)((int)param_2 + 10);
        *(uint *)(param_1 + 0xa8) = local_c;
        *(uint *)(param_1 + 0xac) = uVar12;
        *(uint *)(param_1 + 0xb0) = (uint)(ushort)(uVar3 >> 8 | uVar3 << 8);
      }
      FUN_003546c2(param_1,uVar12);
      bVar2 = *(byte *)(iVar6 + 0x7c);
      if (((4 < bVar2) && (bVar2 != 9)) && (*(int **)(iVar6 + 0x34) == (int *)(iVar6 + 0x34))) {
        if (bVar2 == 5) {
          *(undefined1 *)(iVar6 + 0x7c) = 6;
        }
        else {
          if (bVar2 == 7) {
            *(undefined1 *)(iVar6 + 0x7c) = 8;
            uVar12 = *(int *)(in_ECX + 0x1d8) + (uint)*(byte *)(in_ECX + 0x30) * 10;
            if ((*(uint *)(iVar6 + 0x94) != 0) && (*(uint *)(iVar6 + 0x94) <= uVar12)) {
              return 0;
            }
            uVar7 = FUN_0034c3bf(iVar6 + 0x6c,uVar12 - *(int *)(in_ECX + 0x1d8));
            *(undefined4 *)(iVar6 + 0x94) = uVar7;
            return 0;
          }
          if (bVar2 == 10) {
            FUN_00346cd5(iVar6,1);
            return 0;
          }
        }
      }
    }
  }
  if (6 < *(byte *)(iVar6 + 0x7c)) {
    return iVar6;
  }
  if (param_4 == 0) {
    return iVar6;
  }
  *(int *)(iVar6 + 0x88) = *(int *)(iVar6 + 0x88) + param_4;
  if ((local_c != *(uint *)(iVar6 + 0xc4)) || (*(uint *)(iVar6 + 200) < param_4)) {
    iVar8 = FUN_0035303b(iVar6,local_c,local_c + param_4,&param_4,&param_1);
    if (iVar8 == 0) {
      *(int *)(iVar6 + 0x88) = *(int *)(iVar6 + 0x88) + 0x20000;
      return iVar6;
    }
    param_3 = (uint *)((int)param_3 + (param_4 - local_c));
    local_c = param_4;
    param_4 = param_1 - param_4;
  }
  uVar12 = param_4;
  if ((*(byte *)(iVar6 + 0xc) & 0x10) != 0) {
    FUN_00353a7a(iVar6);
    FUN_00353845(iVar6,0x80072746);
    return 0;
  }
  if (((*(int *)(iVar6 + 0x20) != 0) && (local_c == *(uint *)(iVar6 + 0xc4))) &&
     (*(int **)(iVar6 + 0x24) == (int *)(iVar6 + 0x24))) {
    uVar9 = FUN_003533cf(iVar6,*(undefined1 *)((int)param_2 + 9),param_3,param_4);
    if (uVar9 == uVar12) {
      return iVar6;
    }
    param_3 = (uint *)((int)param_3 + uVar9);
    param_4 = uVar12 - uVar9;
    local_c = local_c + uVar9;
  }
  uVar12 = param_4;
  puVar10 = (uint *)FUN_0034c58a(param_4 + 0x14,0x6254454e);
  if (puVar10 != (uint *)0x0) {
    puVar10[3] = local_c + uVar12;
    *(undefined2 *)(puVar10 + 4) = 0x14;
    *(undefined1 *)((int)puVar10 + 0x12) = *(undefined1 *)((int)param_2 + 9);
    puVar10[2] = uVar12;
    puVar13 = param_3;
    puVar14 = puVar10 + 5;
    for (uVar9 = uVar12 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(char *)puVar14 = (char)*puVar13;
      puVar13 = (uint *)((int)puVar13 + 1);
      puVar14 = (uint *)((int)puVar14 + 1);
    }
    if (local_c != *(uint *)(iVar6 + 0xc4)) {
      *(int *)(iVar6 + 0x88) = *(int *)(iVar6 + 0x88) + 0x20000;
      FUN_0035332d(iVar6,local_c,puVar10);
      return iVar6;
    }
    uVar12 = -(uint)(*(uint *)(iVar6 + 0x28) != iVar6 + 0x24U) & *(uint *)(iVar6 + 0x28);
    if ((uVar12 == 0) || (*(uint *)(uVar12 + 0xc) == local_c)) {
      puVar4 = *(undefined4 **)(iVar6 + 0x28);
      *puVar10 = iVar6 + 0x24U;
      puVar10[1] = (uint)puVar4;
      *puVar4 = puVar10;
      *(uint **)(iVar6 + 0x28) = puVar10;
      uVar12 = param_4;
    }
    else {
      uVar12 = FUN_0035327b(iVar6,local_c,puVar10);
    }
    *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) + uVar12;
    FUN_00353181(iVar6,uVar12);
    iVar8 = *(int *)(iVar6 + 0x20);
    if (iVar8 == 0) {
      if ((*(byte *)(iVar6 + 0xd) & 8) != 0) {
        KeSetEvent(iVar6 + 0x10,1,0);
        return iVar6;
      }
      return iVar6;
    }
    iVar5 = *(int *)(iVar8 + 4);
    iVar11 = FUN_003534eb(iVar6,iVar8);
    piVar1 = (int *)(iVar5 + 8);
    *piVar1 = *piVar1 + iVar11;
    if (*(int *)(iVar8 + 0x14) == 0) {
      FUN_00345e88(iVar6,iVar8,0);
    }
    FUN_00353181(iVar6,0);
    return iVar6;
  }
  return iVar6;
}
