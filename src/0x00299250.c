/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF60D436853313E66AC0137D71863873C0767C431ACA0781EC0AA4293A4A63A0
 * Entry: 0x00299250, Ghidra index: 9370, label: FUN_00299250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_too_many__s__limit__d__00404104[];
void FUN_00299250(undefined4 param_1)

{
  int in_EAX;
  int in_ECX;
  char *pcVar1;
  int unaff_EDI;
  undefined1 local_b8 [80];
  undefined1 local_68 [104];
  
  if (in_EAX < in_ECX) {
    FUN_002eaa86(local_68,s_too_many__s__limit__d__00404104,param_1);
    FUN_0029d580(0);
    pcVar1 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
    FUN_002953d0();
    if (*pcVar1 == '\0') {
      pcVar1 = s_<eof>_00404598;
    }
    FUN_00295370(s___100s__last_token_read_____50s__00404560,local_68,pcVar1,
                 *(undefined4 *)(unaff_EDI + 0x1c),local_b8);
  }
  return;
}
