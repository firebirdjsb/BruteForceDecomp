/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45DD08A135793A5CCC1010EB043F6192CD684341286F0C4E4692A117D59F960D
 * Entry: 0x00302790, Ghidra index: 11084, label: FUN_00302790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00302790(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_3fc [60];
  undefined4 local_3c0 [17];
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374 [8];
  undefined4 local_354 [10];
  undefined4 local_32c;
  undefined4 local_318;
  undefined4 local_314 [10];
  undefined4 local_2ec;
  undefined4 local_2d8;
  undefined4 local_2d4 [10];
  undefined4 local_2ac;
  undefined4 local_298;
  undefined4 local_294 [10];
  undefined4 local_26c;
  undefined4 local_258;
  undefined4 local_254 [15];
  undefined4 local_218;
  undefined1 local_214 [12];
  undefined4 local_208 [12];
  undefined4 local_1d8;
  undefined1 local_1d4 [12];
  undefined4 local_1c8 [12];
  undefined4 local_198;
  undefined4 local_194 [16];
  undefined1 local_154 [12];
  undefined4 local_148 [12];
  undefined4 local_118;
  undefined1 local_114 [12];
  undefined4 local_108 [12];
  undefined4 local_d8;
  undefined1 local_d4 [212];
  
  iVar3 = *(int *)(param_2 + 0x80);
  iVar1 = *(int *)(param_2 + 4);
  puVar2 = local_2d4 + 3;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_298 = 0;
  if (iVar1 == 0) {
    puVar2 = local_2d4;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_2d4[0] = 0x3f800000;
    local_2d4[5] = 0x3f800000;
    local_2ac = 0x3f800000;
  }
  else {
    FUN_002b3500(*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x108),
                 *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10c));
  }
  puVar2 = local_294 + 3;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_258 = 0;
  if (iVar3 == 0) {
    puVar2 = local_294;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_294[0] = 0x3f800000;
    local_294[5] = 0x3f800000;
    local_26c = 0x3f800000;
  }
  else {
    FUN_002b3500(*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x108),
                 *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x10c));
  }
  puVar2 = local_108;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_d8 = 0;
  FUN_002b6400(local_2d4,local_294,local_114);
  puVar2 = local_354 + 3;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_318 = 0;
  if (iVar1 == 0) {
    puVar2 = local_354;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_354[0] = 0x3f800000;
    local_354[5] = 0x3f800000;
    local_32c = 0x3f800000;
  }
  else {
    FUN_002b3420();
  }
  puVar2 = local_314 + 3;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_2d8 = 0;
  if (iVar3 == 0) {
    puVar2 = local_314;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_314[0] = 0x3f800000;
    local_314[5] = 0x3f800000;
    local_2ec = 0x3f800000;
  }
  else {
    FUN_002b3420();
  }
  puVar2 = local_148;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_118 = 0;
  FUN_002b6340(local_354,local_114,local_154);
  puVar2 = local_1c8;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_198 = 0;
  FUN_002b6bf0(local_154,local_314,local_1d4);
  puVar2 = local_254 + 3;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_218 = 0;
  puVar2 = local_208;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_1d8 = 0;
  if (*(int *)(param_2 + 0x48) == 0) {
    puVar2 = local_354;
    puVar6 = local_254;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    FUN_002b6340(local_354,*(int *)(param_2 + 0x48),local_254);
  }
  puVar2 = local_194 + 3;
  iVar5 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar2 = local_254;
  puVar6 = local_194;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_002b68d0(0x2edbe6ff);
  if (*(int *)(param_2 + 0xc4) == 0) {
    FUN_002b6340(local_194,local_1d4,local_214);
    FUN_002b68d0(0x2edbe6ff);
  }
  else {
    FUN_002b6340(local_314,*(int *)(param_2 + 0xc4),local_214);
  }
  puVar2 = local_3c0;
  iVar5 = 2;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0x10;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_37c = 0x3f800000;
  local_378 = 0x3f800000;
  FUN_00304ff0();
  FUN_00304ff0();
  iVar5 = 0;
  do {
    local_374[iVar5 * 2] = 0;
    local_374[iVar5 * 2 + 1] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  FUN_002ddcb0();
  FUN_002ddcb0();
  if (*(int *)(param_2 + 0xdc) == 2) {
    local_374[0] = *(undefined4 *)(param_2 + 0xf4);
    local_374[1] = *(undefined4 *)(param_2 + 0x10c);
  }
  else if (*(int *)(param_2 + 0xdc) == 1) {
    local_374[0] = 0;
    local_374[1] = 0;
  }
  else {
    local_374[0] = 0xc1200000;
    local_374[1] = 0x41200000;
  }
  if (*(int *)(param_2 + 0xe0) == 2) {
    local_374[2] = *(undefined4 *)(param_2 + 0xf8);
    local_374[3] = *(undefined4 *)(param_2 + 0x110);
  }
  else if (*(int *)(param_2 + 0xe0) == 1) {
    local_374[2] = 0;
    local_374[3] = 0;
  }
  else {
    local_374[2] = 0xc1200000;
    local_374[3] = 0x41200000;
  }
  if (*(int *)(param_2 + 0xe4) == 2) {
    local_374[4] = *(undefined4 *)(param_2 + 0xfc);
    local_374[5] = *(undefined4 *)(param_2 + 0x114);
  }
  else if (*(int *)(param_2 + 0xe4) == 1) {
    local_374[4] = 0;
    local_374[5] = 0;
  }
  else {
    local_374[4] = 0xc1200000;
    local_374[5] = 0x41200000;
  }
  FUN_002dddc0();
  iVar3 = FUN_00305cd0(local_d4,local_3fc,iVar1,iVar3);
  if (iVar3 == 1) {
    iVar3 = FUN_002ea01d(0xb4);
    if (iVar3 != 0) {
      uVar4 = FUN_002fff20(local_3fc);
      return uVar4;
    }
  }
  else {
    iVar3 = FUN_002ea01d(0xf4);
    if (iVar3 != 0) {
      uVar4 = FUN_00301630(local_d4);
      return uVar4;
    }
  }
  return 0;
}
