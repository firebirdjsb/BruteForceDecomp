/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57C8946236197F14775169B052ABAF441C8BEB55BF230D7E960980B98199E387
 * Entry: 0x00233d40, Ghidra index: 7794, label: FUN_00233d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00233d40(undefined4 *param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  float local_70;
  float local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  byte local_34;
  undefined1 local_30 [48];
  
  fVar1 = *(float *)*param_1;
  local_70 = fVar1 - param_3;
  if (local_70 < 0.0 == (local_70 == 0.0)) {
    param_1[0xe] = param_3;
    return 1;
  }
  if (fVar1 <= 0.0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(local_70 / fVar1);
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
  }
  local_6c = ABS(local_70) - (float)(int)uVar5 * fVar1;
  if (param_1[0xd] == -0x10dacd22) {
    local_38 = (undefined1 *)0x0;
    local_58 = 0x1a4e765d;
    local_54 = 0.0;
    local_44 = 0;
    local_48 = 0;
    local_50 = (float)param_1[10];
    local_40 = param_1[0xb];
    local_4c = param_1[0xc];
    bVar3 = (local_34 & 0xfc | 4) ^ *(byte *)(param_1 + 9) >> 2 & 1;
    local_34 = bVar3 ^ (*(byte *)(param_1 + 9) >> 1 ^ bVar3) & 4;
    local_3c = param_1[0xd];
    cVar4 = FUN_00233c20(local_6c);
    if (cVar4 != '\0') {
      local_38 = local_30;
    }
    local_54 = local_6c;
    FUN_002343c0();
    return 1;
  }
  if (param_1[0xd] == 0xea20ad9) {
    FUN_000ce0e0();
    local_54 = local_6c;
    if ((uVar5 & 1) == 0) {
      local_50 = -(float)param_1[10];
    }
    else {
      local_50 = (float)param_1[10];
    }
    local_40 = param_1[0xb];
    local_34 = local_34 ^ (*(byte *)(param_1 + 9) >> 1 ^ local_34) & 4;
    local_4c = param_1[0xc];
    FUN_002343c0();
    return 1;
  }
  param_1[0xe] = *(undefined4 *)*param_1;
  local_5c = param_1[2];
  local_68 = param_1;
  local_64 = 0xffffffff;
  local_60 = 0;
  local_70 = -6.090583e+35;
  local_6c = 0.0;
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)0x0) {
    return 1;
  }
  (**(code **)*puVar2)(puVar2,&local_68,1,&local_70,&local_6c);
  return 0;
}
