/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CEADDA5B86892EFE321EC82367398A20A37F57E07E4E724F1CE5A5494ACD2EE
 * Entry: 0x00311790, Ghidra index: 11887, label: FUN_00311790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a87d8;
extern uint32_t DAT_004a87ec;
extern uint32_t _DAT_004a87e8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311790(void)

{
  if (0xf < DAT_004a87ec) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004a87d8);
  }
  DAT_004a87ec = 0xf;
  _DAT_004a87e8 = 0;
  DAT_004a87d8 = DAT_004a87d8 & 0xffffff00;
  return;
}
