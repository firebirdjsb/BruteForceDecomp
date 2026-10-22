/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD026A589AB8FACAF911A2C41A5EF7CE1409F567B9C34B765A5BC9943AF1C658
 * Entry: 0x00289c10, Ghidra index: 9145, label: FUN_00289c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_API_error___attempt_to_push_a_NU_00404b98[];
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00289c10(void)

{
  uint *puVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    FUN_0028aa90(s_API_error___attempt_to_push_a_NU_00404b98);
    if ((__jmp_buf_tag *)DAT_00469888[6] != (__jmp_buf_tag *)0x0) {
      _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
    }
    FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
    FUN_002eba1d(1);
  }
  FUN_00289520();
  puVar1 = DAT_00469888;
  *(undefined4 *)*DAT_00469888 = 0xfffffffb;
  *(int *)(*puVar1 + 8) = unaff_ESI;
  if (puVar1[2] <= *puVar1) {
    FUN_0028a460();
    puVar1 = DAT_00469888;
  }
  *puVar1 = *puVar1 + 0x10;
  FUN_00292870();
  if (DAT_00469888[0x1d] <= DAT_00469888[0x1e]) {
    FUN_002942f0(0);
  }
  return;
}
