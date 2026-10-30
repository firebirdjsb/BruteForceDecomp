/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 021BFDF756BCCA245D6BD4EB48B5C703D9C585864B54E58443A717A89E8D9CD5
 * Entry: 0x0033f453, Ghidra index: 12647, label: FUN_0033f453
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0033f453(uint *param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_144 [16];
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint local_f4 [16];
  uint local_b4 [16];
  undefined1 local_74 [92];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (0x40 < param_2) {
    param_2 = 0x40;
  }
  puVar3 = local_f4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1;
  puVar4 = local_f4;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar4 = (char)*puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  puVar3 = local_b4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_b4;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *(char *)puVar3 = (char)*param_1;
    param_1 = (uint *)((int)param_1 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  uVar2 = 0;
  do {
    *(uint *)((int)local_f4 + uVar2) = *(uint *)((int)local_f4 + uVar2) ^ 0x36363636;
    *(uint *)((int)local_b4 + uVar2) = *(uint *)((int)local_b4 + uVar2) ^ 0x5c5c5c5c;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x40);
  FUN_00356778(local_74);
  FUN_003567b6(local_74,local_f4,0x40);
  if (param_4 != 0) {
    FUN_003567b6(local_74,param_3,param_4);
  }
  if (param_6 != 0) {
    FUN_003567b6(local_74,param_5,param_6);
  }
  FUN_003568e4(local_74);
  puVar3 = local_b4;
  puVar4 = local_144;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_104 = local_18;
  uStack_100 = uStack_14;
  uStack_fc = uStack_10;
  uStack_f8 = uStack_c;
  FUN_00356778(local_74);
  FUN_003567b6(local_74,local_144,0x50);
  FUN_003568e4(local_74);
  *param_7 = local_18;
  param_7[1] = uStack_14;
  param_7[2] = uStack_10;
  param_7[3] = uStack_c;
  return 1;
}
