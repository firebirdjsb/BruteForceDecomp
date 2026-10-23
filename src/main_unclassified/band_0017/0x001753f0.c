/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74BA37657F825D8F041F4D7664B20948B332B754C0E3F798D1508B3B0A496FD9
 * Entry: 0x001753f0, Ghidra index: 4932, label: FUN_001753f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c6dc;
extern uint32_t DAT_0040c798;
extern uint32_t DAT_0040c79c;
extern uint32_t DAT_0040de10;
extern uint32_t PTR_LAB_0039a3d0;
extern char s_________f___d_0040c6a0[];
extern char s__d__[];
extern char s__d___d_0040c6e0[];
extern char s__d___d__0040c7a0[];
extern char s__d___d___d_0040c6e8[];
extern char s__d___d___d___d_0040c6f4[];
extern char s__d___d___d___d___d_0040c704[];
extern char s__d___d___d___d___d___d___d___d____0040c718[];
extern char s__d___d___d___d___d___d___d___d____0040c73c[];
extern char s__d___d___d___d___d___d___d___d____0040c768[];
extern char s__f___d_0040c68c[];
extern char s__f___d___f_0040c694[];
extern char s_dur__d__type__d__color__d__r__d__0040c6b0[];
undefined4 FUN_001753f0(undefined4 param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194 [2];
  int iStack_18c;
  char local_188 [256];
  undefined1 local_88 [132];
  
  if (param_3 == (char *)0x0) {
    return 0x80004005;
  }
  local_1c4 = 0;
  local_1b0 = 0;
  FUN_002eaefa(param_3,s__d___d__0040c7a0,&local_1c4,&local_1b0);
  iVar2 = FUN_002eaf70(param_3,&DAT_0040c79c);
  if (iVar2 != 0) {
    param_3 = (char *)(iVar2 + 1);
  }
  iVar2 = FUN_002eaf70(param_3,&DAT_0040c79c);
  if (iVar2 != 0) {
    param_3 = (char *)(iVar2 + 1);
  }
  if (*param_3 != '\0') {
    param_3 = param_3 + 1;
  }
  switch(local_1c4) {
  case 100:
    puVar7 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
      puVar7[3] = 8;
      goto LAB_00175c84;
    }
    goto LAB_00175c82;
  case 0x65:
    iVar2 = FUN_002ea01d(0x14);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00173630();
    }
    *(undefined4 *)(iVar2 + 4) = local_1c4;
    *(int *)(param_2 + 0x10) = iVar2;
    if (local_1b0 == 3) {
      FUN_002eaefa(param_3,s__d___d_0040c6e0,&local_1c8,&local_1bc);
      *(int *)(iVar2 + 0x10) = local_1bc;
      *(int *)(iVar2 + 0xc) = local_1c8;
      return 0;
    }
    if (local_1b0 == 2) {
      FUN_002eaefa(param_3,&DAT_0040c798,&local_1c8);
      *(int *)(iVar2 + 0xc) = local_1c8;
      return 0;
    }
    break;
  case 0x66:
    puVar7 = (undefined4 *)FUN_002ea01d(0xc);
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
      puVar7[1] = local_1c4;
      *(undefined4 **)(param_2 + 0x10) = puVar7;
      return 0;
    }
    goto LAB_00175c4d;
  case 0x67:
    puVar7 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
      goto LAB_00175c84;
    }
LAB_00175c82:
    puVar7 = (undefined4 *)0x0;
LAB_00175c84:
    puVar7[1] = local_1c4;
    *(undefined4 **)(param_2 + 0x10) = puVar7;
    FUN_002eaefa(param_3,&DAT_0040c798,puVar7 + 3);
    return 0;
  case 0x68:
    iVar2 = FUN_002ea01d(0x2c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00173670();
    }
    *(undefined4 *)(iVar2 + 4) = local_1c4;
    *(int *)(param_2 + 0x10) = iVar2;
    if (local_1b0 == 5) {
      FUN_002eaefa(param_3,s__d__<_[_>_>___f___f___d___d___d__0040c640,&local_1b8,local_188,
                   iVar2 + 0x1c,iVar2 + 0x10,&local_1c0,param_2 + 0x18,&local_1c8,iVar2 + 0x20,
                   iVar2 + 0x24,&local_1bc);
      *(bool *)(iVar2 + 0x19) = local_1c8 != 0;
      uVar6 = FUN_002383b0();
      *(undefined4 *)(iVar2 + 0xc) = uVar6;
      *(bool *)(iVar2 + 0x28) = local_1bc != 0;
    }
    else if (local_1b0 == 4) {
      FUN_002eaefa(param_3,s__d__<_[_>_>___f___f___d___d___d__0040c618,&local_1b8,local_188,
                   iVar2 + 0x1c,iVar2 + 0x10,&local_1c0,param_2 + 0x18,&local_1c8,&local_1b4,
                   &local_1bc);
      *(bool *)(iVar2 + 0x19) = local_1c8 != 0;
      uVar6 = FUN_002383b0();
      *(undefined4 *)(iVar2 + 0xc) = uVar6;
    }
    else if (local_1b0 == 3) {
      FUN_002eaefa(param_3,s__d__<_[_>_>___f___f___d___d___d_0040c5f8,&local_1b8,local_188,
                   iVar2 + 0x1c,iVar2 + 0x10,&local_1c0,param_2 + 0x18,&local_1c8);
      *(bool *)(iVar2 + 0x19) = local_1c8 != 0;
      uVar6 = FUN_002383b0();
      *(undefined4 *)(iVar2 + 0xc) = uVar6;
    }
    else if (local_1b0 == 2) {
      FUN_002eaefa(param_3,s__d__<_d>___f___f___d___d_0040c5dc,&local_1b8,
                   *(undefined4 *)(iVar2 + 0xc),iVar2 + 0x1c,iVar2 + 0x10,&local_1c0,param_2 + 0x18)
      ;
    }
    else {
      FUN_002eaefa(param_3,s__d__<_d>___f___f___d_0040c5c4,&local_1b8,*(undefined4 *)(iVar2 + 0xc),
                   iVar2 + 0x1c,iVar2 + 0x10,&local_1c0);
      *(undefined4 *)(param_2 + 0x18) = 1000;
    }
    *(bool *)(iVar2 + 0x18) = local_1b8 != 0;
    *(int *)(iVar2 + 0x14) = local_1c0;
    return 0;
  case 0x69:
    iVar2 = FUN_002ea01d(0x24);
    if (iVar2 == 0) {
      local_1bc = 0;
    }
    else {
      local_1bc = FUN_001736e0();
    }
    iVar2 = local_1bc;
    *(undefined4 *)(local_1bc + 4) = local_1c4;
    *(int *)(param_2 + 0x10) = local_1bc;
    if (local_1b0 == 4) {
      FUN_002eaefa(param_3,s__d___d___d___d___d_0040c704,&local_1c0,&local_1ac,&local_1c8,&local_1b4
                   ,&local_1b8);
      *(bool *)(iVar2 + 0x20) = local_1c8 != 0;
      *(bool *)(iVar2 + 0x21) = local_1b4 != 0;
      *(int *)(iVar2 + 0x1c) = local_1ac;
    }
    else if (local_1b0 == 3) {
      FUN_002eaefa(param_3,s__d___d___d___d_0040c6f4,&local_1c0,&local_1b4,&local_1c8,&local_1b8);
      *(bool *)(iVar2 + 0x20) = local_1c8 != 0;
      *(int *)(iVar2 + 0x1c) = local_1b4;
    }
    else if (local_1b0 == 2) {
      FUN_002eaefa(param_3,s__d___d___d_0040c6e8,&local_1c0,&local_1b8,&local_1c8);
      *(int *)(iVar2 + 0x1c) = local_1c8;
    }
    else {
      FUN_002eaefa(param_3,s__d___d_0040c6e0,&local_1c0,&local_1b8);
    }
    *(bool *)(iVar2 + 0xc) = local_1c0 != 0;
    iVar2 = FUN_002eaf70(param_3,&DAT_0040de10);
    pcVar8 = (char *)(iVar2 + 1);
    local_1c8 = 0;
    if (0 < local_1b8) {
      do {
        FUN_002eaefa(pcVar8,&DAT_0040c6dc,local_188);
        pcVar3 = local_188;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar8 = pcVar3 + (int)(pcVar8 + (1 - (int)(local_188 + 1)));
        local_1b4 = FUN_002383b0();
        piVar4 = (int *)FUN_000da6f0();
        if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 0x20))(), iVar2 == 0xe)) {
          FUN_0004b5f0();
          FUN_00038440();
          if (iStack_18c != 0) {
            FUN_0008f6e0();
          }
        }
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1b8);
      return 0;
    }
    break;
  case 0x6e:
    puVar7 = (undefined4 *)FUN_002ea01d(0x94);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
    }
    puVar7[1] = local_1c4;
    *(undefined4 **)(param_2 + 0x10) = puVar7;
    FUN_002eaefa(param_3,s_<_[_>_>___f___d_0040c5b4,puVar7 + 3,puVar7 + 0x24,&local_1c8);
    puVar7[0x23] = local_1c8;
    return 0;
  case 0x6f:
    puVar7 = (undefined4 *)FUN_002ea01d(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = &PTR_LAB_0039a3d0;
      puVar7[2] = 4;
      *(undefined1 *)(puVar7 + 3) = 1;
      puVar7[4] = 0x3f800000;
    }
    puVar7[1] = local_1c4;
    *(undefined4 **)(param_2 + 0x10) = puVar7;
    if (local_1b0 == 4) {
      FUN_002eaefa(param_3,s__d___d_0040c6e0,&local_1c0,param_2 + 0x18);
    }
    else if (local_1b0 == 3) {
      FUN_002eaefa(param_3,&DAT_0040c798,&local_1c0);
    }
    else if (local_1b0 == 2) {
      FUN_002eaefa(param_3,s_<_[_>_>__<_[_>_>___d___d_0040c598,local_188,local_88,&local_1c8,
                   &local_1c0);
    }
    else {
      FUN_002eaefa(param_3,s_<_[_>_>__<_[_>_>___d___d___d___d_0040c574,local_188,local_88,&local_1b4
                   ,&local_1bc,&local_1c8,&local_1c0);
    }
    *(bool *)(puVar7 + 3) = local_1c0 != 0;
    break;
  case 0x70:
    iVar2 = FUN_002ea01d(0x94);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00173720();
    }
    *(undefined4 *)(iVar2 + 4) = local_1c4;
    *(int *)(param_2 + 0x10) = iVar2;
    FUN_002eaefa(param_3,s_________f___d_0040c6a0,iVar2 + 0xc,iVar2 + 0x8c,&local_1c8);
    *(int *)(iVar2 + 0x90) = local_1c8;
    return 0;
  case 0x71:
  case 0x73:
  case 0x79:
    iVar2 = FUN_002ea01d(0x18);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00174580();
    }
    *(undefined4 *)(iVar2 + 4) = local_1c4;
    *(int *)(param_2 + 0x10) = iVar2;
    if (local_1b0 == 2) {
      FUN_002eaefa(param_3,s__d__<_[_>_>__<_[_>_>_0040c674,param_2 + 0x18,local_188,local_88);
    }
    else {
      FUN_002eaefa(param_3,&DAT_0040c798,param_2 + 0x18);
    }
    iVar5 = FUN_00234c90();
    if (iVar5 == 0) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
    else {
      uVar6 = FUN_002383b0();
      *(undefined4 *)(iVar2 + 0xc) = uVar6;
    }
    iVar5 = FUN_00234c90();
    if (iVar5 == 0) {
      *(undefined4 *)(iVar2 + 0x14) = 0;
      return 0;
    }
    uVar6 = FUN_002383b0();
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    return 0;
  case 0x72:
    iVar2 = FUN_002ea01d(0x18);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_001745a0();
    }
    *(undefined4 *)(iVar2 + 4) = local_1c4;
    *(int *)(param_2 + 0x10) = iVar2;
    if (local_1b0 == 5) {
      FUN_002eaefa(param_3,s__f___d___f_0040c694,iVar2 + 0x10,param_2 + 0x18,iVar2 + 0x14);
      return 0;
    }
    FUN_002eaefa(param_3,s__f___d_0040c68c,iVar2 + 0x10,param_2 + 0x18);
    return 0;
  case 0x74:
    puVar7 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
      puVar7[3] = 0;
    }
    puVar7[1] = local_1c4;
    *(undefined4 **)(param_2 + 0x10) = puVar7;
    FUN_002eaefa(param_3,&DAT_0040c798,&local_1c8);
    puVar7[3] = local_1c8;
    return 0;
  case 0x75:
    puVar7 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
      puVar7[3] = 1;
    }
    puVar7[1] = local_1c4;
    *(undefined4 **)(param_2 + 0x10) = puVar7;
    local_1bc = 0;
    FUN_002eaefa(param_3,&DAT_0040c798,&local_1bc);
    puVar7[3] = local_1bc;
    return 0;
  case 0x76:
    puVar7 = (undefined4 *)FUN_002ea01d(0xc);
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
      puVar7[1] = local_1c4;
      *(undefined4 **)(param_2 + 0x10) = puVar7;
      return 0;
    }
    goto LAB_00175c4d;
  case 0x77:
    iVar2 = FUN_002ea01d(0x18);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_001736a0();
    }
    *(undefined4 *)(iVar2 + 4) = local_1c4;
    *(int *)(param_2 + 0x10) = iVar2;
    local_1c8 = 0;
    if (local_1b0 == 3) {
      FUN_002eaefa(param_3,s__d___d___d___d___d___d___d___d____0040c768,&local_1a0,&local_19c,
                   local_194,&local_1a4,&local_1a8,&local_198,&local_1ac,&local_1b4,&local_1bc,
                   &local_1c0,&local_1b8,&local_1c8);
      *(bool *)(iVar2 + 0x10) = local_1c0 != 0;
      *(bool *)(iVar2 + 0x11) = local_1b8 != 0;
    }
    else if (local_1b0 == 2) {
      FUN_002eaefa(param_3,s__d___d___d___d___d___d___d___d____0040c73c,&local_1a0,&local_19c,
                   local_194,&local_1a4,&local_1a8,&local_198,&local_1ac,&local_1b4,&local_1bc,
                   &local_1c0,&local_1b8);
      *(bool *)(iVar2 + 0x10) = local_1c0 != 0;
      *(bool *)(iVar2 + 0x11) = local_1b8 != 0;
    }
    else {
      FUN_002eaefa(param_3,s__d___d___d___d___d___d___d___d____0040c718,&local_1a0,&local_19c,
                   local_194,&local_1a4,&local_1a8,&local_198,&local_1ac,&local_1b4,&local_1bc);
    }
    *(bool *)(iVar2 + 0xe) = local_1a0 != 0;
    *(bool *)(iVar2 + 0xf) = local_19c != 0;
    *(bool *)(iVar2 + 0x12) = local_194[0] != 0;
    *(bool *)(iVar2 + 0x13) = local_1a4 != 0;
    *(bool *)(iVar2 + 0x14) = local_1a8 != 0;
    *(bool *)(iVar2 + 0x15) = local_198 != 0;
    *(bool *)(iVar2 + 0xc) = local_1ac != 0;
    *(bool *)(iVar2 + 0xd) = local_1b4 != 0;
    *(bool *)(iVar2 + 0x16) = local_1bc != 0;
    *(bool *)(iVar2 + 0x17) = local_1c8 != 0;
    return 0;
  case 0x78:
    iVar2 = FUN_002ea01d(0x20);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00173650();
    }
    *(undefined4 *)(iVar2 + 4) = local_1c4;
    *(int *)(param_2 + 0x10) = iVar2;
    FUN_002eaefa(param_3,s_dur__d__type__d__color__d__r__d__0040c6b0,param_2 + 0x18,&local_1c8,
                 &local_1bc,iVar2 + 0x14,iVar2 + 0x18,iVar2 + 0x1c);
    *(int *)(iVar2 + 0xc) = local_1c8;
    *(bool *)(iVar2 + 0x10) = local_1bc != 0;
    return 0;
  case 0x7a:
    puVar7 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    puVar7[1] = local_1c4;
    *(undefined4 **)(param_2 + 0x10) = puVar7;
    FUN_002eaefa(param_3,&DAT_0040c798,&local_1c8);
    *(bool *)(puVar7 + 3) = local_1c8 != 0;
    return 0;
  case 0x7b:
    puVar7 = (undefined4 *)FUN_002ea01d(0xc);
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[2] = 1;
      *puVar7 = &PTR_LAB_0039a3d0;
      puVar7[1] = local_1c4;
      *(undefined4 **)(param_2 + 0x10) = puVar7;
      return 0;
    }
LAB_00175c4d:
    uRam00000004 = local_1c4;
    *(undefined4 *)(param_2 + 0x10) = 0;
    return 0;
  }
  return 0;
}
