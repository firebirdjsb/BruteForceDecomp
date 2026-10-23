/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DAF6AFCEBC06B326B3A603A5B8585FC65045EDA4E272AA764BC0E5CB98025AB
 * Entry: 0x00289d80, Ghidra index: 9148, label: FUN_00289d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_jump_context_opaque.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_API_error___attempt_to_push_a_NO_00404b70[];
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00289d80(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  uint *puVar4;
  
  puVar4 = DAT_00469888;
  if (in_EAX == 0) {
    FUN_0028aa90(s_API_error___attempt_to_push_a_NO_00404b70);
    if ((__jmp_buf_tag *)DAT_00469888[6] != (__jmp_buf_tag *)0x0) {
      _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
    }
    FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
    FUN_002eba1d(1);
  }
  piVar1 = (int *)((DAT_00469888[1] - 0x10) + in_EAX * 0x10);
  piVar2 = (int *)*DAT_00469888;
  piVar2[2] = *(int *)((DAT_00469888[1] - 8) + in_EAX * 0x10);
  piVar2[3] = piVar1[3];
  iVar3 = *piVar1;
  if (iVar3 == -10) {
    iVar3 = -5;
  }
  else if (iVar3 == -9) {
    iVar3 = -4;
  }
  else if (iVar3 == -8) {
    iVar3 = -7;
  }
  *piVar2 = iVar3;
  if (puVar4[2] <= *puVar4) {
    FUN_0028a460();
    puVar4 = DAT_00469888;
  }
  *puVar4 = *puVar4 + 0x10;
  return;
}
