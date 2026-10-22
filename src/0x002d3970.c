/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AB1D611D24883E869F017C87BB2DAC44DF9EAEAA455DD76E95EB3B77BA31135
 * Entry: 0x002d3970, Ghidra index: 10204, label: FUN_002d3970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d3970(float *param_1,float *param_2,int param_3)

{
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float *local_74;
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined1 local_40 [12];
  undefined4 local_34;
  undefined4 local_24;
  float local_20 [3];
  undefined4 local_14;
  float local_10 [3];
  undefined4 local_4;
  
  FUN_00150930();
  FUN_00150930();
  local_c4 = *param_2 * -1.0;
  local_c0 = param_2[1] * -1.0;
  local_bc = param_2[2] * -1.0;
  local_98 = 0;
  local_78 = 0;
  local_14 = 0;
  local_4 = 0;
  local_84 = param_1[9];
  local_80 = param_1[10];
  local_7c = param_1[0xb];
  local_a4 = param_1[0x11];
  local_a0 = param_1[0x12];
  local_9c = param_1[0x13];
  FUN_002ba160(param_1[0x3b],param_1[0x3d],&local_a4,&local_84,local_20);
  local_80 = param_1[0xe];
  local_84 = param_1[0xd];
  local_7c = param_1[0xf];
  local_a4 = param_1[0x15];
  local_a0 = param_1[0x16];
  local_9c = param_1[0x17];
  FUN_002ba160(param_1[0x3c],param_1[0x3e],&local_a4,&local_84,local_10);
  local_74 = local_10;
  local_24 = 0;
  local_c8 = (local_10[0] - local_20[0]) * local_c4 +
             ((float)local_10._4_8_ - (float)local_20._4_8_) * local_c0 +
             (SUB84(local_10._4_8_,4) - SUB84(local_20._4_8_,4)) * local_bc;
  if ((param_3 == 1) && (0.0 < local_c8)) {
    local_c8 = 0.0;
  }
  local_c8 = *param_1 - local_c8;
  if (0.0 <= local_c8) {
    local_d8 = local_c4;
    local_64 = 0;
    local_cc = 0;
    local_34 = 0;
    local_54 = 0;
    local_88 = 0;
    local_d4 = local_c0;
    local_d0 = local_bc;
    local_dc = 0.0;
    if ((*(byte *)param_1[0x3c] & 0xc) == 0) {
      FUN_002b73d0(param_1[8],&local_d8,local_70);
      FUN_002bae30(param_1[0x3c]);
      FUN_002ba160(param_1[0x3c],param_1[0x3e],local_60,local_40,&local_94);
      local_dc = local_d8 * local_94 + local_90 * local_d4 + local_8c * local_d0;
    }
    if ((*(byte *)param_1[0x3b] & 0xc) == 0) {
      local_d8 = local_d8 * -1.0;
      local_d4 = local_d4 * -1.0;
      local_d0 = local_d0 * -1.0;
      FUN_002b73d0(param_1[7],&local_d8,local_70);
      FUN_002bae30(param_1[0x3b]);
      FUN_002ba160(param_1[0x3b],param_1[0x3d],local_60,local_40,&local_94);
      local_dc = local_d8 * local_94 + local_90 * local_d4 + local_8c * local_d0 + local_dc;
    }
    local_dc = local_c8 / local_dc;
    if (0.0 <= local_dc) {
      local_44 = 0;
      local_a8 = 0;
      if ((*(byte *)param_1[0x3b] & 0xc) == 0) {
        local_ac = -local_dc;
        local_b4 = local_c4 * local_ac;
        local_b0 = local_c0 * local_ac;
        local_ac = local_bc * local_ac;
        FUN_002b73d0(param_1[7],&local_b4,local_50);
        FUN_002bae30(param_1[0x3b]);
        FUN_002b3cc0(param_1 + 9,param_1 + 0x19);
        FUN_002b3cc0(param_1 + 0x11,param_1 + 0x21);
      }
      if ((*(byte *)param_1[0x3c] & 0xc) == 0) {
        local_b4 = local_c4 * local_dc;
        local_b0 = local_c0 * local_dc;
        local_ac = local_bc * local_dc;
        FUN_002b73d0(param_1[8],&local_b4,local_50);
        FUN_002bae30(param_1[0x3c]);
        FUN_002b3cc0(param_1 + 0xd,param_1 + 0x1d);
        FUN_002b3cc0(param_1 + 0x15,param_1 + 0x25);
      }
    }
  }
  return;
}
