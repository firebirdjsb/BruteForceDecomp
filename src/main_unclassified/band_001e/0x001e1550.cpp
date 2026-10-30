/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA02938D84C07163A7BC50005B56481EB762BFD19BF491EC616D9D5090283CA6
 * Entry: 0x001e1550, Ghidra index: 6734, label: FUN_001e1550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00407498;
extern uint32_t *DAT_00443310;
/* 0x001e15e0/0x001e169f load DWORD [0x004698d4] for indirect calls.
 * ABI_UNVERIFIED: host pointer width and callee prototype remain unknown. */
extern code *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t PTR_s_Sound_Libraries_00400668;
extern char s_post__s_004075a4[];
extern char s_pre_data_libraries_004075ac[];
undefined1 FUN_001e1550(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 unaff_EBX;
  int iVar6;
  undefined1 uVar7;
  undefined4 uStack_138;
  undefined4 auStack_134 [2];
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [4];
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  undefined1 auStack_104 [260];
  
  cVar4 = FUN_001e35d0();
  uStack_138 = CONCAT13(cVar4,(undefined3)uStack_138);
  uVar7 = 0;
  if (cVar4 != '\0') {
    local_12c = 0;
    local_128 = 0;
    local_124 = 0;
    local_108 = 0xf;
    local_10c = 0;
    local_11c = local_11c & 0xffffff00;
    pcVar3 = &DAT_00407498;
    do {
      pcVar5 = pcVar3;
      pcVar3 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    FUN_0001fed0(&DAT_00407498,pcVar5 + -0x407498);
    FUN_000764c0(local_120);
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_11c);
    }
    FUN_00237a30(s_pre_data_libraries_004075ac);
    iVar2 = local_12c;
    iVar6 = 0;
    do {
      if (DAT_004698d4 != (code *)0x0) {
        (*DAT_004698d4)(DAT_004698d8);
      }
      if (iVar6 == 5) {
        if (*(int *)(param_1 + 0x54) != 0) {
          FUN_000762d0(param_1 + 0x50,auStack_134[0]);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x54));
        }
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      iVar1 = iVar6 * 0x10 + param_1;
      FUN_001e2740(iVar1,*(undefined4 *)(iVar1 + 8),iVar2,local_128,auStack_134[0]);
      FUN_001e14c0();
      FUN_001e1f40();
      FUN_002eaa19(auStack_104,0x104,s_post__s_004075a4,(&PTR_s_Sound_Libraries_00400668)[iVar6 * 6]
                  );
      FUN_00237a30(auStack_104);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 7);
    if (DAT_004698d4 != (code *)0x0) {
      (*DAT_004698d4)(DAT_004698d8);
    }
    auStack_134[0] = 0xf06298e3;
    (**(code **)(*DAT_00443310 + 0x10))(auStack_134);
    if (iVar2 != 0) {
      FUN_000762d0(auStack_134,uStack_138);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
    uVar7 = (undefined1)((uint)unaff_EBX >> 0x18);
  }
  return uVar7;
}
