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
void FUN_0017f700(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uStack_124;
  undefined1 auStack_114 [16];
  undefined1 local_104 [248];
  int iStack_c;
  
  uVar3 = 0;
  uVar4 = 0;
  if (DAT_004698d4 != (code *)0x0) {
    uStack_124 = DAT_004698d8;
    (*DAT_004698d4)();
  }
  uStack_124 = 0x104;
  (**(code **)(*DAT_004432f8 + 0x28))(DAT_004432f8,s_sounds_dsstdfx_bin_0040c50c,local_104);
  iVar1 = FUN_002f2b3f(auStack_114,0x80000000,0,0,3,0,0);
  if (iVar1 == -1) {
    uVar4 = XAPILIB__GetLastError();
    if (0 < (int)uVar4) {
      uVar4 = uVar4 & 0xffff | 0x80070000;
    }
    if ((int)uVar4 < 0) goto LAB_0017f7e9;
  }
  uVar2 = XAPILIB__GetFileSize(iVar1,0);
  uVar3 = thunk_FUN_002ea01d(uVar2);
  iVar1 = XAPILIB__ReadFile(iVar1,uVar3,uVar2,&stack0xfffffee8,0);
  if ((iVar1 == 0) && (uVar4 = XAPILIB__GetLastError(), 0 < (int)uVar4)) {
    uVar4 = uVar4 & 0xffff | 0x80070000;
  }
  if (-1 < (int)uVar4) {
    uStack_124 = 0;
    DSOUND__IDirectSound_DownloadEffectsImage
              (*(undefined4 *)(iStack_c + 0xd8),uVar3,uVar2,&uStack_124,&stack0xfffffee4);
  }
LAB_0017f7e9:
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uVar3);
}
