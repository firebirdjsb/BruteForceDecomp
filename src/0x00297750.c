/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F99927FB08585CD3E46D2D1E8B440439FDDCCEC394F62F811B96F8B291C60BC3
 * Entry: 0x00297750, Ghidra index: 9350, label: FUN_00297750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00297750(void)

{
  if ((*(int *)(DAT_00469888 + 0x14) < 1) || (*(int *)(DAT_00469888 + 0x10) == -1)) {
    FUN_00295240();
  }
  FUN_00289d80();
  if ((*(int *)(DAT_00469888 + 0x14) < 2) || (*(int *)(DAT_00469888 + 0x10) == -2)) {
    FUN_00295240();
  }
  FUN_00289d80();
  if ((*(int *)(DAT_00469888 + 0x14) < 3) || (*(int *)(DAT_00469888 + 0x10) == -3)) {
    FUN_00295240();
  }
  FUN_00289d80();
  FUN_00289520(3);
  FUN_00292b40();
  return;
}
