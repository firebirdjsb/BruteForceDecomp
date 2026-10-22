/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BBEC46D7F1AF4581F9F32BC5595B22821F2D2147DBC0EB147C13716ACA6DE11
 * Entry: 0x000a54f0, Ghidra index: 1969, label: FUN_000a54f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e238;
extern uint32_t DAT_0040d7a4;
extern uint32_t DAT_0040d7a8;
extern uint32_t DAT_0040d7a9;
extern uint32_t DAT_0040d7aa;
extern uint32_t _DAT_003c9d80;
extern uint32_t _DAT_003c9d84;
extern uint32_t _DAT_003c9d88;
extern uint32_t _DAT_003c9d90;
extern uint32_t _DAT_003c9d94;
extern uint32_t _DAT_003c9d98;
extern uint32_t _DAT_003c9d9c;
extern uint32_t _DAT_003c9dc0;
extern uint32_t _DAT_003c9dc4;
extern uint32_t _DAT_003c9dc8;
extern uint32_t _DAT_003c9dcc;
extern uint32_t switchD_000a5515_caseD_5[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a54f0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_8;
  
  FUN_002385a0();
  iVar3 = param_1;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
  case 4:
    param_2 = 0x206;
    FUN_0006a610(&param_2);
    param_2 = 0x202;
    FUN_0006a610(&param_2);
    param_2 = 0;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 0x202;
    FUN_0006a610(&param_2);
    param_2 = 0;
    FUN_0006a610(&param_2);
    if (*(int *)(iVar3 + 0xc) == 0) {
      param_2 = 0x901;
    }
    else {
      param_2 = 0;
    }
    FUN_0006a610(&param_2);
    FUN_00062280();
    piVar1 = *(int **)(iVar3 + 0x1b0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))(piVar1,2);
    }
    param_2 = 4;
    FUN_0006a610(&param_2);
    param_2 = 4;
    FUN_0006a610(&param_2);
    param_2 = 0xffffffff;
    FUN_0006a610(&param_2);
    param_2 = 3;
    FUN_0006a610(&param_2);
    param_2 = 3;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    if (DAT_0040d7a8 == '\0') {
      param_2 = 1;
      FUN_0006a610(&param_2);
    }
    else {
      param_2 = 0x306;
      FUN_0006a610(&param_2);
    }
    param_2 = 0;
    FUN_0006a610(&param_2);
    if (*(int *)(iVar3 + 0xc) == 0) {
      FUN_000a4a60(8);
    }
    FUN_000a4d00();
    iVar3 = param_1;
    FUN_000a4d80();
    *(undefined4 *)(iVar3 + 0x100) = *(undefined4 *)(iVar3 + 0xb4);
    *(undefined4 *)(iVar3 + 0x108) = *(undefined4 *)(iVar3 + 0xb8);
    *(undefined4 *)(iVar3 + 0x10c) = *(undefined4 *)(iVar3 + 0xb0);
    *(undefined4 *)(iVar3 + 0x114) = *(undefined4 *)(iVar3 + 0xc0);
    *(undefined4 *)(iVar3 + 0x118) = *(undefined4 *)(iVar3 + 0xc4);
    *(undefined4 *)(iVar3 + 0x11c) = *(undefined4 *)(iVar3 + 200);
    *(undefined4 *)(iVar3 + 0x120) = *(undefined4 *)(iVar3 + 0xcc);
    uVar7 = DAT_0040d7a4;
    *(undefined4 *)(iVar3 + 0xe4) = 0;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0xec) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xf0) = 0x40000000;
    *(undefined4 *)(iVar3 + 0xf4) = 0;
    *(undefined4 *)(iVar3 + 0xf8) = 0x3d800000;
    *(undefined4 *)(iVar3 + 0xfc) = 0;
    *(undefined4 *)(iVar3 + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(undefined4 *)(iVar3 + 0x128) = 0;
    *(undefined4 *)(iVar3 + 300) = 0;
    *(undefined4 *)(iVar3 + 0x130) = 0;
    *(undefined4 *)(iVar3 + 0x134) = 0;
    *(undefined4 *)(iVar3 + 0x138) = *(undefined4 *)(iVar3 + 0xa8);
    *(undefined4 *)(iVar3 + 0x140) = uVar7;
    *(float *)(iVar3 + 0x104) = 1.0 / *(float *)(iVar3 + 0xa8);
    *(float *)(iVar3 + 0x13c) = 1.0 / *(float *)(iVar3 + 0xb8);
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar5 = (undefined4 *)(iVar3 + 0xe4);
      puVar6 = &DAT_0037e238;
      for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x18);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    return 1;
  case 1:
    param_2 = 0x202;
    FUN_0006a610(&param_2);
    param_2 = 0;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 0x901;
    FUN_0006a610(&param_2);
    FUN_00062280();
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 2;
    FUN_0006a610(&param_2);
    param_2 = 2;
    FUN_0006a610(&param_2);
    FUN_0006a5f0(1);
    FUN_0006a5f0(0);
    *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)(iVar3 + 0xf8) = *(undefined4 *)(iVar3 + 0x2c);
    *(undefined4 *)(iVar3 + 0xe4) = 0;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0xec) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xf0) = 0x40000000;
    *(undefined4 *)(iVar3 + 0xfc) = *(undefined4 *)(iVar3 + 0x30);
    *(undefined4 *)(iVar3 + 0x100) = *(undefined4 *)(iVar3 + 0x34);
    *(undefined4 *)(iVar3 + 0x104) = *(undefined4 *)(iVar3 + 0x38);
    *(undefined4 *)(iVar3 + 0x108) = *(undefined4 *)(iVar3 + 0x3c);
    *(undefined4 *)(iVar3 + 0x10c) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(iVar3 + 0x110) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(iVar3 + 0x114) = *(undefined4 *)(iVar3 + 0xc0);
    *(undefined4 *)(iVar3 + 0x118) = *(undefined4 *)(iVar3 + 0xc4);
    *(undefined4 *)(iVar3 + 0x11c) = *(undefined4 *)(iVar3 + 200);
    *(undefined4 *)(iVar3 + 0x120) = *(undefined4 *)(iVar3 + 0xcc);
    *(undefined4 *)(iVar3 + 0x130) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x124) = *(undefined4 *)(iVar3 + 0x198);
    *(undefined4 *)(iVar3 + 0x128) = *(undefined4 *)(iVar3 + 0x19c);
    *(undefined4 *)(iVar3 + 0x134) = *(undefined4 *)(iVar3 + 0x1a0);
    *(undefined4 *)(iVar3 + 300) = *(undefined4 *)(iVar3 + 0x194);
    *(undefined4 *)(iVar3 + 0x138) = *(undefined4 *)(iVar3 + 0x1a4);
    *(undefined4 *)(iVar3 + 0x13c) = 0x3d800000;
    FUN_000a4a60(8);
    FUN_000a4d00();
    FUN_000a4d80();
    return 1;
  case 2:
    param_2 = 0x202;
    FUN_0006a610(&param_2);
    param_2 = 0;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 0x206;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 0x901;
    FUN_0006a610(&param_2);
    piVar1 = *(int **)(iVar3 + 0x1b4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))(piVar1,0);
    }
    param_2 = 4;
    FUN_0006a610(&param_2);
    param_2 = 4;
    FUN_0006a610(&param_2);
    param_2 = 2;
    FUN_0006a610(&param_2);
    param_2 = 2;
    FUN_0006a610(&param_2);
    param_2 = 0;
    FUN_0006a610(&param_2);
    if (DAT_0040d7aa == '\0') {
      uVar7 = 1;
    }
    else {
      uVar7 = 0x306;
    }
    FUN_0006a5f0(uVar7);
    FUN_0006a5f0(0);
    if (DAT_0040d7a9 != '\0') {
      FUN_000907a0(0x1b,4);
    }
    FUN_000a4a60(8);
    FUN_000a4d00();
    FUN_000a4d80();
    return 1;
  case 3:
    param_1 = 0x206;
    FUN_0006a610(&param_1);
    param_1 = 0x202;
    FUN_0006a610(&param_1);
    FUN_00062280();
    param_1 = 3;
    FUN_0006a610(&param_1);
    param_1 = 3;
    FUN_0006a610(&param_1);
    param_1 = 5;
    FUN_0006a610(&param_1);
    param_1 = 5;
    FUN_0006a610(&param_1);
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 0x306;
    FUN_0006a610(&param_1);
    param_1 = 0;
    FUN_0006a610(&param_1);
    param_1 = 1;
    FUN_0006a610(&param_1);
    fVar2 = (1.0 - *(float *)(iVar3 + 0x10)) * (1.0 - *(float *)(iVar3 + 0x184));
    *(undefined4 *)(iVar3 + 0x160) = 0x3f800000;
    *(float *)(iVar3 + 0x154) = fVar2 + *(float *)(iVar3 + 0x10);
    *(float *)(iVar3 + 0x158) = fVar2 + *(float *)(iVar3 + 0x14);
    *(float *)(iVar3 + 0x15c) = fVar2 + *(float *)(iVar3 + 0x18);
    _DAT_003c9d80 = *(undefined4 *)(iVar3 + 0x17c);
    _DAT_003c9d84 = *(undefined4 *)(iVar3 + 0x180);
    _DAT_003c9d88 = *(undefined4 *)(iVar3 + 0xb4);
    _DAT_003c9d90 = *(undefined4 *)(iVar3 + 0xc0);
    _DAT_003c9d94 = *(undefined4 *)(iVar3 + 0xc4);
    _DAT_003c9d98 = *(undefined4 *)(iVar3 + 200);
    _DAT_003c9d9c = *(undefined4 *)(iVar3 + 0xcc);
    return 1;
  case 5:
    goto switchD_000a5515_caseD_5;
  case 6:
    local_8 = 0;
    FUN_0006a610(&local_8);
    local_8 = 0;
    FUN_0006a610(&local_8);
    local_8 = 1;
    FUN_0006a610(&local_8);
    local_8 = 0x203;
    FUN_0006a610(&local_8);
    FUN_000a4d00();
    param_2 = *(undefined4 *)(param_2 + 0x998);
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    param_2 = 0;
    FUN_0006a610(&param_2);
    param_2 = 0;
    FUN_0006a610(&param_2);
    param_2 = 1;
    FUN_0006a610(&param_2);
    iVar3 = param_1;
    param_1 = *(undefined4 *)(param_1 + 0x188);
    FUN_0006a610(&param_1);
    param_1 = *(undefined4 *)(iVar3 + 0x18c);
    FUN_0006a610(&param_1);
    _DAT_003c9dc0 = *(undefined4 *)(iVar3 + 0x16c);
    _DAT_003c9dc4 = *(undefined4 *)(iVar3 + 0x170);
    _DAT_003c9dc8 = *(undefined4 *)(iVar3 + 0x174);
    _DAT_003c9dcc = *(undefined4 *)(iVar3 + 0x178);
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 0xff;
    FUN_0006a610(&param_1);
    param_1 = 0x1e01;
    FUN_0006a610(&param_1);
    param_1 = 0x1e01;
    FUN_0006a610(&param_1);
    param_1 = 0x207;
    FUN_0006a610(&param_1);
    param_1 = 0xffffffff;
    FUN_0006a610(&param_1);
    param_1 = 0xffffffff;
    FUN_0006a610(&param_1);
switchD_000a5515_caseD_5:
    return 1;
  default:
    return 1;
  }
}
