/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEFDC3037B2D84C8F8A3845920A567EB170D0F257BE047F43951B065F2CA35D5
 * Entry: 0x0029a1e0, Ghidra index: 9402, label: FUN_0029a1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_data_label_00404598.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_unexpected_token_00403fe4[];
void FUN_0029a1e0(void)

{
  char *pcVar1;
  int unaff_EDI;
  undefined1 local_54 [84];
  
  FUN_0029d580(0);
  pcVar1 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
  FUN_002953d0();
  if (*pcVar1 == '\0') {
    pcVar1 = BF_XBE_DATA_00404598;
  }
  FUN_00295370(s___100s__last_token_read_____50s__00404560,s_unexpected_token_00403fe4,pcVar1,
               *(undefined4 *)(unaff_EDI + 0x1c),local_54);
  return;
}
