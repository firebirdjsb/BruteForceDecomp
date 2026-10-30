/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 925663FE25ABAFA5F1CA8C0D3CD6710CBF1A7302A0B202B9863C8E5239F916AB
 * Entry: 0x001e4e30, Ghidra index: 6791, label: FUN_001e4e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * 2026-10-28: Original guest ESP+0x1C output alias is bound to one
 * explicit 32-bit out-word, not an uninitialized host pseudo EBP.
 * This isolated correction does not verify virtual call ABI or behavior.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004000bc;
extern uint32_t DAT_004000d0;
extern uint32_t *DAT_004432f8;
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_FUN_003bc658;
extern uint32_t UNK_00237810;
extern uint32_t UNK_002378a0;
extern uint32_t UNK_00237910;
extern uint32_t UNK_002379a0;
extern uint32_t UNK_002379d0;
extern uint32_t UNK_00237a00;
extern char s__s__s_tgz_00407530[];
extern char s__s_s_tgz_00407524[];
extern char s_cache_program_004074dc[];
extern char s_end_cache_program_004074a4[];
extern char s_z___s_004074d4[];
extern char s_z__mp_common_ml_sounds_bin_004074b8[];
undefined4 FUN_001e4e30(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  /* Original 0x001E4FAE LEA [ESP+0x1C] supplies the out-DWORD. */
  undefined4 bytes_read_word;
  char *pcVar6;
  int **ppiVar7;
  int *local_7ec;
  uint local_7e8;
  undefined1 *puStack_7e4;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_578;
  undefined4 local_574;
  int iStack_428;
  int iStack_424;
  uint uStack_40c;
  undefined1 auStack_408 [512];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  iVar2 = FUN_002383b0();
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar5 = (int *)(param_1 + 0x14);
    uVar4 = 0;
    do {
      if (*piVar5 == iVar2) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x10) == 8) {
    FUN_001e4c50(param_1);
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = DAT_004000bc;
    if (DAT_004000d0 < 0x10) {
      param_3 = &DAT_004000bc;
    }
    pcVar6 = s__s_s_tgz_00407524;
  }
  else {
    pcVar6 = s__s__s_tgz_00407530;
  }
  FUN_002eaa86(local_104,pcVar6,param_3,param_2);
  FUN_00237a30(s_cache_program_004074dc);
  PTR_FUN_003bc650 = &UNK_002379a0;
  PTR_FUN_003bc654 = &UNK_002379d0;
  PTR_FUN_003bc658 = &UNK_00237a00;
  local_590 = 0;
  local_58c = 0;
  local_578 = 0;
  local_574 = 0;
  FUN_001f0de0();
  cVar1 = FUN_001e4df0(param_1);
  if (cVar1 != '\0') {
    FUN_002eaa86(local_208,s_z___s_004074d4,param_2);
    iVar2 = FUN_00234c90();
    if (iVar2 == 0) {
      ppiVar7 = &local_7ec;
      local_7ec = (int *)0x0;
      local_7e8 = 0xe0c43d05;
      iVar2 = (**(code **)(*DAT_004432f8 + 0xc))
                        (DAT_004432f8,s_z__mp_common_ml_sounds_bin_004074b8,0x80000000,&local_7e8);
      if (-1 < iVar2) {
        FUN_001e48b0();
        (*(code *)(*ppiVar7)[4])(ppiVar7,&iStack_428,0x20c,&bytes_read_word);
        if (((bytes_read_word == 0x20c) && (iStack_428 == 0)) && (iStack_424 == 0x20)) {
          (*(code *)(*ppiVar7)[3])(ppiVar7);
          local_7e8 = 0;
          if (uStack_40c != 0) {
            puStack_7e4 = auStack_408;
            do {
              FUN_001e4da0();
              cVar1 = FUN_001e4df0(param_1);
              if (cVar1 == '\0') {
                if (local_7ec != (int *)0x0) {
                  (**(code **)(*local_7ec + 8))(local_7ec);
                }
                goto LAB_001e50ec;
              }
              local_7e8 = local_7e8 + 1;
              puStack_7e4 = puStack_7e4 + 0x20;
            } while (local_7e8 < uStack_40c);
          }
          if (local_7ec != (int *)0x0) {
            (**(code **)(*local_7ec + 8))(local_7ec);
          }
          goto LAB_001e50ec;
        }
      }
      if (ppiVar7 != (int **)0x0) {
        (*(code *)(*ppiVar7)[2])(ppiVar7);
      }
      FUN_001e5160();
      return 0;
    }
    FUN_001e4da0();
    cVar1 = FUN_001e4df0(param_1);
  }
LAB_001e50ec:
  FUN_001f0ed0();
  FUN_001e5160();
  PTR_FUN_003bc650 = &UNK_00237810;
  PTR_FUN_003bc654 = &UNK_00237910;
  PTR_FUN_003bc658 = &UNK_002378a0;
  FUN_00237a30(s_end_cache_program_004074a4);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = FUN_002383b0();
  *(undefined4 *)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = uVar3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  uVar3 = FUN_001e4bb0();
  return uVar3;
}
