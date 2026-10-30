/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0AB4FBE03826E94025EB2B3ACB9BF867ECCAC5253EB85770FE0744BC175E54D4
 * Entry: 0x00182c80, Ghidra index: 5188, label: FUN_00182c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00182c80(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  byte bVar3;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  bVar1 = *(byte *)(in_ECX + 0x1c);
  bVar3 = bVar1 & 0xf3;
  *(byte *)(in_ECX + 0x1c) = bVar3;
  local_48 = 2;
  iVar2 = *(int *)(in_ECX + 0x2c);
  if ((bVar1 & 2) != 0) {
    local_34 = 0;
    if (*(int *)(in_ECX + 0x24) == 2) {
      local_34 = 0xfffffb50;
    }
    local_40 = 6;
    local_3c = 0;
    local_38 = 8;
    local_30 = 7;
    local_2c = 0;
    local_28 = 9;
    local_20 = 10;
    local_1c = 0xffffd8f0;
    local_48 = 5;
    *(byte *)(in_ECX + 0x1c) = bVar3 | 8;
    local_24 = local_34;
    if (iVar2 == 0) {
      local_18 = 3;
      local_14 = 0xffffd8f0;
      local_48 = 6;
      *(byte *)(in_ECX + 0x1c) = bVar3 | 0xc;
    }
    goto LAB_00182d94;
  }
  local_3c = 0;
  if (iVar2 == 3) {
    local_3c = 0xffffd8f0;
  }
  local_40 = 0;
  local_38 = 1;
  local_34 = local_3c;
  if (((byte)*(undefined4 *)(in_ECX + 0x20) & 0xf) == 4) {
    local_30 = 4;
    local_28 = 5;
  }
  else {
    if (iVar2 == 2) {
      local_48 = 4;
      local_30 = 4;
      local_2c = 0xfffffda8;
      local_28 = 5;
      local_24 = 0xfffffda8;
      goto LAB_00182d94;
    }
    if (iVar2 != 3) goto LAB_00182d94;
    local_30 = 2;
    local_28 = 2;
  }
  local_48 = 4;
  local_2c = 0;
  local_24 = 0;
LAB_00182d94:
  local_44 = &local_40;
  DSOUND__IDirectSoundBuffer_SetMixBins(param_1,&local_48);
  return;
}
