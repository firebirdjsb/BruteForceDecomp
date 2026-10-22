/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83512264A39CF572FC940DDD4CBEE53A0CF9FDD3F6D5F06E832C3C04241CC5B2
 * Entry: 0x0029af90, Ghidra index: 9420, label: FUN_0029af90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_expression_too_complex_00403f50[];
void FUN_0029af90(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int unaff_EDI;
  undefined1 local_54 [84];
  
  if (0x13 < *(int *)(unaff_EDI + 0x50)) {
    FUN_0029d580(0);
    pcVar1 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
    FUN_002953d0();
    if (*pcVar1 == '\0') {
      pcVar1 = s_<eof>_00404598;
    }
    FUN_00295370(s___100s__last_token_read_____50s__00404560,s_expression_too_complex_00403f50,
                 pcVar1,*(undefined4 *)(param_1 + 0x1c),local_54);
  }
  *(undefined4 *)(unaff_EDI + *(int *)(unaff_EDI + 0x50) * 4) = param_2;
  *(int *)(unaff_EDI + 0x50) = *(int *)(unaff_EDI + 0x50) + 1;
  return;
}
