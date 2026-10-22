/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8009C4E074584F8EEE53E3ACCD6136ABF16638192BB43F206EB1254B3F9ECAA
 * Entry: 0x00299360, Ghidra index: 9373, label: FUN_00299360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_function_expression_too_complex_004040d0[];
void FUN_00299360(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  char *pcVar3;
  undefined1 local_50 [80];
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 0xc) + in_EAX;
  *(int *)(iVar1 + 0xc) = iVar2;
  if (*(int *)(iVar1 + 0x10) < iVar2) {
    if (0xff < iVar2) {
      FUN_0029d580(0);
      pcVar3 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
      FUN_002953d0();
      if (*pcVar3 == '\0') {
        pcVar3 = s_<eof>_00404598;
      }
      FUN_00295370(s___100s__last_token_read_____50s__00404560,
                   s_function_expression_too_complex_004040d0,pcVar3,*(undefined4 *)(param_1 + 0x1c)
                   ,local_50);
    }
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
  }
  return;
}
