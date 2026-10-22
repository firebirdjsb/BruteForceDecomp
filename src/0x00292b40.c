/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99578601183D3BBC4E73F944B77F6643C2B43AE33933DB7515BB4F1121FEAD29
 * Entry: 0x00292b40, Ghidra index: 9259, label: FUN_00292b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_exit_1___Unable_to_recover__00404a8c[];
extern char s_indexed_expression_not_a_table_00404934[];
void FUN_00292b40(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = DAT_00469888;
  if (*in_ECX != -3) {
    FUN_0028aa90(s_indexed_expression_not_a_table_00404934);
    if ((__jmp_buf_tag *)DAT_00469888[6] != (__jmp_buf_tag *)0x0) {
      _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
    }
    FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
    FUN_002eba1d(1);
  }
  FUN_00293f40();
  *piVar1 = *piVar1 + -0x30;
  return;
}
