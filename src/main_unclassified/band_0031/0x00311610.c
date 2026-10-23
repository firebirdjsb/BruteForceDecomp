/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1462D360C4B2CF3AC4D1D7C06B498B2F0580927714A1E16F10921F875E0A4F54
 * Entry: 0x00311610, Ghidra index: 11875, label: FUN_00311610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046cfd4;
void FUN_00311610(void)

{
  if (DAT_0046cfd4 != (int *)0x0) {
    (**(code **)(*DAT_0046cfd4 + 8))(DAT_0046cfd4);
    DAT_0046cfd4 = (int *)0x0;
  }
  return;
}
