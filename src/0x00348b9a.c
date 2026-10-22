/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25DB5112F19914DD0D106C1DC99A2996087B94F387229C3ACCD94130C4B09151
 * Entry: 0x00348b9a, Ghidra index: 12908, label: FUN_00348b9a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00348b9a(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 uVar10;
  int iVar9;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  uint local_c;
  int local_8;
  
  puVar3 = param_1;
  pbVar11 = (byte *)*param_1;
  iVar13 = *(int *)(pbVar11 + 0x10);
  bVar1 = *pbVar11;
  iVar5 = (bVar1 & 0xf) * 4;
  uVar4 = *(ushort *)(param_1 + 1);
  local_c = (uint)uVar4;
  pbVar11[10] = 0;
  pbVar11[0xb] = 0;
  *(ushort *)(pbVar11 + 2) = CONCAT11((char)uVar4,(char)(uVar4 >> 8));
  uVar4 = FUN_0035628c(0,pbVar11,iVar5);
  *(ushort *)(pbVar11 + 10) = ~uVar4;
  uVar6 = param_1[2] & 7;
  iVar9 = local_c + (bVar1 & 0xf) * -4;
  uVar10 = (undefined1)((uint)iVar9 >> 8);
  if (((uVar6 == 3) || (uVar6 == 6)) || (3 < uVar6)) {
    local_18 = *(undefined4 *)(pbVar11 + 0xc);
    local_10 = 0;
    local_e = CONCAT11((char)iVar9,uVar10);
    pbVar11 = pbVar11 + iVar5;
    local_f = 0x11;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    *(undefined2 *)(pbVar11 + 4) = local_e;
    pbVar12 = pbVar11;
    local_14 = iVar13;
    uVar7 = FUN_0035628c(0,&local_18,0xc);
    uVar6 = FUN_0035628c(uVar7,pbVar12,iVar9);
    *(ushort *)(pbVar11 + 6) = (short)~uVar6 - (ushort)(~uVar6 == 0);
  }
  else if ((uVar6 == 2) || (uVar6 == 5)) {
    local_18 = *(undefined4 *)(pbVar11 + 0xc);
    local_10 = 0;
    local_e = CONCAT11((char)iVar9,uVar10);
    pbVar11 = pbVar11 + iVar5;
    local_f = 6;
    pbVar11[0x12] = 0;
    pbVar11[0x13] = 0;
    pbVar11[0x10] = 0;
    pbVar11[0x11] = 0;
    pbVar12 = pbVar11;
    local_14 = iVar13;
    uVar7 = FUN_0035628c(0,&local_18,0xc);
    uVar4 = FUN_0035628c(uVar7,pbVar12,iVar9);
    *(ushort *)(pbVar11 + 0x10) = ~uVar4;
  }
  iVar5 = local_8;
  uVar6 = param_1[2];
  if ((int)uVar6 < 0) {
    param_1[2] = uVar6 & 0x7fffffff;
    iVar13 = 0;
    goto LAB_00348dbc;
  }
  if ((((uVar6 & 0x4000000) != 0) || (iVar13 == *(int *)(local_8 + 0x268))) ||
     (((byte)iVar13 == 0x7f || ((iVar13 == -1 || (((byte)iVar13 & 0xf0) == 0xe0))))))
  goto LAB_00348dbc;
  if (*(char *)(local_8 + 0x8c0) == '\x16') {
    param_1[2] = uVar6 | 0x80000;
    puVar8 = (undefined4 *)FUN_0034c841();
    *puVar8 = *(undefined4 *)(iVar5 + 0xa4c);
    *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(iVar5 + 0xa50);
    *(undefined4 *)((int)puVar8 + 6) = *(undefined4 *)(local_8 + 0x1e0);
    *(undefined2 *)((int)puVar8 + 10) = *(undefined2 *)(local_8 + 0x1e4);
    *(undefined2 *)(puVar8 + 3) = *(undefined2 *)(local_8 + 0xa54);
    *(undefined1 *)((int)puVar8 + 0xf) = 0;
    *(undefined1 *)((int)puVar8 + 0xe) = 0x11;
    *(undefined2 *)(puVar8 + 4) = *(undefined2 *)(local_8 + 0xa52);
    sVar2 = *(short *)(param_1 + 1);
    *(undefined2 *)(puVar8 + 5) = 0x2100;
    *(ushort *)((int)puVar8 + 0x12) = CONCAT11((char)(sVar2 + 2),(char)((ushort)(sVar2 + 2) >> 8));
    goto LAB_00348dbc;
  }
  if (param_2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *param_2;
  }
  if (iVar5 == 0) {
LAB_00348d83:
    iVar5 = FUN_00348090(iVar13);
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    if (iVar5 == 0) {
      iVar13 = 0;
      goto LAB_00348dbc;
    }
  }
  else if ((*(byte *)(iVar5 + 0xc) & 1) != 0) {
    FUN_00347b2c(iVar5);
    goto LAB_00348d83;
  }
  param_1 = (undefined4 *)iVar13;
  if ((*(byte *)(iVar5 + 0xc) & 8) == 0) {
    param_1 = *(undefined4 **)(iVar5 + 0x18);
  }
  iVar13 = (int)param_1;
  if (param_2 == (int *)0x0) {
    FUN_00347b2c(iVar5);
  }
LAB_00348dbc:
  FUN_00355bae(puVar3,iVar13);
  return;
}
