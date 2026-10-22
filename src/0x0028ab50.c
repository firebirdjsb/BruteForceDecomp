/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC4431C7DF0F325A503FDE83D3F1302CF9137ED8A948007A01FF2E768DACFDE5
 * Entry: 0x0028ab50, Ghidra index: 9171, label: FUN_0028ab50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_0028ab50(int param_1)

{
  if (param_1 != 0) {
    FUN_0028aa90(param_1);
  }
  if (*(__jmp_buf_tag **)(DAT_00469888 + 0x18) != (__jmp_buf_tag *)0x0) {
    _longjmp(*(__jmp_buf_tag **)(DAT_00469888 + 0x18),1);
  }
  FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
  FUN_002eba1d(1);
}
