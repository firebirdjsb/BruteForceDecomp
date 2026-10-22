/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7274D9C35AC6A9E166E744C08E0671D8536680B2B118CC12CEDCD53F95CF476D
 * Entry: 0x00297240, Ghidra index: 9341, label: FUN_00297240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_jump_context_opaque.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00297240(void)

{
  int iVar1;
  
  iVar1 = FUN_00289a40();
  if (iVar1 != 0) {
    FUN_0028aa90(iVar1);
  }
  if (*(__jmp_buf_tag **)(DAT_00469888 + 0x18) != (__jmp_buf_tag *)0x0) {
    _longjmp(*(__jmp_buf_tag **)(DAT_00469888 + 0x18),1);
  }
  FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
  FUN_002eba1d(1);
}
