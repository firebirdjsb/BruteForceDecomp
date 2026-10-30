/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09A691998D219742CDE13FCD641E57DCA61B3F07837A7704C6247DE47654682E
 * Entry: 0x000ead80, Ghidra index: 2891, label: FUN_000ead80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8900;
extern uint32_t DAT_004a8940;
extern uint32_t _DAT_0040cf44;
extern uint32_t _DAT_0040cf48;
extern uint32_t _DAT_004a8900;
extern uint32_t _DAT_004a8904;
extern uint32_t _DAT_004a8908;
extern uint32_t _DAT_004a890c;
extern uint32_t _DAT_004a8910;
extern uint32_t _DAT_004a8914;
extern uint32_t _DAT_004a8918;
extern uint32_t _DAT_004a891c;
extern uint32_t _DAT_004a8920;
extern uint32_t _DAT_004a8924;
extern uint32_t _DAT_004a8928;
extern uint32_t _DAT_004a892c;
extern uint32_t _DAT_004a8930;
extern uint32_t _DAT_004a8934;
extern uint32_t _DAT_004a8938;
extern uint32_t _DAT_004a893c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000ead80(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float local_134;
  float local_130 [2];
  undefined4 local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined1 local_118 [8];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc [12];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_134 = 0.0;
  if ((param_3 != 0) && (cVar3 = FUN_00022bc0(&local_134), cVar3 != '\0')) {
    local_10c = 0;
    local_108 = 0;
    local_130[0] = 0.0;
    local_120 = 0.0;
    local_11c = 0.0;
    local_124 = 0.0;
    local_110 = 0;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_128 = 0;
    cVar3 = FUN_000e98a0(param_1,&local_d0,&local_104,&local_e8,local_118,local_dc,local_130,
                         &local_120,&local_110,&local_124,&local_11c,&local_f4,local_134,param_3,
                         *(int *)(param_3 + 0x44) == 1,param_2);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_2 + 0x40) = local_d0;
      *(undefined4 *)(param_2 + 0x44) = uStack_cc;
      *(undefined4 *)(param_2 + 0x48) = uStack_c8;
      *(undefined4 *)(param_2 + 0x4c) = uStack_c4;
      *(undefined4 *)(param_2 + 0x50) = local_c0;
      *(undefined4 *)(param_2 + 0x54) = uStack_bc;
      *(undefined4 *)(param_2 + 0x58) = uStack_b8;
      *(undefined4 *)(param_2 + 0x5c) = uStack_b4;
      *(undefined4 *)(param_2 + 0x60) = local_b0;
      *(undefined4 *)(param_2 + 100) = uStack_ac;
      *(undefined4 *)(param_2 + 0x68) = uStack_a8;
      *(undefined4 *)(param_2 + 0x6c) = uStack_a4;
      *(undefined4 *)(param_2 + 0x70) = local_a0;
      *(undefined4 *)(param_2 + 0x74) = uStack_9c;
      *(undefined4 *)(param_2 + 0x78) = uStack_98;
      *(undefined4 *)(param_2 + 0x7c) = uStack_94;
      fVar4 = (float)*(int *)(param_1 + 8);
      if (*(int *)(param_1 + 8) < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      fVar4 = fVar4 * 0.5;
      if ((DAT_004a8940 & 1) == 0) {
        DAT_004a8940 = DAT_004a8940 | 1;
        _DAT_004a890c = fVar4 + 0.5;
        _DAT_004a8904 = 0;
        _DAT_004a8908 = 0;
        _DAT_004a8910 = 0;
        _DAT_004a8918 = 0;
        _DAT_004a8914 = -fVar4;
        _DAT_004a8920 = 0;
        _DAT_004a8924 = 0;
        _DAT_004a8928 = 0x3f800000;
        _DAT_004a892c = 0;
        _DAT_004a8930 = 0;
        _DAT_004a8934 = 0;
        _DAT_004a8938 = 0;
        _DAT_004a893c = 0x3f800000;
        _DAT_004a8900 = fVar4;
        _DAT_004a891c = _DAT_004a890c;
      }
      FUN_002337a0(&local_50,&DAT_004a8900,&local_d0);
      fVar4 = local_124;
      if (local_124 <= local_134) {
        fVar4 = local_134;
      }
      *(undefined4 *)(param_2 + 0x14) = local_f4;
      *(undefined4 *)(param_2 + 0x18) = local_f0;
      *(undefined4 *)(param_2 + 0x1c) = local_ec;
      *(float *)(param_2 + 0x20) = fVar4;
      fVar2 = (float)*(int *)(param_1 + 8);
      if (*(int *)(param_1 + 8) < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      *(float *)(*(int *)(param_1 + 0x5c) + 0xa8) = fVar2;
      *(float *)(*(int *)(param_1 + 0x5c) + 0xac) = local_124;
      iVar1 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar1 + 0x10) = local_110;
      *(undefined4 *)(iVar1 + 0x14) = local_10c;
      *(undefined4 *)(iVar1 + 0x18) = local_108;
      iVar1 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar1 + 0x180) = 0;
      *(undefined4 *)(iVar1 + 0x17c) = 0x3f800000;
      *(float *)(*(int *)(param_1 + 0x5c) + 0xb8) = ((fVar4 + local_134) / fVar4) * 0.5;
      *(float *)(*(int *)(param_1 + 0x5c) + 0xbc) = local_134 / (fVar4 + local_134);
      iVar1 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar1 + 0xc0) = local_e8;
      *(undefined4 *)(iVar1 + 0xc4) = local_e4;
      *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
      *(undefined4 *)(iVar1 + 200) = local_e0;
      iVar1 = *(int *)(param_1 + 0x5c);
      fVar4 = _DAT_0040cf44 - _DAT_0040cf48;
      *(undefined4 *)(iVar1 + 0x28) = local_50;
      *(undefined4 *)(iVar1 + 0x2c) = uStack_4c;
      *(undefined4 *)(iVar1 + 0x30) = uStack_48;
      *(undefined4 *)(iVar1 + 0x34) = uStack_44;
      *(undefined4 *)(iVar1 + 0x38) = local_40;
      *(undefined4 *)(iVar1 + 0x3c) = uStack_3c;
      *(undefined4 *)(iVar1 + 0x40) = uStack_38;
      *(undefined4 *)(iVar1 + 0x44) = uStack_34;
      *(undefined4 *)(iVar1 + 0x48) = local_30;
      *(undefined4 *)(iVar1 + 0x4c) = uStack_2c;
      *(undefined4 *)(iVar1 + 0x50) = uStack_28;
      *(undefined4 *)(iVar1 + 0x54) = uStack_24;
      *(undefined4 *)(iVar1 + 0x58) = local_20;
      *(undefined4 *)(iVar1 + 0x5c) = uStack_1c;
      *(undefined4 *)(iVar1 + 0x60) = uStack_18;
      *(undefined4 *)(iVar1 + 100) = uStack_14;
      *(float *)(*(int *)(param_1 + 0x5c) + 0xb0) = fVar4 * local_130[0] + _DAT_0040cf48;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xb4) = *(undefined4 *)(param_1 + 0x58);
      iVar1 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar1 + 0xd4) = local_100;
      *(undefined4 *)(iVar1 + 0xd0) = local_104;
      *(undefined4 *)(iVar1 + 0xd8) = local_fc;
      *(undefined4 *)(iVar1 + 0xdc) = local_f8;
      *param_2 = *param_2 | 4;
      *(float *)(param_2 + 0x24) = 1.0 - local_130[0];
      if (local_120 <= 0.0) {
        local_120 = 0.0;
      }
      if (1.0 <= local_120) {
        local_120 = 1.0;
      }
      fVar4 = 1.0 - local_120;
      if (1.0 - local_120 <= 0.0) {
        fVar4 = 0.0;
      }
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      *(float *)(param_2 + 0x28) = fVar4 * local_130[0];
      *(float *)(param_2 + 0x2c) = 1.0 - (1.0 - local_11c) * (1.0 - *(float *)(param_2 + 0x2c));
      return 1;
    }
  }
  return 0;
}
