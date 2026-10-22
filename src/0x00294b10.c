/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F69B7F052E336BFC5D14BA6E3A501C378940AFA26DF29B4A856CF32FFDE09D96
 * Entry: 0x00294b10, Ghidra index: 9302, label: FUN_00294b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00294b10(undefined4 param_1,int param_2)

{
  int in_ECX;
  uint uVar1;
  uint in_EDX;
  uint uVar2;
  uint unaff_EDI;
  
  uVar1 = in_ECX + in_EDX;
  if (unaff_EDI <= uVar1) {
    if (param_2 != 0) {
      FUN_0028aa90(param_2);
    }
    if (*(__jmp_buf_tag **)(DAT_00469888 + 0x18) != (__jmp_buf_tag *)0x0) {
      _longjmp(*(__jmp_buf_tag **)(DAT_00469888 + 0x18),1);
    }
    FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
    FUN_002eba1d(1);
  }
  if ((in_EDX < (uVar1 ^ in_EDX)) && ((in_EDX == 0 || (7 < uVar1)))) {
    uVar2 = 8;
    if (7 < uVar1) {
      do {
        uVar2 = uVar2 * 2;
      } while (uVar2 < uVar1 || uVar2 - uVar1 == 0);
    }
    FUN_00294b90();
  }
  return;
}
