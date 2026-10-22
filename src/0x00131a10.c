/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C204DC3F9BCE3DB5B8929164F7EFF09FC33CFC1C57207F584901C355173240C2
 * Entry: 0x00131a10, Ghidra index: 3833, label: FUN_00131a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400534;
extern uint32_t *DAT_00443314;
extern uint32_t DAT_00469aac;
extern uint32_t DAT_00469b58;
void FUN_00131a10(int param_1)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_EBX;
  undefined1 auStack_1c0 [4];
  uint uStack_1bc;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint uStack_11c;
  undefined4 uStack_10c;
  uint uStack_108;
  
  if ((DAT_00469aac == 0) ||
     (piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))(), *piVar2 != 0x17506391))
  {
    if (*(uint *)(param_1 + 0x140) < 0x10) {
      pcVar6 = (char *)(param_1 + 300);
    }
    else {
      pcVar6 = *(char **)(param_1 + 300);
    }
    uStack_1a8 = 0xf;
    uStack_1ac = 0;
    uStack_1bc = uStack_1bc & 0xffffff00;
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    uStack_108 = 0xf;
    uStack_10c = 0;
    uStack_11c = uStack_11c & 0xffffff00;
    FUN_0001f4f0(auStack_1c0,0,0xffffffff);
    FUN_001e8830(&DAT_00400534);
    if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_11c);
    }
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    cVar1 = FUN_000e2750(&uStack_1a4);
    if (cVar1 == '\x01') {
      uVar4 = (**(code **)(*DAT_00443314 + 0x18))(DAT_00443314,&uStack_1a0);
      *(undefined4 *)(in_EAX + 0xcc) = uVar4;
      *(undefined4 *)(in_EAX + 0x230) = uStack_194;
      *(undefined4 *)(in_EAX + 0x234) = uStack_190;
      *(undefined4 *)(in_EAX + 0x23c) = uStack_198;
      *(undefined4 *)(in_EAX + 0x29c) = 0x3f800000;
      *(undefined4 *)(in_EAX + 0x238) = uStack_19c;
      FUN_00130b20();
      FUN_00130aa0(in_EAX);
      FUN_001308b0(in_EAX);
      FUN_00130610(&uStack_1a4);
      FUN_001306a0();
      FUN_00130c50(in_EAX);
      FUN_001314c0(in_EAX);
    }
    FUN_000d8bc0(&uStack_1a4);
    if (0xf < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_1bc);
    }
  }
  else {
    if (*(uint *)(param_1 + 0x140) < 0x10) {
      param_1 = param_1 + 300;
    }
    else {
      param_1 = *(int *)(param_1 + 300);
    }
    FUN_0001fe90(param_1);
    iVar3 = FUN_000e0590(DAT_00469aac);
    uVar4 = (**(code **)(*DAT_00443314 + 0x18))(DAT_00443314,iVar3 + 4);
    *(undefined4 *)(in_EAX + 0xcc) = uVar4;
    *(undefined4 *)(in_EAX + 0x29c) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x230) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(in_EAX + 0x234) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(in_EAX + 0x238) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(in_EAX + 0x23c) = *(undefined4 *)(iVar3 + 0xc);
    FUN_00130b20();
    FUN_00130aa0(in_EAX);
    FUN_001308b0(in_EAX);
    FUN_00130610(iVar3);
    FUN_001306a0();
    FUN_00130c50(in_EAX);
    FUN_001314c0(in_EAX);
    if (0xf < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(unaff_EBX);
    }
  }
  *(undefined4 *)(in_EAX + 0x1b0) = 0x3f400000;
  if (((*(int *)(in_EAX + 0x2b8) != 0) &&
      (iVar3 = *(int *)(*(int *)(in_EAX + 0x2b8) + 8), iVar3 != 0)) &&
     (-100000.0 <= *(float *)(iVar3 + 4))) {
    *(undefined4 *)(in_EAX + 0x1b0) = *(undefined4 *)(iVar3 + 4);
  }
  return;
}
