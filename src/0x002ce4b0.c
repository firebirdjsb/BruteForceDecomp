/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2067F59D2A352D0CFC7FDA05D6CF30F88FFD0798F8906D6BEA0D632830FF7E6
 * Entry: 0x002ce4b0, Ghidra index: 10180, label: FUN_002ce4b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ce4b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_1fc;
  undefined4 local_1f4 [10];
  undefined4 local_1cc;
  undefined4 local_1b8;
  undefined4 local_1b4 [10];
  undefined4 local_18c;
  undefined4 local_178;
  undefined4 local_174 [10];
  undefined4 local_14c;
  undefined4 local_138;
  undefined4 local_134 [10];
  undefined4 local_10c;
  undefined4 local_f8;
  undefined1 local_f4 [12];
  undefined4 local_e8 [12];
  undefined4 local_b8;
  undefined1 local_b4 [12];
  undefined4 local_a8 [12];
  undefined4 local_78;
  undefined1 local_74 [12];
  undefined4 local_68 [9];
  undefined1 local_44 [12];
  undefined4 local_38 [12];
  undefined4 local_8;
  
  *(undefined1 *)(param_1 + 0x10c) = 2;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 0x80);
  if ((iVar1 != 0) && (pbVar3 = *(byte **)(iVar1 + 0x90), (*pbVar3 & 0xc) == 0)) {
    if (*(ushort *)(param_1 + 8) <= *(ushort *)(param_1 + 10)) {
      FUN_002ccf80();
    }
    *(byte **)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 10) * 4) = pbVar3;
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  }
  if ((iVar2 != 0) && (pbVar3 = *(byte **)(iVar2 + 0x90), (*pbVar3 & 0xc) == 0)) {
    if (*(ushort *)(param_1 + 8) <= *(ushort *)(param_1 + 10)) {
      FUN_002ccf80();
    }
    *(byte **)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 10) * 4) = pbVar3;
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  }
  if (*(int *)(param_2 + 0xc4) != 0) {
    FUN_002b3c60();
  }
  puVar5 = local_174 + 3;
  iVar8 = 3;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_138 = 0;
  if (iVar1 == 0) {
    puVar5 = local_174;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_174[0] = 0x3f800000;
    local_174[5] = 0x3f800000;
    local_14c = 0x3f800000;
  }
  else {
    FUN_002b3500(*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x108),
                 *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10c));
  }
  puVar5 = local_134 + 3;
  iVar8 = 3;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_f8 = 0;
  if (iVar2 == 0) {
    puVar5 = local_134;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_134[0] = 0x3f800000;
    local_134[5] = 0x3f800000;
    local_10c = 0x3f800000;
  }
  else {
    FUN_002b3500(*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x108),
                 *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x10c));
  }
  puVar5 = local_e8;
  iVar8 = 3;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_b8 = 0;
  FUN_002b6400(local_174,local_134,local_f4);
  puVar5 = local_1f4 + 3;
  iVar8 = 3;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_1b8 = 0;
  if (iVar1 == 0) {
    puVar5 = local_1f4;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_1f4[0] = 0x3f800000;
    local_1f4[5] = 0x3f800000;
    local_1cc = 0x3f800000;
  }
  else {
    FUN_002b3420();
  }
  puVar5 = local_1b4 + 3;
  iVar8 = 3;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_178 = 0;
  if (iVar2 == 0) {
    puVar5 = local_1b4;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_1b4[0] = 0x3f800000;
    local_1b4[5] = 0x3f800000;
    local_18c = 0x3f800000;
  }
  else {
    FUN_002b3420();
  }
  puVar5 = local_a8;
  iVar8 = 3;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_78 = 0;
  FUN_002b6340(local_1f4,local_f4,local_b4);
  puVar5 = local_38;
  iVar8 = 3;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_8 = 0;
  FUN_002b6bf0(local_b4,local_1b4,local_44);
  if (*(int *)(param_2 + 0x48) == 0) {
    puVar5 = local_1f4;
    puVar10 = (undefined4 *)(param_1 + 0x70);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_002b68d0(0x2edbe6ff);
  }
  else {
    FUN_002b6340(local_1f4,*(int *)(param_2 + 0x48),param_1 + 0x70);
    FUN_002b68d0(0x2edbe6ff);
  }
  iVar8 = param_1 + 0xb8;
  if (*(int *)(param_2 + 0xc4) == 0) {
    FUN_002b6340(param_1 + 0x70,local_44,iVar8);
  }
  else {
    FUN_002b6340(local_1b4,*(int *)(param_2 + 0xc4),iVar8);
    FUN_002b68d0(0x2edbe6ff);
  }
  if (*(int *)(param_2 + 0x7c) == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  else {
    iVar4 = FUN_002ea01d(0x30);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      puVar5 = (undefined4 *)(iVar4 + 0xc);
      iVar9 = 3;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(int *)(param_1 + 0xb4) = iVar4;
    FUN_002b6240(local_1f4,*(undefined4 *)(param_2 + 0x7c),iVar4);
    FUN_002b6ed0();
    puVar5 = local_68;
    iVar4 = 3;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_002b6cb0();
    iVar4 = FUN_002ea01d(0x30);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      puVar5 = (undefined4 *)(iVar4 + 0xc);
      iVar9 = 3;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(int *)(param_1 + 0xfc) = iVar4;
    FUN_002b6100(local_74,iVar8,iVar4);
  }
  *(int *)(param_1 + 0xf8) = iVar2;
  *(int *)(param_1 + 0xb0) = iVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x107) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  FUN_002ce2c0();
  FUN_002ce3a0();
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x100);
  piVar7 = (int *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0xe8);
  iVar1 = *piVar7;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0xec);
  iVar2 = *(int *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0xf0);
  iVar8 = *(int *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xf4);
  iVar4 = *(int *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0xf8);
  iVar9 = *(int *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0xfc);
  if (*(int *)(param_2 + 300) == 0 &&
      (iVar9 == 0 && (iVar4 == 0 && (iVar8 == 0 && (iVar2 == 0 && iVar1 == 0))))) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    uVar6 = FUN_002ea01d(0x30);
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    local_1fc = 6;
    do {
      *(int *)((int)piVar7 + *(int *)(param_1 + 0x6c) + (-0x118 - param_2)) = piVar7[6];
      *(int *)((int)piVar7 + *(int *)(param_1 + 0x6c) + (-0x100 - param_2)) = *piVar7;
      piVar7 = piVar7 + 1;
      local_1fc = local_1fc + -1;
    } while (local_1fc != 0);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc;
  return;
}
