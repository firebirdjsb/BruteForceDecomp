/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DDE41611CF58912127F7EBB5DA80F5736EC6C8F424E8FA79DFE8DD9FD5992F3
 * Entry: 0x001e1f40, Ghidra index: 6741, label: FUN_001e1f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_00400160;
extern uint32_t DAT_004002cc;
extern uint32_t *DAT_00443310;
extern uint32_t *DAT_00443314;
extern uint32_t *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t *DAT_00469940;
/* WARNING: Removing unreachable block (ram,0x001e1bca) */
/* WARNING: Removing unreachable block (ram,0x001e1e60) */

bool FUN_001e1f40(void)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  char *pcVar4;
  int in_EAX;
  int iVar5;
  undefined4 in_ECX;
  char *pcVar6;
  char *pcVar7;
  char *local_5c;
  uint *local_58;
  undefined4 ***local_54;
  uint in_stack_ffffffb0;
  uint local_40;
  char *local_3c;
  undefined1 local_38 [4];
  undefined4 ***local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  undefined4 uStack_c;
  undefined4 local_8;
  
  switch(in_ECX) {
  case 0:
    local_8 = 0x1a;
    uStack_c = 0x1e1fa6;
    uVar2 = FUN_001e1a40();
    local_8 = 0x1e1fb6;
    (**(code **)(*DAT_00469940 + 4))();
    return (bool)uVar2;
  case 1:
    local_58 = *(uint **)(in_EAX + 8);
    local_3c = (char *)0xf;
    local_40 = 0;
    if ((uint *)*(char **)(in_EAX + 4) != local_58) {
      pcVar7 = *(char **)(in_EAX + 4) + 4;
      do {
        local_8 = 0;
        local_18 = local_18 & 0xffffff00;
        FUN_0001f4f0(pcVar7 + -4,0,0xffffffff);
        FUN_0001f4f0(&DAT_00400160,0,0xffffffff);
        FUN_001e8a20();
        FUN_000784c0(0);
        FUN_000784c0(0);
        local_8 = 0;
        local_18 = local_18 & 0xffffff00;
        pcVar6 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar6 = *(char **)pcVar7;
        }
        if (pcVar6 == (char *)0x0) {
          local_5c = (char *)0x0;
        }
        else {
          uVar3 = 0xffffffff;
          cVar1 = *pcVar6;
          while (cVar1 != '\0') {
            uVar3 = uVar3 >> 8 ^
                    *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar1] ^ uVar3) & 0xff) * 4);
            pcVar4 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar4;
          }
          local_5c = (char *)~uVar3;
        }
        if (DAT_004698d4 != (code *)0x0) {
          (*DAT_004698d4)(DAT_004698d8);
        }
        pcVar6 = (char *)(in_stack_ffffffb0 & 0xffffff00);
        if (local_3c < 0x10) {
          pcVar6 = &stack0xffffffb0;
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = (undefined4 ***)((uint)local_34[0] & 0xffffff00);
        if (pcVar6 == (char *)0x0) {
          FUN_0001f5a0(0,0xffffffff);
        }
        else {
          pcVar4 = pcVar6;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_0001fed0(pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
        }
        (**(code **)(*DAT_00443314 + 0xc))(DAT_00443314,&local_5c,local_38);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(local_34[0]);
        }
        pcVar6 = pcVar7 + 0x18;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = (undefined4 ***)((uint)local_34[0] & 0xffffff00);
        pcVar7 = pcVar7 + 0x1c;
      } while ((uint *)pcVar6 != local_58);
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0((char *)(in_stack_ffffffb0 & 0xffffff00));
      }
    }
    return true;
  case 2:
    local_8 = 0x1d;
    uStack_c = 0x1e1f5e;
    uVar2 = FUN_001e1a40();
    return (bool)uVar2;
  case 3:
    local_8 = 0x10;
    uStack_c = 0x1e1f70;
    uVar2 = FUN_001e1a40();
    return (bool)uVar2;
  case 4:
    break;
  case 5:
    uStack_c = 0x1e1f7b;
    iVar5 = FUN_00219520();
    return -1 < iVar5;
  case 6:
    local_8 = 0x15;
    uStack_c = 0x1e1fc7;
    uVar2 = FUN_001e1a40();
    return (bool)uVar2;
  default:
    return false;
  }
  local_3c = *(char **)(in_EAX + 8);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (undefined4 ***)((uint)local_34[0] & 0xffffff00);
  if (*(char **)(in_EAX + 4) != local_3c) {
    pcVar7 = *(char **)(in_EAX + 4) + 4;
    do {
      local_54 = (undefined4 ***)0xffffffff;
      local_58 = (uint *)0x0;
      local_5c = pcVar7 + -4;
      local_8 = 0;
      local_18 = local_18 & 0xffffff00;
      FUN_0001f4f0();
      local_54 = (undefined4 ***)0xffffffff;
      local_58 = (uint *)0x0;
      local_5c = &DAT_004002cc;
      FUN_0001f4f0();
      local_54 = (undefined4 ***)0x1e1e36;
      FUN_001e8a20();
      local_54 = (undefined4 ***)0x0;
      local_58 = (uint *)0x1e1e47;
      FUN_000784c0();
      local_54 = (undefined4 ***)0x0;
      local_58 = (uint *)0x1e1e5a;
      FUN_000784c0();
      local_8 = 0;
      local_18 = local_18 & 0xffffff00;
      pcVar6 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar6 = *(char **)pcVar7;
      }
      if (pcVar6 == (char *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = 0xffffffff;
        cVar1 = *pcVar6;
        while (cVar1 != '\0') {
          local_40 = local_40 >> 8 ^
                     *(uint *)(&DAT_003bc150 +
                              (((byte)(&DAT_003bc550)[cVar1] ^ local_40) & 0xff) * 4);
          pcVar4 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar4;
        }
        local_40 = ~local_40;
      }
      if (DAT_004698d4 != (code *)0x0) {
        local_54 = (undefined4 ***)DAT_004698d8;
        local_58 = (uint *)0x1e1ede;
        (*DAT_004698d4)();
      }
      local_54 = local_34[0];
      if (local_20 < 0x10) {
        local_54 = local_34;
      }
      local_58 = &local_40;
      local_5c = (char *)0x1e1f00;
      (**(code **)(*DAT_00443310 + 0xc))();
      pcVar6 = pcVar7 + 0x18;
      pcVar7 = pcVar7 + 0x1c;
    } while (pcVar6 != local_3c);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
  }
  return true;
}
