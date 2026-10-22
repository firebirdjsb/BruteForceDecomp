/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0843B6FCE479DF76C9AFF076DC8EF2B2BA136AF8254AA02E8EF44F29C18607D
 * Entry: 0x00297ae0, Ghidra index: 9355, label: FUN_00297ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s__dostring__cannot_run_pre_compil_004042d0[];
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00297ae0(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = FUN_00289e20();
  if ((iVar1 != -2) && (iVar1 != -1)) {
    FUN_00295240();
  }
  FUN_00289aa0();
  pcVar2 = (char *)FUN_00289a40();
  if (*pcVar2 == '\x1b') {
    FUN_0028aa90(s__dostring__cannot_run_pre_compil_004042d0);
    if (*(__jmp_buf_tag **)(DAT_00469888 + 0x18) != (__jmp_buf_tag *)0x0) {
      _longjmp(*(__jmp_buf_tag **)(DAT_00469888 + 0x18),1);
    }
    FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
    FUN_002eba1d(1);
  }
  if ((1 < *(int *)(DAT_00469888 + 0x14)) && (*(int *)(DAT_00469888 + 0x10) != -2)) {
    iVar1 = FUN_00289e20();
    if ((iVar1 != -2) && (iVar1 != -1)) {
      FUN_00295240();
    }
    FUN_00289a40();
  }
  iVar3 = FUN_0028afb0();
  iVar1 = DAT_00469888;
  if ((iVar3 == 0) &&
     (*(undefined4 *)(DAT_00469888 + 0xc) = *(undefined4 *)(DAT_00469888 + 0x10),
     *(int *)(iVar1 + 0x14) == 0)) {
    FUN_00289ca0();
  }
  return;
}
