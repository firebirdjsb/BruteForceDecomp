/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 223A6BD607C361E93F722CE19EDB6D7C67DCB3427490B74FDBD922C268DB3E23
 * Entry: 0x00348e95, Ghidra index: 12911, label: FUN_00348e95
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void FUN_00348e95(int *param_1,byte *param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  int in_ECX;
  uint uVar8;
  int local_3c;
  int local_38;
  byte *local_34;
  undefined2 *local_30;
  byte *local_2c;
  uint local_28;
  undefined1 local_24 [4];
  byte *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined2 *local_c;
  uint local_8;
  
  piVar5 = param_1;
  local_10 = *param_1;
  puVar6 = (undefined2 *)FUN_0034c855();
  local_30 = (undefined2 *)((*(ushort *)(param_1 + 1) - 0xc) + *param_1);
  local_c = puVar6;
  puVar7 = (undefined4 *)FUN_0034c841();
  if (param_2 == (byte *)0x0) {
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 0xb) | 4;
    *(undefined4 *)((int)puVar7 + 6) = *(undefined4 *)(in_ECX + 0x1e0);
    *(undefined2 *)((int)puVar7 + 10) = *(undefined2 *)(in_ECX + 0x1e4);
    *puVar7 = 0xffffffff;
    *(undefined2 *)(puVar7 + 1) = 0xffff;
    *(undefined2 *)(puVar7 + 3) = 8;
    *(undefined4 *)(local_10 + 0xc) = 0x1000000;
    *local_c = 0x20c;
    local_c[1] = 0x20c;
    param_2 = (byte *)(local_c + 4);
    *(undefined4 *)param_2 = 0;
    FUN_0034c7e5(&local_8,4);
    local_8 = local_8 << 0x10 | local_8 & 0xffff;
    local_34 = (byte *)(in_ECX + 0xa90);
    local_2c = (byte *)(in_ECX + 0xaa0);
    local_28 = 0x18;
    local_20 = (byte *)(in_ECX + 0xab8);
    puVar6 = local_c;
  }
  else {
    if ((*param_2 & 6) == 0) {
      *(undefined4 *)(local_10 + 0xc) = 0x1000000;
      *puVar6 = 0x20c;
      *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 0xb) | 4;
      *puVar7 = *(undefined4 *)(param_2 + 0xce);
      *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(param_2 + 0xd2);
      *(undefined4 *)((int)puVar7 + 6) = *(undefined4 *)(in_ECX + 0x1e0);
      *(undefined2 *)((int)puVar7 + 10) = *(undefined2 *)(in_ECX + 0x1e4);
      *(undefined2 *)(puVar7 + 3) = 8;
      puVar6 = local_c;
    }
    else {
      *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(in_ECX + 0x268);
      *puVar6 = *(undefined2 *)(in_ECX + 0x8c6);
      if ((*(int *)(in_ECX + 0xbc0) != 0) && (param_2 != *(byte **)(in_ECX + 0xae8))) {
        puVar1 = (uint *)(param_1 + 2);
        uVar8 = *puVar1 & 7;
        if ((uVar8 == 3) || (((uVar8 == 6 || (uVar8 == 2)) || (uVar8 == 5)))) {
          iVar3 = *(int *)KeTickCount_exref;
          param_1 = (int *)*(int *)(in_ECX + 0xbc8);
          if (*(int *)(in_ECX + 0xbc8) - iVar3 < 0) {
            param_1 = (int *)iVar3;
          }
          iVar2 = (int)param_1 + 1 +
                  ((*(ushort *)(piVar5 + 1) + 0x1a) * 8000) / *(uint *)(in_ECX + 0xbc0);
          if ((iVar2 - *(int *)(in_ECX + 0xbc4)) - iVar3 < 0) {
            *(int *)(in_ECX + 0xbc8) = iVar2;
            puVar6 = local_c;
          }
          else {
            piVar5[2] = *puVar1 | 0x80000000;
            puVar6 = local_c;
          }
        }
      }
    }
    uVar4 = *(undefined4 *)(in_ECX + 0x1d8);
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    *(undefined4 *)(param_2 + 0x1c) = uVar4;
    local_8 = *(uint *)(param_2 + 0x14);
    *(undefined4 *)(local_10 + 0x10) = *(undefined4 *)(param_2 + 0xb8);
    puVar6[1] = *(undefined2 *)(param_2 + 0xbc);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 8);
    local_34 = param_2 + 0x86;
    local_2c = param_2 + 0x96;
    local_28 = (uint)*(ushort *)(param_2 + 0xb6);
    local_20 = param_2 + 0xae;
    param_2 = (byte *)(puVar6 + 4);
  }
  *local_30 = (short)local_8;
  *(short *)((int)piVar5 + 6) = (short)(local_8 >> 0x10);
  FUN_0034c1fc(&local_14,&local_1c,&local_18,&local_38,&local_3c,param_2,(int)local_30 + -1);
  *(undefined1 *)(local_10 + 9) = 0x11;
  puVar6 = puVar6 + 6;
  if (local_18 < local_1c) {
    puVar7 = (undefined4 *)((int)puVar6 + (local_14 - local_1c));
    for (uVar8 = local_1c - local_18 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar8 = local_1c - local_18 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  if (local_14 != 0) {
    FUN_00347cda(local_20,local_8,local_24);
    FUN_00347c42(1,local_2c,local_28,local_24,puVar6,local_14);
  }
  local_30[1] = (short)(local_8 >> 0x10);
  uVar4 = *(undefined4 *)param_2;
  *(undefined4 *)(local_30 + 4) = 0;
  *(undefined4 *)(local_30 + 2) = uVar4;
  FUN_0034c461(local_34,0x10,(int)puVar6 + local_14,
               (local_38 - local_18) + 0xb + local_3c & 0xfffffffc,puVar6,local_14,local_30 + 1,10);
  FUN_00348b9a(piVar5,param_3);
  return;
}
