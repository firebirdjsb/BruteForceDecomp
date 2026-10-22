/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBDD2F5C5E3E989824641636C4AAFB0FC3EA8B43FA0593F490D9725856BCE675
 * Entry: 0x003115b0, Ghidra index: 11872, label: FUN_003115b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046cfc8;
void FUN_003115b0(void)

{
  if (DAT_0046cfc8 != (int *)0x0) {
    (**(code **)(*DAT_0046cfc8 + 8))(DAT_0046cfc8);
    DAT_0046cfc8 = (int *)0x0;
  }
  return;
}
