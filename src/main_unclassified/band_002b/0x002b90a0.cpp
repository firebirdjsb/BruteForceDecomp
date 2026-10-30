/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D40B6C6D33A61605923B28DD4BF971F3496B6EC1C507BFF2B96C4C7BA0A8A1B7
 * Entry: 0x002b90a0, Ghidra index: 9868, label: FUN_002b90a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b90a0(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_104 [10];
  undefined4 local_dc;
  undefined4 local_c8;
  undefined4 local_c4 [10];
  undefined4 local_9c;
  undefined4 local_88;
  undefined1 local_84 [12];
  undefined4 local_78 [12];
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined4 local_38 [12];
  undefined4 local_8;
  
  puVar3 = local_c4 + 3;
  iVar4 = 3;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_88 = 0;
  if (param_2 == 0) {
    puVar3 = local_c4;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_c4[0] = 0x3f800000;
    local_c4[5] = 0x3f800000;
    local_9c = 0x3f800000;
  }
  else {
    FUN_002b3500(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x108),
                 *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x10c));
  }
  puVar3 = local_104 + 3;
  iVar4 = 3;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_c8 = 0;
  if (param_7 == 0) {
    puVar3 = local_104;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_104[0] = 0x3f800000;
    local_104[5] = 0x3f800000;
    local_dc = 0x3f800000;
  }
  else {
    FUN_002b3500(*(undefined4 *)(*(int *)(param_7 + 0x14) + 0x108),
                 *(undefined4 *)(*(int *)(param_7 + 0x14) + 0x10c));
  }
  puVar3 = local_78;
  iVar4 = 3;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_48 = 0;
  FUN_002b6400(local_104,local_c4,local_84);
  if ((param_4 == 0) && (param_3 == (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    puVar3 = (undefined4 *)(param_1 + 8);
    *(undefined4 **)(param_1 + 0x48) = puVar3;
    if (param_4 == 0) {
      puVar5 = puVar3;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *puVar3 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
    }
    else if ((((param_6 == 2) || (param_5 == 2)) || (param_6 == 1)) || (param_5 == 1)) {
      FUN_002b6ac0();
    }
    else {
      FUN_002b6aa0();
    }
    if (param_3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      *(undefined4 *)(param_1 + 0x38) = *param_3;
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      *(undefined4 *)(param_1 + 0x40) = uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_8 == 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    *(int *)(param_1 + 0xc4) = param_1 + 0x84;
    puVar3 = local_38;
    iVar4 = 3;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_8 = 0;
    FUN_002b6340(local_84,*(undefined4 *)(param_1 + 0x48),local_44);
    FUN_002b6340(local_44,param_8,*(undefined4 *)(param_1 + 0xc4));
  }
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x80) = param_7;
  *(uint *)(param_1 + 0xd0) = (uint)(0 < param_5);
  *(uint *)(param_1 + 0xd4) = (uint)(param_5 != 1 && -1 < param_5 + -1);
  *(uint *)(param_1 + 0xd8) = (uint)(0 < param_5 + -2);
  *(uint *)(param_1 + 0xdc) = (uint)(0 < param_6);
  *(uint *)(param_1 + 0xe0) = (uint)(param_6 != 1 && -1 < param_6 + -1);
  *(uint *)(param_1 + 0xe4) = (uint)(0 < param_6 + -2);
  return;
}
