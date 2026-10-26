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
  if (*(__jmp_buf_tag **)(DAT_00469888 + 0x18) != (__jmp_buf_tag *)0x0) {
    _longjmp(*(__jmp_buf_tag **)(DAT_00469888 + 0x18),1);
  }
  FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
  FUN_002eba1d(1);
}
