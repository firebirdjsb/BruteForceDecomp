/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80996D39214442C939C8E56F7BBA6626474BBA9D5321AB66948662FD3FD3325F
 * Entry: 0x00289710, Ghidra index: 9130, label: FUN_00289710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_exit_1___Unable_to_recover__00404a8c[];
extern char s_indexed_expression_not_a_table_i_00404bc8[];
void FUN_00289710(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00289520(2);
  if (*(int *)(*DAT_00469888 + -0x20) != -3) {
    FUN_0028aa90(s_indexed_expression_not_a_table_i_00404bc8);
    if ((__jmp_buf_tag *)DAT_00469888[6] != (__jmp_buf_tag *)0x0) {
      _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
    }
    FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
    FUN_002eba1d(1);
  }
  iVar3 = FUN_00293c90(*DAT_00469888 + -0x10);
  piVar2 = DAT_00469888;
  iVar1 = *DAT_00469888;
  *(undefined4 *)(iVar1 + -0x20) = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)(iVar3 + 0x18);
  *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(iVar3 + 0x1c);
  *piVar2 = *piVar2 + -0x10;
  FUN_00289600();
  return;
}
