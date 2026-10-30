/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98CCAFFBD24D9C3060546C9E7690453E80BB7254122DE72148C18E3887184610
 * Entry: 0x0034aa10, Ghidra index: 12941, label: FUN_0034aa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034aa10(undefined4 param_1,int param_2,short param_3,short *param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int in_ECX;
  int *piVar7;
  short *psVar8;
  byte *pbVar9;
  int *piVar10;
  short *psVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  int local_48 [2];
  short local_3e [13];
  int *local_24;
  int *local_20;
  int local_1c;
  byte *local_18;
  int *local_14;
  byte *local_10;
  int local_c;
  byte local_5;
  
  if ((ushort)param_4[1] < 0x80) {
    return;
  }
  local_10 = (byte *)(param_4 + 4);
  local_5 = *local_10 & 0xc0;
  if ((local_5 == 0x80) && (*(int *)(in_ECX + 0xae8) == 0)) {
    return;
  }
  local_18 = (byte *)0x0;
  local_c = in_ECX;
  if (*param_4 == 0x5800) {
    piVar2 = (int *)FUN_00347b83(local_10);
    if (piVar2 == (int *)0x0) {
      return;
    }
    if ((*(uint *)(param_4 + 8) & 0xffffff00) == 0) {
      return;
    }
    cVar1 = (char)*(uint *)(param_4 + 8);
  }
  else {
    local_18 = (byte *)FUN_00348472(*(undefined4 *)(param_4 + 8));
    if (local_18 == (byte *)0x0) {
      return;
    }
    if (param_2 == 0) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if ((*local_18 & 3) == 0) {
      return;
    }
    if (*(int *)(param_4 + 0x16) < *(int *)(local_18 + 0xec)) {
      return;
    }
    if ((*(int *)(param_4 + 0x16) <= *(int *)(local_18 + 0xec)) &&
       (*(uint *)(param_4 + 0x14) <= *(uint *)(local_18 + 0xe8))) {
      return;
    }
    if ((local_18[2] != 3) && (local_18[2] != 6)) {
      return;
    }
    iVar3 = 2;
    bVar13 = true;
    pbVar5 = local_18 + 0x44;
    piVar2 = (int *)(param_4 + 0xc);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar13 = *(int *)pbVar5 == *piVar2;
      pbVar5 = pbVar5 + 4;
      piVar2 = piVar2 + 1;
    } while (bVar13);
    if (!bVar13) {
      return;
    }
    piVar2 = *(int **)(local_18 + 0xc0);
    iVar3 = 2;
    bVar13 = true;
    piVar7 = piVar2;
    pbVar5 = local_10;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar13 = *piVar7 == *(int *)pbVar5;
      piVar7 = piVar7 + 1;
      pbVar5 = pbVar5 + 4;
    } while (bVar13);
    if (!bVar13) {
      return;
    }
    if ((*(uint *)(param_4 + 10) & 0xffffff00) == 0) {
      return;
    }
    cVar1 = (char)*(uint *)(param_4 + 10);
  }
  if (cVar1 != '\0') {
    return;
  }
  local_1c = 0;
  local_14 = piVar2;
  if (local_5 != 0x80) {
    local_1c = FUN_0034c50e(param_4,param_5,0x5880);
    if (local_1c == 0) {
      return;
    }
    if (*(short *)(local_1c + 2) != 100) {
      return;
    }
    iVar3 = FUN_0034c538(local_1c + 4);
    if (iVar3 != 0) {
      return;
    }
  }
  iVar3 = FUN_0034c50e(param_4,param_5,0x5881);
  if (iVar3 == 0) {
    return;
  }
  if (*(short *)(iVar3 + 2) != 0x18) {
    return;
  }
  if ((iVar3 - (int)param_4) + 0x18 != param_5) {
    return;
  }
  local_24 = piVar2 + 2;
  iVar3 = FUN_0034c4a1(local_24,0x10,param_4,iVar3 - (int)param_4,0,0,iVar3 + 4,0x14);
  if (iVar3 == 0) {
    return;
  }
  piVar7 = (int *)(param_4 + 0x1c);
  local_20 = piVar7;
  FUN_00347c42(0,piVar2 + 6,0x18,param_4 + 0x18,piVar7,0x48);
  FUN_0034877b(local_48);
  piVar2 = (int *)(param_4 + 0x2e);
  if (*param_4 != 0x5800) {
    piVar2 = piVar7;
  }
  iVar3 = 9;
  bVar13 = true;
  piVar7 = local_48;
  piVar10 = piVar2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar13 = *piVar7 == *piVar10;
    piVar7 = piVar7 + 1;
    piVar10 = piVar10 + 1;
  } while (bVar13);
  if (!bVar13) {
    if ((*local_10 & 0xc0) != 0) {
      return;
    }
    iVar3 = 3;
    bVar13 = true;
    psVar8 = local_3e;
    psVar11 = (short *)((int)piVar2 + 10);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar13 = *psVar8 == *psVar11;
      psVar8 = psVar8 + 1;
      psVar11 = psVar11 + 1;
    } while (bVar13);
    if (!bVar13) {
      return;
    }
  }
  piVar2 = local_20;
  if (*param_4 != 0x5800) {
    piVar2 = (int *)(param_4 + 0x2e);
  }
  if ((*local_10 & 0xc0) == 0) {
    iVar4 = FUN_0034c841();
    iVar3 = 3;
    bVar13 = true;
    psVar8 = (short *)(iVar4 + 6);
    psVar11 = (short *)((int)piVar2 + 10);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar13 = *psVar8 == *psVar11;
      psVar8 = psVar8 + 1;
      psVar11 = psVar11 + 1;
    } while (bVar13);
    if (!bVar13) {
      return;
    }
  }
  if ((*local_10 & 0xc0) == 0x80) {
    iVar3 = FUN_0034cc6e();
    if (iVar3 == 0) {
      return;
    }
    iVar3 = FUN_0034cc6e();
    if (iVar3 == 0) {
      return;
    }
    if ((short)piVar2[2] == 0) {
      return;
    }
  }
  if (*param_4 != 0x5800) {
    *(undefined4 *)(local_18 + 0xe8) = *(undefined4 *)(param_4 + 0x14);
    *(undefined4 *)(local_18 + 0xec) = *(undefined4 *)(param_4 + 0x16);
    if ((*local_18 & 2) != 0) {
      *(int *)(local_18 + 0xb8) = param_2;
      *(short *)(local_18 + 0xbc) = param_3;
    }
    if (local_18[2] == 6) {
      iVar3 = 2;
      bVar13 = true;
      pbVar5 = local_18 + 0x4c;
      piVar2 = (int *)(param_4 + 0x10);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar13 = *(int *)pbVar5 == *piVar2;
        pbVar5 = pbVar5 + 4;
        piVar2 = piVar2 + 1;
      } while (bVar13);
      if (bVar13) goto LAB_0034af03;
    }
    *(undefined4 *)(local_18 + 0x4c) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(local_18 + 0x50) = *(undefined4 *)(param_4 + 0x12);
    *(undefined4 *)(local_18 + 8) = *(undefined4 *)(param_4 + 10);
    FUN_003484e1(local_18,local_48,local_24,0x10,local_14 + 0xc,local_14 + 0x24,
                 -(uint)(local_1c != 0) & local_1c + 4U,1);
    FUN_0034c35a(local_18 + 0x34,0xffffffff);
LAB_0034af03:
    FUN_0034a9bb(local_18,1);
    return;
  }
  pbVar5 = (byte *)FUN_003483a7(local_20,local_10);
  if (pbVar5 != (byte *)0x0) {
    if (*(int *)(param_4 + 0x16) < *(int *)(pbVar5 + 0xec)) {
      return;
    }
    if ((*(int *)(param_4 + 0x16) <= *(int *)(pbVar5 + 0xec)) &&
       (*(uint *)(param_4 + 0x14) <= *(uint *)(pbVar5 + 0xe8))) {
      return;
    }
    if (pbVar5[2] == 3) {
      iVar3 = 6;
      bVar13 = false;
      iVar4 = 0;
      bVar14 = true;
      pbVar9 = (byte *)(local_c + 0x1e0);
      pbVar12 = (byte *)(param_4 + 0x21);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar13 = *pbVar9 < *pbVar12;
        bVar14 = *pbVar9 == *pbVar12;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar14);
      if (!bVar14) {
        iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      }
      if (0 < iVar4) {
        return;
      }
    }
    bVar6 = pbVar5[2];
    if ((bVar6 != 2) && (bVar6 != 3)) {
      if (bVar6 == 4) {
        iVar3 = 2;
        bVar13 = true;
        pbVar9 = pbVar5 + 0x44;
        piVar2 = (int *)(param_4 + 0xc);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar13 = *(int *)pbVar9 == *piVar2;
          pbVar9 = pbVar9 + 4;
          piVar2 = piVar2 + 1;
        } while (bVar13);
        if (bVar13) goto LAB_0034ad45;
      }
      *pbVar5 = *pbVar5 | 8;
      FUN_0034964a(pbVar5,0);
    }
LAB_0034ad45:
    if (pbVar5[2] == 1) {
      FUN_00349730(pbVar5,0);
      pbVar5 = (byte *)0x0;
    }
    piVar2 = local_14;
    if (pbVar5 != (byte *)0x0) goto LAB_0034ad7c;
  }
  piVar2 = local_14;
  pbVar5 = (byte *)FUN_0034a8e6(param_4 + 0x1c,local_14);
  if (pbVar5 == (byte *)0x0) {
    return;
  }
LAB_0034ad7c:
  if (pbVar5[2] != 4) {
    pbVar5[2] = 4;
    if ((*pbVar5 & 4) == 0) {
      bVar6 = *(byte *)(local_c + 0x38);
    }
    else {
      bVar6 = *(byte *)(local_c + 0x3a);
    }
    pbVar5[3] = bVar6;
    *(undefined4 *)(pbVar5 + 8) = *(undefined4 *)(param_4 + 8);
    FUN_003484af(pbVar5);
    *(undefined4 *)(pbVar5 + 0x44) = *(undefined4 *)(param_4 + 0xc);
    *(undefined4 *)(pbVar5 + 0x48) = *(undefined4 *)(param_4 + 0xe);
    FUN_0034c7e5(pbVar5 + 0x4c,8);
    FUN_003484e1(pbVar5,local_48,local_24,0x10,piVar2 + 0xc,piVar2 + 0x24,
                 -(uint)(local_1c != 0) & local_1c + 4U,0);
    if ((*pbVar5 & 4) == 0) {
      bVar6 = *(byte *)(local_c + 0x39);
    }
    else {
      bVar6 = *(byte *)(local_c + 0x3b);
    }
    FUN_0034c35a(pbVar5 + 0x34,*(int *)(local_c + 0x1d8) + (uint)bVar6 * 5);
  }
  *(undefined4 *)(pbVar5 + 0xe8) = *(undefined4 *)(param_4 + 0x14);
  *(undefined4 *)(pbVar5 + 0xec) = *(undefined4 *)(param_4 + 0x16);
  if ((((*pbVar5 & 2) != 0) && (param_2 != 0)) && (param_3 != 0)) {
    *(int *)(pbVar5 + 0xb8) = param_2;
    *(short *)(pbVar5 + 0xbc) = param_3;
  }
  FUN_00349cfc(pbVar5,0);
  return;
}
