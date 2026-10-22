/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FB30DF0211202F852D90928EB4E2892CA06D7F1146FB856989C2828D6809212
 * Entry: 0x0029a3b0, Ghidra index: 9406, label: FUN_0029a3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s__NAME__expected_00403fa8[];
extern char s___100s__last_token_read_____50s__00404560[];
undefined4 FUN_0029a3b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int unaff_EDI;
  undefined1 local_54 [84];
  
  if (*(int *)(unaff_EDI + 4) != 0x114) {
    FUN_0029d580(0);
    pcVar3 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
    FUN_002953d0();
    if (*pcVar3 == '\0') {
      pcVar3 = s_<eof>_00404598;
    }
    FUN_00295370(s___100s__last_token_read_____50s__00404560,s__NAME__expected_00403fa8,pcVar3,
                 *(undefined4 *)(unaff_EDI + 0x1c),local_54);
  }
  uVar1 = FUN_00299650();
  uVar2 = FUN_00296110();
  *(undefined4 *)(unaff_EDI + 4) = uVar2;
  return uVar1;
}
