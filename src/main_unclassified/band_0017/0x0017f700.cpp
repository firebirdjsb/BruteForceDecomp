/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D14A277E496D3DB79FC4DE20DD685D8C833E6B80DBC7B47CFA5E6123475E633
 * Entry: 0x0017f700, Ghidra index: 5131, label: FUN_0017f700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
/* 0x0017f700/0x0017f7fd load DWORD [0x004698d4] for indirect calls.
 * ABI_UNVERIFIED: host pointer width and callee prototype remain unknown. */
extern code *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern char s_sounds_dsstdfx_bin_0040c50c[];
/* Xbox 0x0017F822 RET 4: one incoming guest DWORD is the
 * DirectSound owner, dereferenced at guest +0xD8 at 0x0017F7BE.
 * The original 32-bit guest memory/host call ABI remains unresolved. */
void FUN_0017f700(uint32_t sound_owner)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uStack_124;
  /* Xbox entry ESP is S. The four guest control words occupy
   * [S-0x114,S-0x105], with independent overlapping caller outputs:
   * ReadFile writes at S-0x108 (word 3), while DirectSound takes
   * S-0x114 (word 0) and S-0x10C (word 2).
   * The adjacent path buffer occupies S-0x104 .. S-1. */
  uint32_t guest_io_words[4];
  undefined1 local_104[0x104];
  
  uVar3 = 0;
  uVar4 = 0;
  if (DAT_004698d4 != (code *)0x0) {
    uStack_124 = DAT_004698d8;
    (*DAT_004698d4)();
  }
  uStack_124 = 0x104;
  /* XBE 0x0017F729 PUSH 0x104 supplies an actual fourth argument. */
  (**(code **)(*DAT_004432f8 + 0x28))
      (DAT_004432f8,s_sounds_dsstdfx_bin_0040c50c,local_104,0x104);
  /* 0x0017F74B passes S-0x104, the start of local_104. */
  iVar1 = FUN_002f2b3f(local_104,0x80000000,0,0,3,0,0);
  if (iVar1 == -1) {
    uVar4 = XAPILIB__GetLastError();
    if (0 < (int)uVar4) {
      uVar4 = uVar4 & 0xffff | 0x80070000;
    }
    if ((int)uVar4 < 0) goto LAB_0017f7e9;
  }
  uVar2 = XAPILIB__GetFileSize(iVar1,0);
  uVar3 = thunk_FUN_002ea01d(uVar2);
  /* 0x0017F78D LEA [ESP+0x20] = S-0x108: word 3. */
  iVar1 = XAPILIB__ReadFile(iVar1,uVar3,uVar2,&guest_io_words[3],0);
  if ((iVar1 == 0) && (uVar4 = XAPILIB__GetLastError(), 0 < (int)uVar4)) {
    uVar4 = uVar4 & 0xffff | 0x80070000;
  }
  if (-1 < (int)uVar4) {
    /* XBE 0x0017F7C4 points to S-0x10C (word 2); 0x0017F7C9
     * to S-0x114 (word 0). Its two MOV DWORD stores zero word 0
     * and set word 1 to one immediately before the indirect call.
     * 0x0017F7B7 loads the caller's sound_owner guest pointer. */
    guest_io_words[0] = 0;
    guest_io_words[1] = 1;
    DSOUND__IDirectSound_DownloadEffectsImage
        (*(undefined4 *)(uintptr_t)((uint32_t)sound_owner + UINT32_C(0xd8)),
         uVar3,uVar2,&guest_io_words[0],&guest_io_words[2]);
  }
LAB_0017f7e9:
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uVar3);
}
