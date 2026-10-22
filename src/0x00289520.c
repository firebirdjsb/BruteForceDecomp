/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC3CCA551281AEB4C3D6F9CBE553343D513877CD29EE8FA493AA322971099473
 * Entry: 0x00289520, Ghidra index: 9126, label: FUN_00289520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_jump_context_opaque.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_API_error___wrong_number_of_argu_00404bf8[];
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00289520(int param_1)

{
  if (*DAT_00469888 - DAT_00469888[1] >> 4 < DAT_00469888[3] + param_1) {
    FUN_0028aa90(s_API_error___wrong_number_of_argu_00404bf8);
    if ((__jmp_buf_tag *)DAT_00469888[6] != (__jmp_buf_tag *)0x0) {
      _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
    }
    FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
    FUN_002eba1d(1);
  }
  return;
}
