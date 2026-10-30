/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEED1838987D587F70BE962EEC6F2F9F5A40537525DE3F54E3C9431DF0813DAA
 * Entry: 0x00295370, Ghidra index: 9314, label: FUN_00295370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00295370(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_1f8 [504];
  
  /* 0x0029537A: LEA EAX,[ESP+0x200] after SUB ESP,0x1F8
   * resolves to entry ESP+8: address of second incoming DWORD.
   * This is argument storage, not an invented native pointer. */
  FUN_002eba94(local_1f8,param_1,&param_2);
  FUN_0028aa90(local_1f8);
  /* Original 0x0029539A loads DWORD [0x00469888] as the owning
   * guest object, then 0x002953A0 loads ONE guest 32-bit DWORD
   * [ECX+0x18]. At 0x002953AA/AD it passes that saved context and
   * value 1 to the game's own 0x002EB90C _longjmp routine.
   * glibc's __jmp_buf_tag was a false type inference, not Xbox storage.
   * Guest-address translation and nonlocal register restoration remain
   * ABI_UNVERIFIED; the cast below is NOT a native PC memory adapter. */
  uint32_t guest_jump_context =
      *(uint32_t *)(uintptr_t)(DAT_00469888 + UINT32_C(0x18));
  if (guest_jump_context != 0) {
    _longjmp((void *)(uintptr_t)guest_jump_context,1);
  }
  FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
  FUN_002eba1d(1);
}
