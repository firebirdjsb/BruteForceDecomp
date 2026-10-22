/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45451BAC9A69E3A445BF91524EF155DA6E353E9E3F79641748FFCC0DE9D4245F
 * Entry: 0x00295940, Ghidra index: 9326, label: FUN_00295940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_data_label_00404598.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_0x_02X_00404558[];
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_invalid_control_char_00404540[];
void FUN_00295940(void)

{
  char *pcVar1;
  int unaff_EDI;
  char local_58 [8];
  undefined1 local_50 [80];
  
  FUN_002eaa86(local_58,s_0x_02X_00404558);
  pcVar1 = local_58;
  FUN_002953d0();
  if (local_58[0] == '\0') {
    pcVar1 = BF_XBE_DATA_00404598;
  }
  FUN_00295370(s___100s__last_token_read_____50s__00404560,s_invalid_control_char_00404540,pcVar1,
               *(undefined4 *)(unaff_EDI + 0x1c),local_50);
  return;
}
