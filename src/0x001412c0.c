/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D5CA8A73AA7A972C0895D002245D8C998B2DCE9C67258C2C1E03E4CEDA821E2
 * Entry: 0x001412c0, Ghidra index: 4101, label: FUN_001412c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001412c0(undefined4 *param_1,uint param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined4 *local_8;
  undefined4 local_4;
  
  puVar6 = *(undefined4 **)(in_EAX + 0x2c);
  cVar2 = *(char *)((int)puVar6[1] + 0x1d);
  local_20 = puVar6;
  puVar11 = (undefined4 *)puVar6[1];
  while (cVar2 == '\0') {
    if ((undefined4 *)puVar11[3] < param_1) {
      puVar3 = (undefined4 *)puVar11[2];
      puVar11 = local_20;
    }
    else {
      puVar3 = (undefined4 *)*puVar11;
    }
    local_20 = puVar11;
    puVar11 = puVar3;
    cVar2 = *(char *)((int)puVar3 + 0x1d);
  }
  if ((local_20 == puVar6) || (param_1 < (undefined4 *)local_20[3])) {
    local_1c = puVar6;
    ppuVar5 = &local_1c;
  }
  else {
    ppuVar5 = &local_20;
  }
  puVar6 = *ppuVar5;
  if (puVar6 == *(undefined4 **)(in_EAX + 0x2c)) {
    local_8 = (undefined4 *)FUN_00061500(local_c);
    piVar1 = local_8 + 1;
    local_4 = 0;
    iVar8 = FUN_000ff730(local_c,local_8,local_8[1],&param_3);
    FUN_000b2a50();
    *piVar1 = iVar8;
    **(int **)(iVar8 + 4) = iVar8;
    local_18[0] = (undefined1)param_3;
    local_14 = (undefined4 *)FUN_002ad910(local_18);
    *(undefined1 *)((int)local_14 + 0x1d) = 1;
    local_14[1] = local_14;
    *local_14 = local_14;
    local_14[2] = local_14;
    local_10 = 0;
    puVar9 = (undefined1 *)FUN_00141700(local_18,&param_2);
    if (puVar9 != local_c) {
      if (local_8 == (undefined4 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *local_8;
      }
      FUN_00142b40(uVar10,local_8);
    }
    puVar9 = (undefined1 *)FUN_00141630(&param_1);
    if (puVar9 != local_18) {
      FUN_00141cc0(&param_3,**(undefined4 **)(puVar9 + 4),*(undefined4 **)(puVar9 + 4));
      *puVar9 = local_18[0];
      FUN_00141d40();
    }
    FUN_00141cc0(&param_3,*local_14,local_14);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_14);
  }
  puVar11 = (undefined4 *)puVar6[5];
  cVar2 = *(char *)((int)puVar11[1] + 0x1d);
  param_1 = puVar11;
  puVar3 = (undefined4 *)puVar11[1];
  while (cVar2 == '\0') {
    if ((uint)puVar3[3] < param_2) {
      puVar4 = (undefined4 *)puVar3[2];
      puVar3 = param_1;
    }
    else {
      puVar4 = (undefined4 *)*puVar3;
    }
    param_1 = puVar3;
    puVar3 = puVar4;
    cVar2 = *(char *)((int)puVar4 + 0x1d);
  }
  if ((param_1 == puVar11) || (param_2 < (uint)param_1[3])) {
    local_1c = puVar11;
    ppuVar5 = &local_1c;
  }
  else {
    ppuVar5 = &param_1;
  }
  puVar11 = *ppuVar5;
  if (puVar11 == (undefined4 *)puVar6[5]) {
    local_8 = (undefined4 *)FUN_00061500(local_c);
    piVar1 = local_8 + 1;
    local_4 = 0;
    iVar8 = FUN_000ff730(local_c,local_8,local_8[1],&param_3);
    FUN_000b2a50();
    *piVar1 = iVar8;
    **(int **)(iVar8 + 4) = iVar8;
    puVar9 = (undefined1 *)FUN_00141700(puVar6 + 4,&param_2);
    if (puVar9 != local_c) {
      if (local_8 == (undefined4 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *local_8;
      }
      FUN_00142b40(uVar10,local_8);
    }
    FUN_00085620();
    return;
  }
  if ((undefined4 *)puVar11[5] == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = *(undefined4 **)puVar11[5];
  }
  do {
    if (puVar6 == (undefined4 *)puVar11[5]) {
LAB_0014139d:
      iVar8 = puVar11[5];
      iVar7 = FUN_000ff730(puVar11 + 4,iVar8,*(undefined4 *)(iVar8 + 4),&param_3);
      FUN_000b2a50();
      *(int *)(iVar8 + 4) = iVar7;
      **(int **)(iVar7 + 4) = iVar7;
      return;
    }
    if (puVar6[2] == param_3) {
      if (puVar6 != (undefined4 *)puVar11[5]) {
        return;
      }
      goto LAB_0014139d;
    }
    puVar6 = (undefined4 *)*puVar6;
  } while( true );
}
