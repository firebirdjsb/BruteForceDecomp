/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED1A2B8FD661AD8C470036BBF1B009D6B49A5026EEB24D3A48FCD4FCE0C2CB94
 * Entry: 0x000d6520, Ghidra index: 2665, label: FUN_000d6520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Verified matching-XBE immediate guest32 addresses below are NOT
 * safe host pointers/callbacks. ABI and native relocation remain TODO. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t *DAT_00443310;
/* 0x000d6545/0x000d6660/0x000d6796/0x000d68e8/0x000d6902 load
 * DWORD [0x004698d4] for indirect calls. ABI_UNVERIFIED: host pointer
 * width and callee prototype remain unknown. */
extern code *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t *DAT_00469940;
extern uint32_t DAT_004699a8;
extern uint32_t DAT_004699cc;
extern uint32_t DAT_004699ec;
extern uint32_t DAT_00469b58;
extern char s_end_load_0040d608[];
void FUN_000d6520(uint param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int unaff_EBP;
  uint uVar9;
  int iVar10;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  uint uStack_18;
  undefined4 uStack_8;
  uint uStack_4;
  
  uVar4 = param_1;
  *(byte *)(param_1 + 0xc50) = *(byte *)(param_1 + 0xc50) | 8;
  FUN_000dcc10(0,0);
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  if (*(int *)(uVar4 + 0xc00) != 0) {
    FUN_001e2200();
    iVar6 = *(int *)(uVar4 + 0xc00);
    if (iVar6 != 0) {
      FUN_000d6970();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar6);
    }
  }
  iVar6 = *(int *)(uVar4 + 0xbf8);
  pcStack_28 = (char *)0x0;
  pcStack_24 = (char *)0x0;
  uStack_20 = 0;
  if (iVar6 != 0) {
    param_1 = *(uint *)(iVar6 + 0x48);
    uVar9 = *(uint *)(iVar6 + 0x44);
    if (uVar9 != param_1) {
      do {
        if (*(uint *)(uVar9 + 0x18) < 0x10) {
          pcVar7 = (char *)(uVar9 + 4);
        }
        else {
          pcVar7 = *(char **)(uVar9 + 4);
        }
        uStack_4 = 0xf;
        uStack_8 = 0;
        uStack_18 = uStack_18 & 0xffffff00;
        pcVar5 = pcVar7;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_0001fed0(pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
        FUN_000764c0(auStack_1c);
        if (0xf < uStack_4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(uStack_18);
        }
        uVar9 = uVar9 + 0x1c;
        uStack_4 = 0xf;
        uStack_8 = 0;
        uStack_18 = uStack_18 & 0xffffff00;
      } while (uVar9 != param_1);
    }
    FUN_001e14c0();
    pcVar7 = pcStack_24;
    if (pcStack_28 != pcStack_24) {
      pcVar5 = pcStack_28 + 4;
      do {
        if (DAT_004698d4 != (code *)0x0) {
          (*DAT_004698d4)(DAT_004698d8);
        }
        param_1 = FUN_002383b0();
        (**(code **)(*DAT_00443310 + 0x10))(&param_1);
        pcVar8 = pcVar5 + 0x18;
        pcVar5 = pcVar5 + 0x1c;
      } while (pcVar8 != pcVar7);
    }
  }
  pcVar7 = pcStack_28;
  if (*(int *)(uVar4 + 0xbfc) != 0) {
    if (pcStack_28 != (char *)0x0) {
      FUN_000762d0(auStack_2c,param_1);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(pcVar7);
    }
    pcStack_28 = (char *)0x0;
    pcStack_24 = (char *)0x0;
    uStack_20 = 0;
    iVar6 = *(int *)(*(int *)(uVar4 + 0xbfc) + 0x48);
    for (iVar10 = *(int *)(*(int *)(uVar4 + 0xbfc) + 0x44); iVar10 != iVar6; iVar10 = iVar10 + 0x1c)
    {
      if (*(uint *)(iVar10 + 0x18) < 0x10) {
        pcVar7 = (char *)(iVar10 + 4);
      }
      else {
        pcVar7 = *(char **)(iVar10 + 4);
      }
      uStack_4 = 0xf;
      uStack_8 = 0;
      uStack_18 = uStack_18 & 0xffffff00;
      pcVar5 = pcVar7;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      FUN_0001fed0(pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
      FUN_000764c0(auStack_1c);
      if (0xf < uStack_4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(uStack_18);
      }
      uStack_4 = 0xf;
      uStack_8 = 0;
      uStack_18 = uStack_18 & 0xffffff00;
    }
    FUN_001e14c0();
    pcVar7 = pcStack_24;
    if (pcStack_28 != pcStack_24) {
      pcVar5 = pcStack_28 + 4;
      do {
        if (DAT_004698d4 != (code *)0x0) {
          (*DAT_004698d4)(DAT_004698d8);
        }
        pcVar8 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar8 = *(char **)pcVar5;
        }
        if (pcVar8 == (char *)0x0) {
          param_1 = 0;
        }
        else {
          param_1 = 0xffffffff;
          cVar2 = *pcVar8;
          while (cVar2 != '\0') {
            param_1 = param_1 >> 8 ^
                      *(uint *)(&DAT_003bc150 +
                               (((byte)(&DAT_003bc550)[cVar2] ^ param_1) & 0xff) * 4);
            pcVar1 = pcVar8 + 1;
            pcVar8 = pcVar8 + 1;
            cVar2 = *pcVar1;
          }
          param_1 = ~param_1;
        }
        (**(code **)(*DAT_00443310 + 0x10))(&param_1);
        pcVar8 = pcVar5 + 0x18;
        pcVar5 = pcVar5 + 0x1c;
      } while (pcVar8 != pcVar7);
    }
  }
  iVar6 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x210))();
  *(undefined1 **)(iVar6 + 0x20) = UINT32_C(0x001fdfe0);
  *(uint *)(iVar6 + 0x24) = uVar4;
  *(byte *)(uVar4 + 0xc50) = *(byte *)(uVar4 + 0xc50) & 0xfb;
  FUN_00174180();
  FUN_000d8140(uVar4);
  FUN_000d8d80(uVar4,uVar4 + 0xb04);
  piVar3 = DAT_00469940;
  *(undefined4 *)(uVar4 + 0xc14) = 0;
  (**(code **)(*piVar3 + 0x78))(uVar4 + 0xb54);
  (**(code **)(*DAT_00469940 + 0x7c))(*(undefined4 *)(uVar4 + 0xb58));
  (**(code **)(*DAT_00469940 + 0x80))(*(undefined4 *)(uVar4 + 0xb5c));
  FUN_000a4110();
  DAT_004699ec = uVar4 + 0xaec;
  DAT_004699a8 = uVar4 + 0xae0;
  DAT_004699cc = uVar4 + 0xaf8;
  if (*(int *)(uVar4 + 0xa70) != 0) {
    *(undefined4 *)(uVar4 + 0xc14) = *(undefined4 *)(*(int *)(uVar4 + 0xa70) + 0x120);
  }
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  FUN_001e9350();
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  FUN_000d6490();
  FUN_000b8b40(*(undefined4 *)(uVar4 + 0xbe4));
  FUN_00237a30(s_end_load_0040d608);
  if (unaff_EBP != 0) {
    FUN_000762d0(&stack0xffffffc8,uStack_8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_EBP);
  }
  return;
}
